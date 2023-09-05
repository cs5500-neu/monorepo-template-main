Below are some brief notes I have written. For full style guides it is useful to see what actual companies are doing. Here is an example of code style conventions: http://google.github.io/styleguide/

# Github conventions

1. Commit your code changes to the repository often, this is best practice.
2. Do not commit your .o file, your executable file, or any other binary to the repository--this is considered bad practice! 
	- In fact, committing any binary file is bad practice! Other tools have been developed to more efficiently handle revisions of binary files.
4. On Functionality/Style
	1. You should have comments in your code to explain what is going on, and use good style (80 characters per line maximum for example, functions that are less than 50 lines, well named variables, well named functions etc.).

# Code Style Guide

1. [PEP 8 Style Guide](https://peps.python.org/pep-0008/)
	
### Some Quick Tips

1. Do not duplicate code (i.e. Use functions)
2. Typically, keep your functions to less than 50 lines.
3. Name your functions and variables consistently. Meaning if you start them with uppercase letters, do so.  
4. Write comments liberally. Comments are more useful when they explain 'why' you are doing something. The 'what' is seen from the code.
5. Indent your code for each nested block. This makes the code easier to follow.
