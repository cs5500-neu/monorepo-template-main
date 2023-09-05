// LESSON
//
// In this lesson, we are going to improve on our previous tutorial.
// We are going to use some more mouse functions, and this time move
// the mouse movements outside of the event loop.
//
// Then we are going to learn about another data type in SFML called
// the vector, and one of its template specializations for storing
// mouse coordinates.
//
// HOW TO COMPILE
//
// Note: I am going to show the instructions on the command-line.
// 	 There exist many wonderful SFML tutorials online for your
// 	 preferred IDE.
//
// g++ sfml4.cpp -o sfml4 -lsfml-graphics -lsfml-window -lsfml-system
//
// HOW TO RUN
//
// ./sfml4

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
	sf::Image image;
	image.create(400,400, sf::Color::White);	
		
	// Create the texture that will be displayed
	sf::Texture texture;
	texture.loadFromImage(image);
	
	// Create a sprite that we overaly
	// on top of the texture.
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
				// Check if the escape key is pressed.
				if(event.key.code == sf::Keyboard::Escape){
					std::cout << "escape Pressed" << std::endl;
					window.close();
					exit(EXIT_SUCCESS);
				}
			}
		}
	
		// This time we are going to move our mouse events
		// outside of our event-loop above.
		// Because the mouse is always active, SFML provides some 
		// static public member functions to access the state of the mouse.
		// A static public member function belongs to all instances of the mouse
		// class. 'static' again means that all instances of a mouse
		// (if there were several) would share data.		
		// We can also think of using static functions within a class, as just
		// member functions that are always available.
		if(sf::Mouse::isButtonPressed(sf::Mouse::Left)){
			// When the mouse is pressed, we then want to retrieve
			// it's position. We can use sf::Mouse::getPosition(window)
			// which will retrieve the mouse press of the current button.
			// The 'getPosition' function can only return one value,
			// but we need an x and a y cooridinate. We get around this by
			// returning something called a 'Vector', which you can think of
			// from your math days as a structure that can be a 2D vector, 3D Vector
			// or possibly more dimensions. For now, lets just think of it as
			// a data type that can store at least 2 integers.

			// We are going to use a new data type called 'Vector2i'
			// Vector2i holds 2 integer values, an x and a y value.
			// Note: Vector2 is a generic data type, so we could store
			// 	 alternative values such as a float.
			//	 We could use Vector<float> for instance to store
			//       an x and y coordinate that are floats.
			//       Vector2i is equivalent to Vector<int>, which we would
			//	 also just call a template specialization, or otherwise
			//	 a special version of a generic data type.
			sf::Vector2i coords = sf::Mouse::getPosition(window);
			// Now we can modify our image based on the mouse position
			// and our current paint brush.
			image.setPixel(coords.x,coords.y,sf::Color::Black);
			// We load into our texture the modified mpixels
			texture.loadFromImage(image);	
		}

		// Clear our window
		window.clear();
		// Draw our sprite 
		window.draw(sprite);
		// Display on our window any sprites or any shapes we have drawn.
		window.display();
	}

	return 0;

}
