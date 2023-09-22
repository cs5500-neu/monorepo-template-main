# Exercises (Modify this file)

Answer and complete the following exercises.

## Python Standard Library

1. How you name functions and member functions matter. Take a look at the [dictionary](https://docs.python.org/3/library/stdtypes.html#typesmapping) 
and [list](https://docs.python.org/3/library/stdtypes.html#sequence-types-list-tuple-range) member functions in the SL. 
Do the names of the member functions correlate to what they do? That is, are they good 'verbs' where the name of the function describes the action the code is doing? 
  - A good example would be a function called 'pop' which only removes one element.
  - A bad example would be a function called 'pop' where one element is removed **and** that value is returned. A better name would be 'popAndGet' or 'popAndReturn', which captures the two events happening.
For the most part, the member functions in dictionary seem to make a lot of sense. One example I found of a bad member function is "Key not in d". This is defined as "equivalent to not key in d," which does not provide a lot of clarity as to what the function actually does.  
List has much fewer member functions. In the documentation, it appears that sort is the only function that can be used with List. This function is pretty straighforward and acts as described, with the sort function sorting the list in place. 


2. How does a dictionary differ from a list? (i.e. What is the underlying data structure of each container.)
Lists are ordered and sequential, they also allow for duplicates. Dictionaries are in a key, value pair and do not allow for duplicate values to the same key. Dictionaries are also un-ordered. They are both mutable structures. 

3. Does a list allow for random access? Meaning can I access any element(e.g. myList[7])?
Yes, a python list allows for random access. 
Example: 
list1 = [1, 2, 4, 6, 8]
num = list1[2]
num = 4

4. Observe that all the container data structures (i.e. list, set, dictionary, etc.) can work with any data type (integers, floats, custom data types, etc.). 
What do you think are the pros/cons of a library that can work with any data type?

Primative data structures such as a bool or char can be helpful because their size will depend on teh typpe of data structure and can be used to call methods. Because size is fixed, this saves space in memory. non-primative structures, structures that work with any data type might use more space in memory. They can also not be used to call methods.  non-primative data types are also mutable, which can be really helpful for data that is consistently changing. 

## requests

1. Take a look at the requests API documentation here: https://requests.readthedocs.io/en/latest/  
Comment if the functions are well named in the Requests module (Follow the previous link to the documentation to see if you can find the Requests module (hint: look for API Reference)).

From what I see in the documentation, most of the request types are pretty clear based on what they are called. The only one I might be a little unsure about is headers, not clear if that is the various page headers, but it looks like that might be it. Cookies could be confusing as well, but I am already familiar with this term. 

2. Take a look at the [Requests](https://requests.readthedocs.io/en/latest/api/#lower-level-classes) class. APIs that have more than say 5 arguments in a function can be confusing or error prone to use. This is a heuristic of course, but do you see any member functions that include lots of arguments?

params can definitely have multiple arguments as we can see in very long websites, especially if a url might contain a search query such as google. Files could also be complex depending on the file structure. 


3. Take another look at the Requests class. Note that many of the methods includes `**kwargs` as an argument. What is `**kwargs`? Why might it be good for a method to have a `**kwargs` argument? Why might it be bad?  

**kwargs is key word arguments. Kwargs maps each keyword to the value that is passed along with it. So, you pass the argument along with the function. Kwargs could be helpful if you cannot hardcode an argument. For instance if you are receiving the argument from another page, such as a text box where the user is entering the argument. You can parse the argument and put it into the kwarg from the other function. It could be bad because you are passing it as the function is called and if you are receiving it from another source you might be getting bad data that could break your program.  


4. Take a look at the [Session class.] (https://requests.readthedocs.io/en/latest/api/#request-sessions) Not only can you read the API's for that class, you can also view the source code by clicking the 'source' text. 
Notice how some methods have arguments that are set to `None` while other arguments are not set to anything. Why is that? Can arguments be set to anything besides `None`? Why might it be good to set an argument by some predetermined value?
From what I understand, the reason some have a None value is becuase of a design principle for all mutable data structures in python. If there are values that you want to be hardcoded, then it would be a good idea to pass those values. Based on what I understand, None is for mutable structures, so it reasons that if you want something unmutable, then you should pass the argument. 


