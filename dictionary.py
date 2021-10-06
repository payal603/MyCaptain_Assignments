# -*- coding: utf-8 -*-
"""
Spyder Editor
Created on Wed Oct  6 12:04:58 2021
@author: payal gaikwad
"""

def add_word(d):
    w=input("Enter a word you want to add:")
    m=input("enter meaning of that word:")
    d[w]=m
    print(d)
def same_meaning(d):
    l=[]
    w = input("enter the word: ")
    if w in d.keys():
         print(d.get(w))
         
    elif w in d.values():
        for i in d.keys():
            if d[i] == w:
                l.append(i) 
        print(l)
    else: 
        return "not found"
     
def delete_word(d):
    x=input("Enter the word you want to delete:")
    if x in d.keys():
       d.pop(x)
       print(d)
    else:
        print("NOT FOUND")
def alphabetical_order(d):
    print(sorted(d))
'''def same_meaning(d):
    m=input("Enter the word you want to search:")
    if m in d.values():
       print("FOUND")
       print(d.get(m))
    else:
        print("NOT FOUND")'''
def dictionary_content(d):
    print(d.items())
def search_word(d):
    m=input("Enter the word you want to search:")
    if m in d.keys():
       print("FOUND")
       print(d.get(m))
    else:
        print("NOT FOUND")


d={'user':'person who uses','answer':'reply','brave':'courageous','huge':'big','small':'little','respond':'reply'}
print(d)
ch=0
while(ch!=7):
    print("M E N U")
    print("1.ADD NEW WORD")
    print("2.DELETE WORD")
    print("3.SEARCH FOR WORD ")
    print("4.DISPLAY WORDS IN ALPHABETICAL ORDER")
    print("5.FIND WORDS WITH SAME MEANING ")
    print("6.Display dictionary contents")
    ch=int(input("Enter your choice:"))
    if(ch==1):
        add_word(d)
    elif(ch==2):
        delete_word(d)
    elif(ch==3):
        search_word(d)
    elif(ch==4):
        alphabetical_order(d)
    elif(ch==5):
        same_meaning(d)
    elif(ch==6):
        dictionary_content(d)
    else:
        print("Wrong input, plz enter correct choice")
                               
 
                          
  
  
 
 
 

 
  

  
 



 



 
  

 

  

 

  
 

  
 
                
                  
            
                    
           
             
                      

 

 
 
 
 
 
 
  
 
    
  
 
 
 
                                                            
  
  
  
 
 
 

  



 
 
               
           
 

 

 



     




  

 
  

  

 
 




 
          
           
            


           
            
           