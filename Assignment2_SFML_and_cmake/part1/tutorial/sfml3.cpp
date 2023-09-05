// LESSON
//
// In this lesson I am going to show you how we can draw on
// a canvas. You are going to learn some new terms such as
// 'texture' and 'sprite'. Further looking at the documentation
// on the SFML website may also help supplement your understanding.
//
// Our goal will be to build a tool that when we click on the window
// a pixel is filled in (i.e. colored to another pixel color).
//
// Our strategy will be to modify the pixel colors of an image that
// we are rendering across our window.
//
// HOW TO COMPILE
//
// Note: I am going to show the instructions on the command-line.
// 	 There exist many wonderful SFML tutorials online for your
// 	 preferred IDE.
//
// g++ sfml3.cpp -o sfml3 -lsfml-graphics -lsfml-window -lsfml-system
//
// HOW TO RUN
//
// ./sfml3

// Include our Third-Party SFML header
#include <SFML/Graphics.hpp>
#include <SFML/Graphics/Image.hpp>
#include <SFML/Graphics/Texture.hpp>
#include <SFML/Graphics/Sprite.hpp>
// Include standard library C++ libraries.
#include <iostream>


// The entry point into our program.
int main(){
	// Create a rendering window where we can draw an image on
	sf::RenderWindow window(sf::VideoMode(400,400), "Mini-Paint alpha version",sf::Style::Titlebar);
	// Set the sync rate after creating a window
	// Refreshes window at same rate as the monitor
	window.setVerticalSyncEnabled(true);

	// create an image to draw on in the window
	// This will be our image that we draw on.
	sf::Image image;
	image.create(400,400, sf::Color::White);
		
	// Create the texture that will be displayed
	// A texture is the 'surface' or appearance of a 
	// 'sprite' (defined below) or some other 3D object in
	// computer graphics.
	// Note: A texture in SFML is image data that is loaded up
	//	 onto a GPU to be drawn to your screen faster.
	sf::Texture texture;
	texture.loadFromImage(image);
	
	// A sprite is an entity that can move.
	// An example of a sprite would be the character
	// Mario in the video game Super Mario Brothers, or 
	// Micky Mouse moving on a tv screen. Sprites are 
	// simply moveable 2D images.
	// In these next two lines we are first going to create
	// a sprite, and then draw over it a 'texture' which is
	// what is drawn.
	// Sprites can consist of multiple textures (or layers) that may be blended
	// together for example.
	sf::Sprite sprite;
	sprite.setTexture(texture);

	// Main Program Loop
	while(window.isOpen()){	
		// Capture events in our main window	
		sf::Event event;

		// Main event loop that cycles through event queue
		while(window.pollEvent(event)){
			// Our close event.
			// Note: We only have a 'minimize' button
			// 	 in our window right now, so this event is not 
			// 	 going to fire.
			if(event.type == sf::Event::Closed){
				window.close();
				exit(EXIT_SUCCESS);
			}

			// Capture any keys that are released
			if(event.type == sf::Event::KeyReleased){
				std::cout << "Key Pressed" << std::endl;
				// This time we are explicitly going to check if
				// the escape key is pressed.
				// Certain common keys like escape, control, shift
				// can be referened from sf::Keyboard::"a key"
				// Other keys will be referenced by 'key codes'
				if(event.key.code == sf::Keyboard::Escape){
					std::cout << "escape Pressed" << std::endl;
					window.close();
					exit(EXIT_SUCCESS);
				}
			}

			// Now we are going to capture an event whenever the mouse is pressed.
			if(event.type == sf::Event::MouseButtonPressed){
				// We will very specifically detect if when a mouse button was pressed
				// if it was the left-click.
				if(event.mouseButton.button == sf::Mouse::Left){
					// When we click our mouse button, we will also
					// capture 'where' the event happened. In the case
					// of a mouse event, this means the x and y coordinate.
					// I am going to save these values in a variable on the stack since x and y
					// will be used multiple times.
					int x = event.mouseButton.x;
					int y = event.mouseButton.y;
					std::cout << "filled pixel at: " << x << ","  << y << std::endl;
					// Now here is a little trick we have to use in order to modify our texture.
					// We are learning three new terms used in graphics this lesson.
					// (1) image  - a collection of pixels, usually stored in some
					// 		format like .jpg, .gif, .png, etc.
					// (2) texture- The surface of some 'graphics object' (i.e. sprite or 3D model)
					// 		which is uploaded to a GPU to be rendered.
					// (3) sprite - A moveable 2D entity, usually with some texture data to
					// 		represent a character, shape, or other graphical element.
					
					// Okay, so in order to change a pixel, we have the coordinates where we want
					// to change things. And we are changing the data, or otherwise setting a new
					// pixel value for our 'image' above.
					image.setPixel(x,y,sf::Color::Black);
					// Once we have changed the pixel of our image, one strategy we can use to 
					// give the appearance of painting, is to then reload our image into our texture.
					// Our texture will then be drawn using the new image data with the new pixel value
					// that we have set.
					texture.loadFromImage(image);
				}
			}
		}

		// Clear our window
		window.clear();
		// Draw our sprite, which has a beautiful texture on it (initially a blank canvas)
		window.draw(sprite);
		// Display on our window any sprites or any shapes we have drawn.
		window.display();
	}

	return 0;

}
