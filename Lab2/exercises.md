# Exercises (Modify this file)

Answer and complete the following exercises.

## Python Standard Library

1. How you name functions and member functions matter. Take a look at the [dictionary](https://docs.python.org/3/library/stdtypes.html#typesmapping) 
and [list](https://docs.python.org/3/library/stdtypes.html#sequence-types-list-tuple-range) member functions in the SL. 
Do the names of the member functions correlate to what they do? That is, are they good 'verbs' where the name of the function describes the action the code is doing? 
  - A good example would be a function called 'pop' which only removes one element.
  - A bad example would be a function called 'pop' where one element is removed **and** that value is returned. A better name would be 'popAndGet' or 'popAndReturn', which captures the two events happening.
  
 To my opinion, yes the name of the function corresponds to what they are doing. For example, functions like sort(), count(), and index() are equivalent to their actions. But few names like append() and insert() are are a bit confusing because they do the same actions but it depends on the position.


1. How does a dictionary differ from a list? (i.e. What is the underlying data structure of each container.)
 1. Dictionaries are built in mapping data types which are unordered collections of key value pairs whereas lists are built in sequence collections of ordered collections of data items.
 2. Dictionaries does not allow duplicates where lists do allow duplicates data items.


1. Does a list allow for random access? Meaning can I access any element(e.g. myList[7])?
Yes you can access any element of the list by using the index element as the parameter to the array or we can get a random element using random.choice() method which outputs a random element.
*Edit your response here*

4. Observe that all the container data structures (i.e. list, set, dictionary, etc.) can work with any data type (integers, floats, custom data types, etc.). 
What do you think are the pros/cons of a library that can work with any data type?

The pros of a library is that libraries are more flexible and extensinle and they are highly embeddable. But the main con are that when the new code is updated, the whole library has to be compiled again into new executable code.

## requests

1. Take a look at the requests API documentation here: https://requests.readthedocs.io/en/latest/  
Comment if the functions are well named in the Requests module (Follow the previous link to the documentation to see if you can find the Requests module (hint: look for API Reference)).

yes the functions are well named in the Requests module like head() and get().

1. Take a look at the [Requests](https://requests.readthedocs.io/en/latest/api/#lower-level-classes) class. APIs that have more than say 5 arguments in a function can be confusing or error prone to use. This is a heuristic of course, but do you see any member functions that include lots of arguments?

some of the other methods that take more arguments are prepare() ,send() and HTTPAdapter()

3. Take another look at the Requests class. Note that many of the methods includes `**kwargs` as an argument. What is `**kwargs`? Why might it be good for a method to have a `**kwargs` argument? Why might it be bad?  
`**kwargs are key worded, variable-length arguments in python. yes it is good to have when you are not sure of the aruguments but it always not a good practice and using it sparingly will be good.


1. Take a look at the [Session class.] (https://requests.readthedocs.io/en/latest/api/#request-sessions) Not only can you read the API's for that class, you can also view the source code by clicking the 'source' text. 
Notice how some methods have arguments that are set to `None` while other arguments are not set to anything. Why is that? Can arguments be set to anything besides `None`? Why might it be good to set an argument by some predetermined value?

Because these arguments are optional, you can also set an argument to anytihng besides Node depends on the value.
