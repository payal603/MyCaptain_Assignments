# -*- coding: utf-8 -*-
"""
Created on Thu Mar 31 22:56:25 2022

@author: dell
"""

#(a)Histogram PLot


import matplotlib.pyplot as plt
import pandas as pd
data=pd.read_csv('Iris.csv')
plt.hist(data['SepalLengthCm'],edgecolor='yellow',color='green')
plt.title("Iris data set")
plt.xlabel('Sepal Length in Cm')
plt.show()

#(b)SRSWOR and SRSWR
import pandas as pd
data=pd.read_csv('Iris.csv')
import random
import pandas
colnames = ['Id', 'SepalLengthCm', 'SepalWidthCm', 'PetalLengthCm', 'PetalWidthCm','Species']
data = pandas.read_csv('Iris.csv', names=colnames)

SepalLengthCm= data.SepalLengthCm.tolist()
df=pd.DataFrame(data)
SRSWOR=random.sample(SepalLengthCm,k=5)
print("Without replacement:")
print(SRSWOR)
print("With replacement:")
SRSWR=random.choices(SepalLengthCm,k=5)
print(SRSWR)


#CLUSTERING
import pandas as pd
data=pd.read_csv('Iris.csv')

#create dataframe from persons dictionary
df=pd.DataFrame(data)
samples = df.sample(4)
print(samples)

#Stratified Sampling
import pandas as pd
data=pd.read_csv('Iris.csv')
#create dataframe from persons dictionary
df=pd.DataFrame(data)

#view the original dataframe
print(df)
print("n")

#Dispropotionate sampling
num=df.groupby('Species',group_keys=False).apply(lambda x:x.sample(2))
print(num)
print("n")

#Propotionate sampling
num1=df.groupby('Species',group_keys=False).apply(lambda x:x.sample(frac=0.6))
print(num1)


#(c)Scaling and Preprocessing

#Min/Max Scaler
import numpy as np
import pandas as pd
import matplotlib.pyplot as plt
from sklearn.preprocessing import MinMaxScaler

data=pd.read_csv('Iris.csv')
df=pd.DataFrame(data)
mms=MinMaxScaler()
df.iloc[:,0:-1] = mms.fit_transform(df.iloc[:,0:-1].to_numpy())
print(df)

#Standard Scaler
#Normalization using sklearn (Gives biased estimates, different from pandas)
import pandas as pd
data=pd.read_csv('Iris.csv')
from sklearn.preprocessing import StandardScaler
scaler = StandardScaler()

df=pd.DataFrame(data)
df.iloc[:,0:-1] = scaler.fit_transform(df.iloc[:,0:-1].to_numpy())
print(df)

#Normalization and Preprocessing
import pandas as pd
data=pd.read_csv('Iris.csv')

#create dataframe from persons dictionary
df=pd.DataFrame(data)
df.iloc[:,0:-1] = df.iloc[:,0:-1].apply(lambda x: (x-x.mean())/ x.std(), axis=0)
print(df)