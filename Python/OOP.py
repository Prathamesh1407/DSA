class Bike:
    # constructor function
    # self Refer to the current instance of the class,Differentiate between class attributes and local variables    
    def __init__(self, name = ""):
        self.name = name

bike1 = Bike("DC Avanti")
print(bike1.name)

#Inheritance
class Animal:

    # attribute and method of the parent class
    name = ""
    
    def eat(self):
        print("I can eat")

# inherit from Animal
class Dog(Animal):

    # new method in subclass
    def display(self):

        # access name attribute of superclass using self
        print("My name is ", self.name)

    def eat(self):
        # To call parent class method
        super().eat()
        # To call constructor use super().__init__() 
        print("I like to eat bones")

# create an object of the subclass
labrador = Dog()

# access superclass attribute and method 
labrador.name = "Rohu"
labrador.eat()

# call subclass method 
labrador.display()

# Multiple Inheritance

"""
class SuperClass1:
    # features of SuperClass1

class SuperClass2:
    # features of SuperClass2

class MultiDerived(SuperClass1, SuperClass2):
    # features of SuperClass1 + SuperClass2 + MultiDerived class

"""

# Multilevel Inheritance

'''

class SuperClass:
    # Super class code here

class DerivedClass1(SuperClass):
    # Derived class 1 code here

class DerivedClass2(DerivedClass1):
    # Derived class 2 code here

'''

# Method Resolution Order (MRO) in Python

#If two superclasses have the same method (function) name and the derived class calls that method, Python uses the MRO to search for the right method to call

class SuperClass1:
    def info(self):
        print("Super Class 1 method called")

class SuperClass2:
    def info(self):
        print("Super Class 2 method called")

class Derived(SuperClass1, SuperClass2):
    pass

d1 = Derived()
d1.info()  

# Output: "Super Class 1 method called"

#In this case, the MRO specifies that methods should be inherited from the leftmost superclass first, 
#so info() of SuperClass1 is called rather than that of SuperClass2.