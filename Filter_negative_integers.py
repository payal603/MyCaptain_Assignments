# -*- coding: utf-8 -*-
"""
Created on Fri Oct 29 15:06:37 2021

@author: PAYAL Ravindra Gaikwad
"""
#Program to filter negative integers from a list of integers entered by the user+_
list1=[]
n=int(input("Enter the number of elements in list: "))
for i in range(0,n):
    ele=int(input("Enter the integer to be added in the list: "))  #accepts the list of positive and integers from the user
    list1.append(ele)
    
print("The entered list before is :",end='') #displays the list with both positive and negative integers
print(list1)    

list2=[]
for i in list1:
    if i>=0:
        list2.append(i)
print("The Filtered list is: ",end='') #displays the filtered list
print(list2)
    
    