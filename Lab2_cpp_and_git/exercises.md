# Exercises (Modify this file)

Answer and complete the following exercises.

## C++

1. How you name functions and member functions matter. Take a look at the [list](https://en.cppreference.com/w/cpp/container/list) and [vector](https://en.cppreference.com/w/cpp/container/vector) member functions in the STL. Do the names of the member functions correlate to what they do? That is, are they good 'verbs' where the name of the function describes the action the code is doing? 
  - A good example would be a function called 'pop' which only removes one element.
  - A bad example would be a function called 'pop' where one element is removed **and** that value is returned. A better name would be 'popAndGet' or 'popAndReturn', which captures the two events happening.

*Edit your responses here*

2. How does a vector differ from a list? (i.e. What is the underlying data structure of each container.)

*Edit your response here*

3. Does a list allow for random access? Meaning can I access any element(e.g. myList[7]) in a std::list in C++?

*Edit your response here*

4. Observe that all of the container data structure (i.e. list, vector, map, etc.) are [templated](http://www.cplusplus.com/doc/oldtutorial/templates/) (This is the equivalent to generics in Java). In C++ that means this data type can work with any data type (integers, floats, custom data types, etc.). What do you think are the pros/cons of a library that can work with any data type?

*Edit your response here*

## SFML

1. Take a look at the SFML API documentation here: https://www.sfml-dev.org/documentation/2.5.1/modules.php SFML is a multimedia library for creating graphics applications. Comment if the member functions are well named in the Texture class (Follow the previous link to the documentation to see if you can find the Texture class :) ).

*Edit your responses here*

2. Take a look at the [Socket](https://www.sfml-dev.org/documentation/2.5.1/annotated.php) class. APIs that have more than say 5 arguments in a function can be confusing or error prone to use. This is a heuristic of course, but do you see any member functions that include lots of arguments?

*Edit your responses here*

3. Take another look at the sf::socket Class reference [Socket](https://www.sfml-dev.org/documentation/2.5.1/annotated.php). Note that one of the Public Types is an 'enum' called status. An enum is simply a range of values that are listed with a name. Why do you think someone should use an enum over say, just using integer to represent that status, if the value 0 for example, still corresponds to Done (and 1=NotReady, 2=Partial,3=Disconnected, etc.) 

*Edit your responses here*

4. Take a look at the bool [sf::Image::loadFromMemory](https://www.sfml-dev.org/documentation/2.5.1/classsf_1_1Image.php#aaa6c7afa5851a51cec6ab438faa7354c) member function.  The first agument is marked as 'const'. Why might it be good for a function parameter to be 'const'?

*Edit your responses here*
