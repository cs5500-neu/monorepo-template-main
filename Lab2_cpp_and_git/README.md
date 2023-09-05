# Lab 2

<img src="./media/logo.png" align="right" width="500px"/>

> "Looking at APIs"

An important part of building software is to build an Application Programming Interface (API) that can support you. The more reusable, scalable, and maintainable the API is the better. Well designed APIs can also be shared amongst your team members through multiple projects speeding up development time. Planning a good API up front can be an important part of the planning stage of the software development life cycle(SDLC) as well.

For your lab today, you will be getting acquainted with C++ and git again. You will additionally be looking at some APIs and programming libraries so you can get an idea of what a good API is when designing your own.

# Implementation Logistics

- You may use whatever operating system, IDE, or tools for completing this assignment.
	- However, my instructions will usually be using the command-line, and that is what I will most easily be able to assist you with.
- In the future there may be restrictions, so please review the logistics each time.

# Resources to help

Provided below are a list of curated resources to help you complete the tasks below. Consult them (read them, or do Ctrl+f for keywords) if you get stuck.

- Task 1
	1. [Pro Git book](https://git-scm.com/book/en/v2/)
		* The first three chapters freely available will help you if you are struggling with Task 1.
	2. [Sample gitignores](https://github.com/github/gitignore)
		* See a comprehensive list of .gitignore files
		* See additional notes on gitignore here: https://git-scm.com/docs/gitignore
	3. [Git Beginner Masterclass](https://www.youtube.com/watch?v=HlYJpuwaXiE&list=PLvv0ScY6vfd-GGT-aUH31X2yXgBSYXo6t&index=5)
		* My crash course introduction to Git
- Task 2
	1. [C++ Standard Library](http://www.cplusplus.com/reference/)
		* See built-in functionality in the langauge.

# Task 1 - More Git (Reading + 1 action item)

Please complete the reading and action item in [task1.md](./task1.md)

# Task 2 - Basic C++ APIs (Reading + 1 action item)

For this task you are going to be analyzing the C++ [Standard Template Library](https://en.wikipedia.org/wiki/Standard_Template_Library) (STL) and another API called the [Simple and Fast Media Library](https://www.sfml-dev.org/index.php) (SFML).

The STL is a good example of an application programming interface where much thought has been given to the design and for the clients who will be using the STL (i.e. us, the programmers in the C++ language). It may not be 100% perfect, but it is a good starting point to look at Application Programming Interfaces (APIs).

[SFML](https://www.sfml-dev.org/) is another library that has been around for quite some time, and is on its second major iteration. It will be the main C++ library that we use in this class for our course project.

## Prompt

### C++ STL

When learning a new programming language, often times that involves learning the key libraries associated with it so that we do not have to rebuild everything from scratch. Reinventing and relearning data structures in a new language is a good practice, but for us that will not be necessary as we can take advantage of the standard library provided with the compiler for C++. Because the standard library is widely distributed, much thought is taken to make it execute in a uniform way and predictable way. A good API will also abstract out a lot of the implementation details, so you only need to worry about what you need to do (Note: Knowing what is going on behind the scenes is important for security and performance however).

### SFML

We're going to be doing some graphical and networking tasks in this course. The C++ STL Library includes many of the functionality that we need, but it does not come with a graphics and windowing library. So instead, we will be using the SFML library that has been created to help us with graphics tasks.

## Your Task (Your action item)

Modify the [exercises.md](./exercises.md) after visiting each of the pages below:

1. [Vector](http://www.cplusplus.com/reference/vector/vector/)
	- Alternative documentation [here](https://en.cppreference.com/w/cpp/container/vector)
2. [List](http://www.cplusplus.com/reference/list/list/)
	- Alternative documentation [here](https://en.cppreference.com/w/cpp/container/list)
3. https://www.sfml-dev.org/documentation/2.5.1/
 
## Testing

We will be looking at your repository to see that you have a .gitignore file in your repository, and that you have answered the questions in [exercises.md](./exercises.md).

# Submission/Deliverables

### Submission

- Commit all of your files to github, including any additional files you create.
- Do not commit any binary files unless told to do so.
- Do not commit any 'data' files generated when executing a binary.

### Deliverables

- Task 1
	- add/commit/push a [.gitignore](./.gitignore) file to the root directory of your monorepo on the main branch.
- Task 2
	- Modify the [exercises.md](./exercises.md) 
	- add/commit/push your [exercises.md](./exercises.md) 

# Rubric

You (and any partner(s)) will receive the same grade from a scale of 0-2. Both partners should commit the same code.

- 0 for no work completed by the deadline
- 1 for some work completed, but something is not working properly
- 2 for a completed lab (with possible 'going further' options completed)

# Going Further

An optional task(if any) that will reinforce your learning throughout the semester--this is not graded.

1. Investigate other data structures provided in the C++ Standard Template Library (i.e. map, queue, unordered map, bitset, and array).

# F.A.Q. (Instructor Anticipated Questions)

1. Q: Should I always be working in another branch?
	- A: Yes, it's a good habit to start forming now.
