"""
 Sample modified from CS5500, Mike Shah

 A rectangle class
 Note that there is no constructor or destructor,
 so a default one will be created for us.
"""

# Abstract class Shape, which has two methods set_values and area


class Shape:
    @abstractmethod
    def set_values(self, width, height):
        pass

    def area(self):
        pass

# Class Rectangle extends class Shape, which has two private variables width, height


class Rectangle(Shape):
    # Constructor for rectangle
    def set_values(self, width, height):
        self.width = width
        self.height = height
    # Function to return the area of rectangle

    def area(self):
        return self.width * self.height
    # getter for Width

    def getWidth(self):
        return self.width
    # getter for height

    def getHeight(self):
        return self.height
    # setter for width

    def setWidth(self, width):
        self.width = width
    # setter for height

    def setHeight(self, height):
        self.height = height


if __name__ == "__main__":
    # Create a rectangle object
    rect = Rectangle()

    # Call a member function
    rect.set_values(3, 4)

    # Print out the area function
    print("area:", rect.area())
