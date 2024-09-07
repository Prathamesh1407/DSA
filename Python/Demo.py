from multipledispatch import dispatch

s = "Hello I am Swami"

s = "".join(reversed(s))

s = s[::-1]
# if s[:] all characters will print
print(s)

# Mutable,iterable,ordered
#for empty []
List = [2, 3, 4, "Yash"]
print(len(List))

# append ()    insert(pos,value)  remove(value) only 1st occurence will get removed if multiple use for loop
# pop() removes last element
s = input("Enter ip")
List = s.split()
print(List)

# immutable,iterable,ordered
# for empty ()
Tuple1 = ("Geeks", 2)
# Tuple1[0] = "2" Error
print(Tuple1)
# to concatenate t3=t1+t2

# range(start,stop,step) stop is mandatory others are optional

# Dictionary
#ordered,mutable values
# stores in the form of key:value pair Key can't be duplicate and must be immutable , values can be duplicate
# if key value pair already exist value gets updated

# keys() returns all keys has_key(key) returns True if key is present
# for empty {}
dict = {1: "Yash"}
dict[2] = "Swami"
print(dict.get(2))
del dict[1]
print(dict)
#for merging the dict use dict1 | dict2 or dict1.update(dict2) 
# if for checking we use in keyword it will only find in keys

# Set
# Unordered,iterable,highly optimized to see the element is present or not compare to list
# works on hash table and due to unordered we can't apply indexing on it
# set is both mutable and immutable
# Mutable : we can add the elements in the set
# Immutable : we once any entry created we can't change that entry

# using frozenset() we can do it immutable
Set = {1, 2, 3}
Set.add(4)
Set.discard(2)
print(Set)
# for empty set use set() if we use {} considered as empty dictionary  
# Set[1]="5" Error
set1={1,2,3}
set2={2,4,5}
#union or a.union(b)
print(set1 | set2)

#intersection or a.intersection(b)
print(set1 & set2)

#minus or a.difference(b)
print(set1 - set2)

# **kwargs for keyword arguments and for non keyword arguments use *args
def greet(**words): #here words will be of dict type and if args then tuple type
    print(type(words))
    for key, value in words.items():
        print(f"{key}: {value}")

# pass any number of keyword arguments
greet(name="John", greeting="Hello")


# one more type of variable nonlocal variable
# if we have outer and inner function and we want to use variable of inner func in outer func intialising it as local it would be error 
# then declare it as a nonlocal variable
# 
# # outside function 
def outer():
    message = 'local'

    # nested function  
    def inner():

        # declare nonlocal variable
        nonlocal message

        message = 'nonlocal'
        print("inner:", message)

    inner()
    print("outer:", message)

outer() 

# There is no Method Overloading in Python
'''
Reason: 
1.Dynamically typed
meaning that the type of a variable is determined at runtime rather than at compile time. 
Since Python doesn't require you to specify types, the concept of overloading based on different types doesn't directly apply.
'''

#Solution
# Use Multiple Dispatch Decorator

'''
Dispatcher creates an object which stores different implementation and on runtime, 
it selects the appropriate method as the type and number of parameters passed.
'''

# passing one parameter


@dispatch(int, int)
def product(first, second):
    result = first*second
    print(result)

# passing two parameters


@dispatch(int, int, int)
def product(first, second, third):
    result = first * second * third
    print(result)

# you can also pass data type of any value as per requirement


@dispatch(float, float, float)
def product(first, second, third):
    result = first * second * third
    print(result)


# calling product method with 2 arguments
product(2, 3)  # this will give output of 6

# calling product method with 3 arguments but all int
product(2, 3, 2)  # this will give output of 12

# calling product method with 3 arguments but all float
product(2.2, 3.4, 2.3)  # this will give output of 17.985999999999997


''' Same goes for filter'''
# Program to double each item in a list using map()

my_list = [1, 5, 4, 6, 8, 11, 3, 12]

new_list = list(map(lambda x: x * 2 , my_list))

print(new_list)

# Output: [2, 10, 8, 12, 16, 22, 6, 24]


#Iterators

my_list = [4, 7, 0]

# create an iterator from the list
iterator = iter(my_list)

# get the first element of the iterator
print(next(iterator))  # prints 4
