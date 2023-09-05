/*
You should make sure you know how to compile your code with at least C++17.

Compile the following with one of the following
  - clang++ -std=c++17 -o oop oop.cpp
  - g++ -std=c++17 -o oop oop.cpp 
  - Visual Studio: Compile & run as normal, though you may need to
		   enable c++17 switch.
                   | https://docs.microsoft.com/en-gb/cpp/build/reference/std-specify-language-standard-version
  - XCode: Running C++17 | https://stackoverflow.com/questions/51288230/how-do-i-enable-c17-in-xcode-for-mac-osx
(Optional Read:) In case you wonder why C++17, here are some features we get:
  - https://isocpp.org/wiki/faq/cpp17-language
  - https://isocpp.org/wiki/faq/cpp14-language
  - https://isocpp.org/wiki/faq/cpp11-language
  - Note: You may also compile with C++20 if your compiler supports it.
*/

#include <iostream>
#include <cstdlib>
#include <ctime>
#include <cstring>

////////////////////////////////////////////
// Provided is a class named 'MObject'
// 
class MObject{
public:
	MObject();
	virtual ~MObject() = 0;
};

MObject::MObject(){
}

////////////////////////////////////////////


////////////////////////////////////////////
class Image{
	public:
	Image(unsigned int w, unsigned int h);
	~Image();		
        unsigned int getWidth();
        unsigned int getHeight();
        uint8_t getPixelColorR(unsigned int x, unsigned int y);
	uint8_t* getPixels() const;
    protected:
        void setPixelsToRandomValue(); // Sets all of the pixels to a specific value
	private:
        unsigned int m_width,m_height,m_colorChannels;
	uint8_t* m_Pixels;
};


Image::Image(unsigned int w, unsigned int h){
    std::cout << "Constructor called\n";
	m_width = w;
	m_height = h;
	m_colorChannels = 3; // Assume we support RGB channels only.
	m_Pixels = new uint8_t[w*h*m_colorChannels]; 
    // Call helper function to set pixels to a default color value.
    setPixelsToRandomValue();
}

Image::~Image(){
    // There is a bug here!
    // Think about what you are allocating here, 1 pixel or many!
	delete m_Pixels; 
}

unsigned int Image::getWidth(){
    return m_width;
}

unsigned int Image::getHeight(){
    return m_height;
}

// Retrieves a pixels specific color
// I wrote this specifically so you can debug if your
// copy constructor is actually working and you can check
// if the deep copy works.
// Note: I am returning the red component color of a pixel.
uint8_t Image::getPixelColorR(unsigned int x, unsigned int y){
    return m_Pixels[m_width*m_colorChannels*y+x]; // Returns pixel color location
}

// Return pointer to pixels
// Note: The 'const' after the function
// 	 is a gaureentee that any member variables
//       within this member function, will not be modified
//       or altered in any possible way.
//       That is, 'm_Pixels' will not be changed or updated
//       in this function.
uint8_t* Image::getPixels() const{
    return m_Pixels;
}

void Image::setPixelsToRandomValue(){
    uint8_t value = rand()%256+1;
    // Set the entire array to one color in one
    // function call
    memset(m_Pixels,value,m_width*m_height*m_colorChannels);
}

///////////////////////////////////////////
class Texture: public Image{
	public:
};
////////////////////////////////////////////





/* ******************************************** 
********************************************* */
int main(){
    srand(time(NULL));

    // Create a first image
	Image image1(100,200);
    // Create a second image
	Image image2 = image1;

    std::cout << "image1:" << image1.getWidth() << "," << image1.getHeight() << "\n";
    std::cout << "image1 red color at (0,0):" << (unsigned)image1.getPixelColorR(1,1) << "\n";
    std::cout << "image2:" << image2.getWidth() << "," << image2.getHeight() << "\n";
    std::cout << "image2 red color at (0,0):" << (unsigned)(image2.getPixelColorR(1,1)) << "\n";

    // Note: 
    // If you have not implemented the copy constructor, your program might crash 
    // at the end. This is because the shallow copy copies what the pointer points to
    // and that objects memory gets freed once in the destructor.
    // Then the second object which points to that same memory, tries to free memory that
    // has already been freed. This is known as a 'double-free'. A proper copy constructor
    // that does a deep copy will allocate memory for the copy.

	return 0;
}
