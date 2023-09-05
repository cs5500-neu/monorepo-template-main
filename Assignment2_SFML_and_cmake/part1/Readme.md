# Assignment - SFML and CMake

<img align="right" width="300px" src="./media/dart.jpg">

> "Finding your domain"

*You've decided to take the plunge as a C++ programmer.*

*And picking a domain of where you want to specialize is the next question. And this is something you have pondered quite a bit, trying to figure out where you want to apply your efforts. Sometimes finding your niche requires just trying a few different things.*

*All of a suddent you find a blog post about graphics programming. How cool you think--hmm, where can I get started?*

# Resources to help

Provided below are a list of curated resources to help you complete the task(s) below. Consult them (read them, or do ctrl+f for keywords) if you get stuck.

1. For Task 1
	- https://www.sfml-dev.org/tutorials/2.5/
		- Introduction to SFML tutorial 
	- Helpful links to the API documentation
		- https://www.sfml-dev.org/documentation/2.5.1/classsf_1_1Image.php
		- https://www.sfml-dev.org/documentation/2.5.1/classsf_1_1Sprite.php
		- https://www.sfml-dev.org/documentation/2.5.1/classsf_1_1Texture.php
	- [SFML - Easy Setup With VS Code](https://www.youtube.com/watch?v=XEGLsHp2bw0)
	- My SFML playlist
		- https://www.youtube.com/playlist?list=PLvv0ScY6vfd95GMoMe2zc4ZgGxWYj3vua
		- [SFML - Setup with Mac for command line including M1](https://www.youtube.com/watch?v=zjv4aGzFous)


# Your Task

## Task 0 - Learning a new tool

Learning a new API can be a bit overwhelming. In my experience when you start off a new job, you are often thrown into a large codebase with  little documentation. One skill you should learn is that it is okay to ask for help from your colleagues when this happens. However, if this is not an option, you'll have to have a few techniques to learn more about the codebase. Here are my tips and advice:

1. If it's a public API (i.e. not internal to the company), search for tutorials!
2. If it is internal, find out if there is documentation.
3. Learn where to look in the source code for help.
	- One nice thing about C++ code, is the header files(.hpp) typically serve as documentation. This is because they serve as the interface.
4. Search to see if there are examples included in the source, or even unit tests that may help uncover basic functionality of the API.

For today, you are in luck! Your 'search' results in 4 tutorials in the [tutorial](./tutorial) folder as well as a [tutorial website here](https://www.sfml-dev.org/tutorials/2.5/).

Your first task is going to be to get acquainted with [SFML](https://www.sfml-dev.org/index.php). You are going to evaluate the SFML API by first learning through some tutorials to build a simple version of a painting program-- mini-paint!

### Task 1 - Choose your platform

Pick the appropriate tutorial below for your operating system to install the SFML library. Note, I have ordered them from top to bottom in order of the most preferred to least preferred option.

1. Linux on command line: https://www.sfml-dev.org/tutorials/2.5/start-linux.php
	- If you want to use an IDE on linux you can use: https://www.sfml-dev.org/tutorials/2.5/start-cb.php
2. Linux on Virtual Box (Highly recommended for Windows Users)
	- In theory everyone can install SFML on virtual box and follow the linux instructions for the entirety of the course.
	- **I am going to strongly encourage that everyone on Windows or a non M1-Mac installs the virtual box to work on a linux environment**
	- Working in a linux environment is generally much simpler for folks.
	- Checkout the [./../../VirtualMachines](./../../VirtualMachines) directory for more information.
3. Mac on the Command line: https://stackoverflow.com/questions/9054987/how-can-i-compile-sfml-project-via-command-line-on-mac
4. Windows with Visual Studio: https://www.sfml-dev.org/tutorials/2.5/start-vc.php
5. Mac with Xcode: https://www.sfml-dev.org/tutorials/2.5/start-osx.php

### Task 2 - Learning

I have provided four self-contained source code samples for you in the [tutorial](./tutorial) directory for you to get acquainted with SFML here ([Some setup videos for your platform](https://www.youtube.com/playlist?list=PLvv0ScY6vfd95GMoMe2zc4ZgGxWYj3vua) are listed in a playlist there)

1. [sfml1.cpp](./tutorial/sfml1.cpp) - Creating a basic window and shape
2. [sfml2.cpp](./tutorial/sfml2.cpp) - Handling Key presses
3. [sfml3.cpp](./tutorial/sfml3.cpp) - Creating a drawable canvas
4. [sfml4.cpp](./tutorial/sfml4.cpp) - Improving slightly on the drawable canvas

Read through each, and try each example out somewhere on your machine (You need not commit any 'practice' code to your repository, but you are welcome to do so if it helps you stay organized). The [SFML tutorial](https://www.sfml-dev.org/learn.php) on the official SFML website may also be helpful.

### Task 3 - Application Specifications

Now that you have become acquainted with SFML, you are going to create a file called [./../part2/src/minipaint.cpp](./../part2/src/minipaint.cpp) and commit it to your repository in the [../part2](../part2) directory.

Implement the following functionality:

1. The window and drawable canvas should be 600x400 (600 pixels wide, 400 pixels high)
2. Pressing the number keys 1 through 8 allows you to draw in a different color.
	- Use the Static Public Attributes of the [sf::Color](https://www.sfml-dev.org/documentation/2.5.1/classsf_1_1Color.php) class such that:
	- 1 = Black
	- 2 = White
	- 3 = Red
	- 4 = Green
	- 5 = Blue
	- 6 = Yellow
	- 7 = Magenta
	- 8 = Cyan
3. Pressing the space key will clear the entire canvas. 
	- This means all pixels will be removed, and the entire canvas will be a solid color with the last color you have selected.
	- (In other words, this fills the entire canvas with the last selected color)
5. When a the mouse is pressed and a user left-clicks (i.e. on the pressed event, not released) a pixel color will change wherever the mouse is located. This should allow me to drag and draw over the canvas like a pencil on a piece of paper.
6. Pressing the escape key should terminate the program.

## Testing

- Task 3
	- We are going to compile and run your minipaint.cpp file on our system into a binary called **minipaint** and test for the functionalities listed in Task 3.

# Submission/Deliverables

### Submission

- Commit all of your files to github, including any additional files you create.
- Do not commit any binary files unless told to do so.
- Do not commit any 'data' files generated when executing a binary.

### Deliverables

- Task 3
	- A working [./../part2/src/minipaint.cpp](./../part2/src/minipaint.cpp) in the [../part2](../part2) directory. 

# Going Further

An optional task(if any) that will reinforce your learning throughout the semester--this is not graded.

1. Feel free to play more with SFML! We will be working in this library more in the future!

# F.A.Q. (Instructor Anticipated Questions)

1. Q: I am having trouble compiling and linking SFML
	- A: First try following the tutorials on the SFML library. Try to get familiar with whatever tool you are using (Visual Studio, XCode, Codeblocks, command-line), and also look at tutorials for how to link libraries in general. In the worse case the linux setup is easy to follow, and you could complete the assignment on a virtual machine.
2. Q: I cannot get SFML running on Khoury
	- A: The expectation is this assignment will be run locally on your machine. You can compile SFML from source (you cannot install packages on Khoury yourself), and then you could link to those libraries if you really like.
3. Q: The mouse coordinates appear to be discrete (i.e. not move continuously), is this okay? Meaning, I cannot draw a straight line if I move my mouse fast.
	- A: Yes, this fine for now. Likely because mouse events can only be reported so fast, especially as you move your mouse this is going to occur. We will fix this later.

### For Mac M1 users

Q: Mac M1 is not working with SFML

1. First install homewbrew: https://brew.sh/
2. Then install sfml: `brew install sfml`
	- This will install the sfml library (I believe this should be version 2.5 or greater)
3. You can figure out where the include files are by running:
	- `brew info sfml`
	- The directory will tell you where the #include directory is. We need to pass that directory on that command line with the capital 'i'. Again, this is where our header files come from.
4. We also need to tell our linker what folder the libraries are in, that's where the -L comes in.
	- (This is where the directory containing sfml-graphics for example exists)
5. Finally we link in our libraries with '-l' (lowercase l)
	- This performs the actual 'glue' step of taking in code from a third-party library, and linking it.
6. `g++ sfml.cpp -o prog -I/opt/homebrew/Cellar/sfml/2.5.1_1/include -L/opt/homebrew/Cellar/sfml/2.5.1_1/lib -lsfml-system -lsfml-window -lsfml-graphics`
	- Give this a try. Again, your -I and -L paths may not be exactly the same, and you can query that with brew info sfml
