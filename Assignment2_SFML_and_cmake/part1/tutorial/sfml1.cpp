// INTRODUCTION
//
// SFML is the (S)imple (F)ast (M)edia (L)ibrary
// It provides functionality for things such as 
// creating a window, playing sounds, playing video,
// and functionality for drawing graphics.
// 
// LESSON
//
// In this lesson I am going to demonstrate some basic
// functionality to create a window on your desktop
// and to draw a shape. This is the equivalent of the
// first SFML tutorial on the official website.
//
// HOW TO COMPILE
//
// Note: I am going to show the instructions on the command-line.
// 	 There exist many wonderful SFML tutorials online for your
// 	 preferred IDE.
//
// g++ sfml1.cpp -o sfml1 -lsfml-graphics -lsfml-window -lsfml-system
//
// HOW TO RUN
//
// ./sfml1


// First we include the SFML header library
// Notice the structure of the include file.
// <SFML/...> where '...' is any library you would want.
// Note that their may be additional modules nested
// 	e.g. SFML/Graphics/Texture
// The Graphics.hpp module is the header file which
// specifies various graphics routines.
// You can find the module here: 
// https://www.sfml-dev.org/documentation/2.5.1/group__graphics.php
//
// Note that in C++, header files typically end in '.hpp'.
// While the extension does not matter, the convention is that C++ header files
// end in an additional 'pp' at the end, to indiciate that this is meant to be C++ code.
#include <SFML/Graphics.hpp>


// The entry point into our program.
int main(){

	// Because we are drawing a graphical program, we are going to
	// want to create a window.
	//
	// Desktop applications that you use often interface with
	// the operating system to draw a window for us. SFML makes
	// this easy for us.
	//
	// In the next line we are going to create a 'window' that is
	// 400 pixels wide by 400 pixels tall, and a title.
	// This window will automatically be 'destroyed' or in other words
	// when this instance of an object 'window' reaches the end of the 'main'
	// function, its destructor will be called.
	sf::RenderWindow window(sf::VideoMode(400,400), "Mikes Intro to SFML");
	
	// Great, we have a window, now let us actually create a shape.
	// Because we are interested in the graphics module, we can
	// create some primtives to draw on the window.
	// Here is an example of creating a circl with a radius of 100.0f
	// Note: Ending a decimal in '.f' explicitly makes it a float instead of a 
	// 	 'double' value.
	sf::CircleShape shape(100.0f);
	shape.setFillColor(sf::Color::Blue);


	// Our main application loop is here.
	// Because we are creating a little desktop application, we likely want
	// it to run forever, thus we have an infinite loop that will execute
	// for as long as the application is alive.
	// As 'events happen in this loop, we will handle them.
	while(window.isOpen()){
		// Each iteration of our loop, we create an event.
		// Because this is happening in an 'event loop' 
		// concerning the window, we are capturing events
		// that occur within a window.
		// These would be things like mouse clicks, keyboard presses
		// joystick moves, etc.
		sf::Event event;

		// So if any events happened, they are pushed into a queue
		// and then we can handle them.
		while(window.pollEvent(event)){

			// Here is a sample event that can be tracked.
			// In this example, we track to see if the 'x'
			// in the corner has been pressed, and we can then
			// close our window, and then terminate our program.
			if(event.type == sf::Event::Closed){
				window.close();
				exit(EXIT_SUCCESS);
			}
		}


		// In a window, typically wew want it to refresh and draw
		// a new 'frame' every time this loop executes. To do so
		// we first clear the contents of the window.
		window.clear();

		// Now the drawing begins. We draw some 'Graphics' object
		// (in this case our shape).
		window.draw(shape);

		// Finally, we display and put forth our graphics scene.
		window.display();
	}


	// We return '0' from main() if we terminate the program.
	return 0;

}
