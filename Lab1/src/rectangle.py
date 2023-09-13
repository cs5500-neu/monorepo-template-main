"""
 Sample modified from CS5500, Mike Shah

 A rectangle class
 Note that there is no constructor or destructor,
 so a default one will be created for us.
"""
from abc import ABC, abstractmethod


class Shape(ABC):

    @abstractmethod
    def set_values(self, x, y):
        pass

    @abstractmethod
    def area(self):
        pass


class Rectangle(Shape):

    def __init__(self, width, height):
        self.__width = width
        self.__height = height

    def set_values(self, x, y):
        self.__width = x
        self.__height = y

    def area(self):
        return self.__width * self.__height

    def get_width(self):
        return self.__height

    def get_height(self):
        return self.__height

    def set_width(self, width):
        self.__width = width

    def set_height(self, height):
        self.__height = height


if __name__ == "__main__":
    # Create a rectangle object
    rect = Rectangle(5, 6)

    # Call a member function
    rect.set_values(3, 4)

    # Print out the area function
    print("area:", rect.area())
