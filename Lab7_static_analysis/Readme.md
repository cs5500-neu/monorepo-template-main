# Lab 7

> "C++ Static Analysis"

For your lab today, you will be using a static analysis tool to check the quality of your code.

# Implementation Logistics

- You may use whatever operating system, IDE, or tools for completing this assignment.
	- However, my instructions will usually be using the command-line, and that is what I will most easily be able to assist you with.
- In the future there may be restrictions, so please review the logistics each time.

# Resources to help

Provided below are a list of curated resources to help you complete the task(s) below. Consult them (read them, or do ctrl+f for keywords) if you get stuck.


1. For Task 1 - Supercharging software development
	- cppcheck
		- https://linux.die.net/man/1/cppcheck
		- http://cppcheck.sourceforge.net/
			- Static analysis tool useful for checking if your C++ is being used correctly and enforcing best practices.
	- Visual Studio cppcheck extension
		- https://marketplace.visualstudio.com/items?itemName=Alexium.Cppcheckadd-in
	- CLion cppcheck tool
		- https://plugins.jetbrains.com/plugin/8143-cppcheck



# Task 1 - Supercharging software development

We are going to add a static analysis tool(cppcheck) to our toolset to help supercharge our software development and make sure that we are taking advantage of best practices in C++. While static analysis tools are not perfect (meaning not all errors are gaureenteed to be found, and you may also get false positives), the general use of static analysis can warn us of the possibility of a bug in any potential execution of our program. Static analysis can also be used to improve our code quality by generating more readable and modern style (i.e. modern constructs in the C++ language) code.

## Testing Tool

Testing is important, and the more we can automate (especially when using a language like C++) the better. First let's make sure we build our source code using warnings and debugging symbols from the compiler.

Compiling code with debugging symbols: `g++ -g -Wall -std=c++17 *.cpp -o App -lsfml-graphics -lsfml-window -lsfml-system`

- Use debug symbols (-g)
- Use warnings (-Wall)

Now, I want to introduce a tool called [cppcheck](https://cppcheck.sourceforge.io/). [Cppcheck](https://cppcheck.sourceforge.io/) is a 'static analysis tool' that will look at your code before you run and attempt to report any potential errors.

Running cppcheck from the command line: `cppcheck --enable=all *.cpp`

**Note** Make sure your cppcheck is at least version 1.8.2. Newer versions will catch more errors, so installing a more recent version is always advantageous.

```bash
mike@system76-pc:~/monorepo-psx95/Assignment2_DesignPatterns/part1/src$ cppcheck --version
Cppcheck 1.82
```

### Other tools

Note: Some compilers (g++, and to some extent clang++) also support a compiler flag based on effective c++ (A book written by Scott Meyers).

You can try for example: `g++ -g -Weffc++ -Wall -std=c++17 *.cpp -o App -lsfml-graphics -lsfml-window -lsfml-system`

See some details here: http://cpptruths.blogspot.com/2006/08/g-compiler-option-weffc.html

## The task

Once you have obtained cppcheck ([See the downloads page here](https://cppcheck.sourceforge.io/#download)), run cppcheck on your assignment 3. Report any errors in [exercise.md](./exercise.md) that you find.

Note: You may install cppcheck for whatever IDE you are using, and do not have to run it on the command line.

# Submission/Deliverables

### Submission

- Commit all of your files to github, including any additional files you create.
- Do not commit any binary files unless told to do so.
- Do not commit any 'data' files generated when executing a binary.

### Deliverables

- Write in [exercise.md](./exercise.md) two new things you learned about using cppcheck.
	- This could be an error your fixed, or something specific you learned about the tool.
 
# Going Further

What is that, you finished Early? Did you enjoy this assigment? Here are some (optional) ways to further this assignment.

- Try more cppcheck tutorials

# F.A.Q. (Instructor Anticipated Questions)

- Q: cppcheck is not giving me any output
	- A: Try: `cppcheck --enable=all ./src/*cpp -I ./include --suppress=missingIncludeSystem`
- Q: What about external libraries and cppcheck, can it find errors in code that we link in?
	- A: Try `-library=posix` and exploring the 'library' flag to see if we are able to capture errors from libraries.

# Found a bug?

If you found a mistake (big or small, including spelling mistakes) in this lab, kindly send me an e-mail. It is not seen as nitpicky, but appreciated! (Or rather, future generations of students will appreciate it!)

- Fun fact: The famous computer scientist Donald Knuth would pay folks one $2.56 for errors in his published works. [[source](https://en.wikipedia.org/wiki/Knuth_reward_check)]
- Unfortunately, there is no monetary reward in this course :)


