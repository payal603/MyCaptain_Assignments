# -*- coding: utf-8 -*-
"""
Created on Tue Oct 19 22:26:19 2021

@author: PAYAL GAIKWAD
"""
''' Q1. Implementations of dictionary methods
'''
dict={'name':'payal','middle name':'ravindra','surname':'gaikwad','department':'CS','roll':2427,'age':20}
#copy()	Returns a copy of the dictionary
print(dict.copy())
#fromkeys()	Returns a dictionary with the specified keys and value
x=(1,2,3)
y=('payal','faisal','marraige')
print(dict.fromkeys(x,y))
#get()	Returns the value of the specified key
print(dict.get('roll'))
#items()	Returns a list containing a tuple for each key value pair
print(dict.items())
#keys()	Returns a list containing the dictionary's keys
print(dict.keys())
#pop()	Removes the element with the specified key
dict.pop('age')
print(dict)
#popitem()	Removes the last inserted key-value pair
dict.popitem()
print(dict)
#setdefault()	Returns the value of the specified key. If the key does not exist: insert the key, with the specified value
dict.setdefault('roll',2426)
print(dict)
#update()	Updates the dictionary with the specified key-value pairs
dict.update({'age':22})
print(dict)
#values()	Returns a list of all the values in the dictionary
print(dict.values())
#clear()	Removes all the elements from the dictionary
dict.clear()
print(dict)




''' Q2.Study on sets
'''
myset = {"Marraige", "Faisal", "Payal"}
print(myset)
for x in myset:
  print(x)
  
myset.add("Happy")

print(myset)

'''Q.3 For loop Step function
'''
list_1 = [9, 5, 7, 2, 5, 3, 8, 14, 6, 11]
 
for i in range(0, len(list_1), 2) :
    print(list_1[i])
'''
Q4. Triangle pattern using For loop
'''
# Python 3.x code to demonstrate star pattern
 
# Function to demonstrate printing pattern triangle
def triangle(n):
     
    # number of spaces
    k = n - 1
 
    # outer loop to handle number of rows
    for i in range(0, n):
     
        # inner loop to handle number spaces
        # values changing acc. to requirement
        for j in range(0, k):
            print(end=" ")
     
        # decrementing k after each loop
        k = k - 1
     
        # inner loop to handle number of columns
        # values changing acc. to outer loop
        for j in range(0, i+1):
         
            # printing stars
            print("* ", end="")
     
        # ending line after each row
        print("\r")
 
# Driver Code
n =int(input("Enter the number of rows"))
triangle(n)