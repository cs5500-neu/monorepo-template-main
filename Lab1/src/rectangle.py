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
    # git diff will show the change1
    # git push -u origin refactor      #first push
    def __init__(self, width, height):
        # Make Private Variable
        self.__width = width
        self.__height = height
    
    # Getter for width
    @property    
    def width(self):
        return self.__width
    
    # Setter for width
    @width.setter
    def width(self, value):
        self.__width = value
        
    # Getter for height
    @property
    def height(self):
        return self.__height
    
    # Setter for height
    @height.setter
    def height(self, value):
        self.__height = value
        
    def set_values(self, x, y):
        self.width = x
        self.height = y

    def area(self):
        return self.width * self.height


if __name__ == "__main__":
    # Create a rectangle object
    rect = Rectangle(4, 5)

    print("area:", rect.area())
    
    # Call a member function
    rect.set_values(3, 4)

    # Print out the area function
    print("area:", rect.area())
