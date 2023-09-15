"""
 Sample modified from CS5500, Mike Shah

 A rectangle class
 Note that there is no constructor or destructor,
 so a default one will be created for us.
"""
from abc import ABC, abstractmethod
 
class Shape(ABC):
 
    @abstractmethod
    def set_values(self):
        pass

    @abstractmethod
    def area(self):
        pass

class Rectangle(Shape):
    def __init__(self, x, y):
        self._width = x
        self._height = y

    def get_width(self):
        return self._width
    
    def get_height(self):
        return self._height
    
    def set_values(self, x, y):
        self._width = x
        self._height = y

    def area(self):
        return self._width * self._height


if __name__ == "__main__":
    # Create a rectangle object
    rect = Rectangle(2, 3)

    # Call a member function
    rect.set_values(4, 6)

    # Print out the area function
    print(rect.get_height())
    print( issubclass(Rectangle, Shape))
    print("area:", rect.area())
