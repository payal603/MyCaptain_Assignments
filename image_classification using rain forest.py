# -*- coding: utf-8 -*-
"""
Created on Fri Apr  1 00:05:10 2022

@author: dell
"""

from tensorflow import keras
import matplotlib.pyplot as plt
from sklearn.metrics import accuracy_score,confusion_matrix,classification_report
import numpy as np
import cv2
(x_train, y_train), (x_test, y_test) = keras.datasets.cifar10.load_data()
x_train.shape,x_test.shape
# Normalization
x_train = x_train/255.0
x_test = x_test/255.0
#sklearn expects i/p to be 2d array-model.fit(x_train,y_train)=>reshape to 2d array
nsamples, nx, ny, nrgb = x_train.shape
x_train2 = x_train.reshape((nsamples,nx*ny*nrgb))
#so,eventually,model.predict() should also be a 2d input
nsamples, nx, ny, nrgb = x_test.shape
x_test2 = x_test.reshape((nsamples,nx*ny*nrgb))
from sklearn.ensemble import RandomForestClassifier
model=RandomForestClassifier()
model.fit(x_train2,y_train)
y_pred=model.predict(x_test2)
y_pred
accuracy_score(y_pred,y_test)
print(classification_report(y_pred,y_test))
