from abc import ABC, abstractmethod


class Shape:
    @abstractmethod
    def set_values(self):
        pass

    @abstractmethod
    def area(self):
        pass
