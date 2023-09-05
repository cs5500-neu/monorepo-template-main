# Debugging

<!-- <img align="right" src="./media/debugging.gif" width="300px" alt="picture"> -->

> How to debug C++ Code

# Logistics

You will be learning about debugging.

# Resources to help

Some additional resources to help you through this lab assignment

- For Linux Users
	- [GDB Beginner Masterclass](https://www.youtube.com/watch?v=MTkDTjdDP3c)
	- [My debugging tutorial 2](https://youtu.be/RuMMw7pBtnw)
- For Mac users	
 	- [My LLDB Debugging tutorial](https://www.youtube.com/watch?v=v_C1cvo1biI) 
 	- A mapping of LLDB to GDB commands: https://lldb.llvm.org/use/map.html
	- [Quick and Dirty LLDB: All you need in 5 minutes.
](https://www.youtube.com/watch?v=3BkEOvI36Ds)
- For Windows users
	- (Same as my gdb tutorial if working on command line)
	- If using Visual Studio try: https://www.youtube.com/watch?v=0ebzPwixrJA

# Description

Debugging is an essential skill for programmers. For this lab, I want you to explore using a debugger. For some of you this may be the first time using such a tool, so I want you to have some exposure at the least. Debuggers can be a more powerful way to debugging rather than using 'cout' statements everywhere in your code (although that can also be effective!).

## Task 1 - Debugging

Please watch the first video [GDB Beginner Masterclass
](https://www.youtube.com/watch?v=MTkDTjdDP3c&list=PLvv0ScY6vfd-GGT-aUH31X2yXgBSYXo6t&index=2&)

* Some notes:
	* Compile your program with the '-g' option
	* gdb ./prog 
		* This will run the program
	* gdb ./prog --tui
		* This will run the program and start the Text User Interface (Otherwise, just hit ctrl+x then 1)
	* start 
		* Starts your program
	* n or 'next'
		* moves to the next line that is visible
	* s or 'step'
		* Steps into a function
	* br *function or line*
		* insert a breakpoint
		* 'info breakpoints' will display our breakpoints.
	* c or 'continue'
		* continues

Please watch the second following video: [https://youtu.be/RuMMw7pBtnw](https://youtu.be/RuMMw7pBtnw) The origin of this video was actually from office hours, and I think learning how to debug code makes ones life much easier as a programmer (it's what we spend most of our time honestly doing!). Your task will be to work through and understand some of the basics of how to use your debugger for your system and then report on your learnings.

And here is a bonus third tutorial: [https://www.youtube.com/watch?v=PorfLSr3DDI](https://www.youtube.com/watch?v=PorfLSr3DDI). Some of you may have already watched it, which is wonderful! 

## Assignment Strategy

My suggested strategy for this assignment is:

- N/A

## How to run your program

- N/A

# Submission/Deliverables

### Submission

- Commit all of your files to github, including any additional files you create.
- Do not commit any binary files unless told to do so.
- Do not commit any 'data' files generated when executing a binary.

### Deliverables

- Write in [exercise.md](./exercise.md) two new things you learned about debugging and copmlete the two mini-debugging exercises.
 	- Note: You do not have to use GDB, it is okay if you have a different debugger.

# Going Further

What is that, you finished Early? Did you enjoy this assigment? Here are some (optional) ways to further this assignment.

- Try more debugging tutorials

# F.A.Q. (Instructor Anticipated Questions)

- Q: None so far!
	- A: TBD

# Found a bug?

If you found a mistake (big or small, including spelling mistakes) in this lab, kindly send me an e-mail. It is not seen as nitpicky, but appreciated! (Or rather, future generations of students will appreciate it!)

- Fun fact: The famous computer scientist Donald Knuth would pay folks one $2.56 for errors in his published works. [[source](https://en.wikipedia.org/wiki/Knuth_reward_check)]
- Unfortunately, there is no monetary reward in this course :)
