# Exercises

Update your answers to the following questions, make sure to commit this file and your improved code as well!


## Task 1 - oop.cpp

1. What is the difference between a virtual and a pure virtual member function in a class?
	- *edit your response*
2. Is MObject an abstract or a concrete class? Explain why:
	- *edit your response*
3. The 'Image' class allocates memory in the 'constructor' and 'deallocates' memory in the destructor. This idiom is known as RAII. What does RAII stand for?
	- *edit your response*
4. What is the bug in the destructor of Image? Fix the bug in the oop.cpp code and report why it was an error here. Hint: It has to do with the 'delete' operator.
	- *edit your response*
5. In C++, what is a copy constructor? Is it different than the copy assignment ('=') operator? 
	- *edit your response*
6. How do you define a copy constructor and copy assignment operator for the 'Image' Class? (i.e. What is the member function signature)
	- *edit your response*
7. Define a copy constructor and a copy assignment operator for the Image class such that they both do a deep copy of all dynamically allocated memory. Remember that dynamically allocated memory, is memory that is allocated with the 'new' operator in C++.
	- *edit your response*
8. In the 'main.cpp' function, which is called, copy constructor or copy assignment operator?
	- *edit your response*
9. What class does Texture inherit from?
	- *edit your response*
10. Does the Texture class inherit the 'protected member functions' from 'Image'? Hint: look at the Texture declaration `class Texture: public Image`. 
	- *edit your response*
11. Can either the Image or the Texture class call the protected members of the class in main?
	- *edit your response*
12. Do you think a texture should have a 'has-a' (composition) or 'is-a'(inheritance) relationship with 'Image'? If you think it is a 'has-a' relationship, refactor the code. As long as you defend your decision in the response below it could be either--but defend your position well!
	- *edit your response*
13. I did not declare a constructor or destructor for Texture. Does C++ Automatically create constructors and destructors for us? 
	- *edit your response*
14. Does C++ Automatically create a copy constructor for us as well?
	- *edit your response*

## Task 2 - Singleton

1. Refactor the singleton.cpp file such that:
  - The first time the logger is constructed you do:
  	-  `cout :: << "Logger created exactly once\n";`
  - If the logger is already initialized you do:
  	-  `cout:: << "logger already created\n";`
Note: You do not 'have' a constructor, but you construct the object in the *instance* member function where you will create an object.  
  
*edit the code directly*  
  
2. Answer the following
  - Why is the constructor and copy constructor private in the Singleton class?
  
*edit your response*  
