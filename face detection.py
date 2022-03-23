# -*- coding: utf-8 -*-
"""
Created on Fri Dec 17 15:48:12 2021

@author: dell
"""

from tkinter import *
from PIL import Image
from PIL import ImageTk
from tkinter import filedialog
import cv2
panelA = None
panelB = None
panelC = None
panelD = None
def select_image():
 
    global panelA, panelB, panelC, panelD
     
    path = filedialog.askopenfilename()
    if len(path) > 0:
     
     
     
 
        face_Cascade = cv2.CascadeClassifier('haarcascade_frontalface_default.xml')
         
        image = cv2.imread(path)
         
        imageDetected = cv2.imread(path)
         
        gray = cv2.cvtColor(image, cv2.COLOR_BGR2GRAY)
         
        edged = cv2.Canny(gray, 50, 100)
         
        faces = face_Cascade.detectMultiScale(gray, 1.1, 4)
        for(x, y,w, h) in faces:
 
            cv2.rectangle(imageDetected, (x, y),
                          (x + w, y + h), (255, 0, 0), 2)
 

 
        image = cv2.cvtColor(image, cv2.COLOR_BGR2RGB)
         
        imageDetected = cv2.cvtColor(imageDetected, cv2.COLOR_BGR2RGB)
         
         
        image = Image.fromarray(image)
         
        gray = Image.fromarray(gray)
         
        edged = Image.fromarray(edged)
         
        detected = Image.fromarray(imageDetected)
         
         
        image = ImageTk.PhotoImage(image)
         
        gray = ImageTk.PhotoImage(gray)
         
        edged = ImageTk.PhotoImage(edged)
         
        detected = ImageTk.PhotoImage(detected)
 
    if panelA is None or panelB is None or panelC is None or panelD is None:
 
 
        panelA = Label(image=image)
         
        panelA.image = image
         
        panelA.pack(side="left", padx=10, pady=10)
         
         
        panelB = Label(image=edged)
         
        panelB.image = edged
         
        panelB.pack(side="right", padx=10, pady=10)
         
        panelC = Label(image=gray)
         
        panelC.image = gray
         
        panelC.pack(side=BOTTOM, padx=10, pady=10)
         
         
        panelD = Label(image=detected)
         
        panelD.image = detected
         
        panelD.pack(side=TOP, padx=10, pady=10)
 
    else:
 
 
        panelA.configure(image=image)
         
        panelB.configure(image=edged)
         
        panelC.configure(image=gray)
         
        panelD.configure(image=detected)
         
        panelA.image = image
         
        panelB.image = edged
         
        panelC.image = gray
         
        panelD.image = detected
root = Tk()
btn = Button(root, text="Select an image", command=select_image)
btn.pack(side="bottom", fill="both", expand="yes", padx="100", pady="100")
root.mainloop()