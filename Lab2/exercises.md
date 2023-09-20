# Exercises (Modify this file)

Answer and complete the following exercises.

## Python Standard Library

1. How you name functions and member functions matter. Take a look at the [dictionary](https://docs.python.org/3/library/stdtypes.html#typesmapping)
   and [list](https://docs.python.org/3/library/stdtypes.html#sequence-types-list-tuple-range) member functions in the SL.
   Do the names of the member functions correlate to what they do? That is, are they good 'verbs' where the name of the function describes the action the code is doing? A good example would be a function called 'pop' which only removes one element. A bad example would be a function called 'pop' where one element is removed **and** that value is returned. A better name would be 'popAndGet' or 'popAndReturn', which captures the two events happening.

In general, Python follows the principle of having descriptive function names that correlate with their actions. However, there may be cases where the name doesn't perfectly capture all aspects of the function's behavior. In such cases, it's important to consider clarity and readability, and if necessary, use more descriptive names.

2. How does a dictionary differ from a list? (i.e. What is the underlying data structure of each container.)

In general, dictionaries are used for key-value pair associations, while lists are used for ordered collections of elements. Dictionary is implemented as a hash table, lists is implemented as an array in Python.

3. Does a list allow for random access? Meaning can I access any element(e.g. myList[7])?

A list allows random access as long as the given index is within the length of the list.

4. Observe that all the container data structures (i.e. list, set, dictionary, etc.) can work with any data type (integers, floats, custom data types, etc.).
   What do you think are the pros/cons of a library that can work with any data type?

Pros: Users wouldn't have to specify the datatype after initialize the container, which provides higher flexibility than other language(e.g. c).
Cons: The program would run less efficiently since it has to deal with different datatypes while executing.

## requests

1. Take a look at the requests API documentation here: https://requests.readthedocs.io/en/latest/  
   Comment if the functions are well named in the Requests module (Follow the previous link to the documentation to see if you can find the Requests module (hint: look for API Reference)).

All the functions are well named and following pythonic naming style.

2. Take a look at the [Requests](https://requests.readthedocs.io/en/latest/api/#lower-level-classes) class. APIs that have more than say 5 arguments in a function can be confusing or error prone to use. This is a heuristic of course, but do you see any member functions that include lots of arguments?

function requests.Request has 10 arguments, but most of them are optional, so it's not confusing when using.

3. Take another look at the Requests class. Note that many of the methods includes `**kwargs` as an argument. What is `**kwargs`? Why might it be good for a method to have a `**kwargs` argument? Why might it be bad?

\*\*kwargs is a special syntax used to pass a variable-length list of keyword arguments to a function or method. While \*\*kwargs provides flexibility, it can make the function less self-documenting because the allowed keyword arguments are not explicitly listed in the function's signature. Besides, it is bad for error handling and debugging due to the fact that the parameter is passed as key-value pairs.

4. Take a look at the [Session class.] (https://requests.readthedocs.io/en/latest/api/#request-sessions) Not only can you read the API's for that class, you can also view the source code by clicking the 'source' text.
   Notice how some methods have arguments that are set to `None` while other arguments are not set to anything. Why is that? Can arguments be set to anything besides `None`? Why might it be good to set an argument by some predetermined value?

1.Setting an arguments to "None" means that the argument is optional. 2.
2.Yes, arguments can be set to any valid Python value, not just "None". 3.
3.It can provide flexibility, backward compatibility, documentation and errorhandling.
