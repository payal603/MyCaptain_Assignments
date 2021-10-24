# -*- coding: utf-8 -*-
"""
Created on Sun Oct 17 01:32:55 2021

@author: Payal Gaikwad
"""
'''
Q1.IMPLEMENT STRING AND LIST METHODS
'''
str1 = 'Hello World!'
print(str1)
# len() calculate lenghth of string
print(len(str1))
#replace letter in string
print(str1.replace("H", "J"))
# replace() Converts the first character to upper case
a="hello world"
print(a.capitalize())
#Converts string into lower case
a="PAYAL GAIKWAD"
print(a.casefold())
# casefold() Returns the number of times a specified value occurs in a string
a='My Name Payal'
print(a.count('a'))
#Searches the string for a specified value and returns the position of where it was found
a='beautiful'
print(a.find('t'))
# format() Formats specified values in a string
a = "My name is {fname}, I'm {age}".format(fname = "Payal", age = 20)
print(a)
# isupper() Returns True if all characters in the string are upper case
a='Payal Gaikwad'
print(a.isupper())
# islower() Returns True if all characters in the string are lower case
a='Payal Gaikwad'
print(a.islower())


"""
LIST METHODS
"""
list=[1,2,'payal',9.3,10,8500,'piku']
# append() Adds an element at the end of the list
list.append('faisal')
print(list)
#count() Returns the number of elements with the specified value
print(list.count('piku'))
#extend() Add the elements of a list (or any iterable), to the end of the current list
list2=['harshada','faisal']
list.extend(list2)
print(list)
#index()Returns the index of the first element with the specified value
print(list.index(9.3))
#insert()	Adds an element at the specified position
list.insert(10,'HTML')
print(list)
#pop()	Removes the element at the specified position
list.pop(3)
print(list)
#remove()	Removes the first item with the specified value
list.remove(1)
print(list)
#reverse()	Reverses the order of the list
list.reverse()
print(list)
#clear()	Removes all the elements from the list 
list.clear()
print(list)
#sort()	Sorts the list
order=[6,3,5.1,9,5]
order.sort()
print(order)

'''
Q.2 CREATE A SIMPLE CALCULATER USING FUNCTIONS
'''
# Python program for simple calculator
  
# Function to add two numbers 
def add(num1, num2):
    return num1 + num2
  
# Function to subtract two numbers 
def subtract(num1, num2):
    return num1 - num2
  
# Function to multiply two numbers
def multiply(num1, num2):
    return num1 * num2
  
# Function to divide two numbers
def divide(num1, num2):
    return num1 / num2
  
print("Please select operation -\n" \
        "1. Add\n" \
        "2. Subtract\n" \
        "3. Multiply\n" \
        "4. Divide\n")
  
  
# Take input from the user 
select = int(input("Select operations form 1, 2, 3, 4 :"))
  
number_1 = int(input("Enter first number: "))
number_2 = int(input("Enter second number: "))
  
if select == 1:
    print(number_1, "+", number_2, "=",
                    add(number_1, number_2))
  
elif select == 2:
    print(number_1, "-", number_2, "=",
                    subtract(number_1, number_2))
  
elif select == 3:
    print(number_1, "*", number_2, "=",
                    multiply(number_1, number_2))
  
elif select == 4:
    print(number_1, "/", number_2, "=",
                    divide(number_1, number_2))
else:
    print("Invalid input")
      
