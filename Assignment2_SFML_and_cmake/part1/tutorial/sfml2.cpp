// LESSON
//
// In this lesson we are going to get slightly more interactive.
// This time I am going to show you how to capture mouse events.
//
// HOW TO COMPILE
//
// Note: I am going to show the instructions on the command-line.
// 	 There exist many wonderful SFML tutorials online for your
// 	 preferred IDE.
//
// g++ sfml2.cpp -o sfml2 -lsfml-graphics -lsfml-window -lsfml-system
//
// HOW TO RUN
//
// ./sfml2


// Include our Third-Party SFML header
#include <SFML/Graphics.hpp>
// Include standard library C++ libraries.
#include <iostream>


// The entry point into our program.
int main(){

	// This time I have modified our render window slightly
	// I have added an optional parameter (sf::Style::Titlebar) to the creation
	// of our window.
	// Note that you can have 'optional' parameters in C++.
	sf::RenderWindow window(sf::VideoMode(400,400), "Insanely Great!",sf::Style::Titlebar);

	// Set the sync rate after creating a window
	// Refreshes window at same rate as the monitor.
	// Note: This is not always optimal, but a quick way to make sure our window
	// refreshes about as fast as our monitor.
	window.setVerticalSyncEnabled(true);

	sf::CircleShape shape(100.0f);
	shape.setFillColor(sf::Color::Blue);
 
	// Main Program Loop
	while(window.isOpen()){
		// Capture events in our main window	
		sf::Event event;

		// Main event loop that cycles through event queue
		while(window.pollEvent(event)){
			// Note: We only have a 'minimize' button
			// 	 in our window right now, so this event is not 
			// 	 going to fire.
			// 	 However, if we detect this event, then
			// 	 our window will close, and we will terminate our
			// 	 program.
			if(event.type == sf::Event::Closed){
				window.close();
				exit(EXIT_SUCCESS);
			}

			// One of the event types we can capture is when
			// a keyboard key is released. We can conversely
			// also capture when a key is pressed (sf::Event::KeyPressed)
			// if we want behavior such that we can hold down a key.
			// For information on the trade-offs see:
			// https://www.sfml-dev.org/tutorials/2.5/window-inputs.php
			if(event.type == sf::Event::KeyReleased){
				std::cout << "A Key was released" << std::endl;
				if(event.key.code == sf::Keyboard::Escape){
					std::cout << "escape released" << std::endl;
					window.close();
					exit(EXIT_SUCCESS);
				}
			}

			// As another example of an event that can be captured, here
			// is the Mouse Pressed event.type.
			if(event.type == sf::Event::MouseButtonPressed){
				// Here we are outputting information about where the mouse
				// button was pressed, that is the (x,y) coordinate within the
				// window.
				// Note: The top-left corner is (0,0), and the bottom-right (400,400).
				std::cout << "Clicked: " << event.mouseButton.x << ","
					  << event.mouseButton.y << std::endl;
				// We may want to specify if the mouse click was a left or right
				// click as an example, so we can also detect that event.
				if(event.mouseButton.button == sf::Mouse::Left){
					std::cout << " and a left-click " << std::endl;
				}
			}
		}

		// Clear our window
		window.clear();

		// Begin to draw
		window.draw(shape);

		// Display shapes that are being drawn
		window.display();
	}

	return 0;

}
