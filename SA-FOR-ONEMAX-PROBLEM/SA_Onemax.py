#!/usr/bin/env python
# coding: utf-8

# In[17]:


import numpy as np
import random
import math

Snum = int(input("請輸入長度:"))
Sold = np.zeros(Snum)
Snew = Sold
print(Sold)

def count_1(S1):
    cnt=0
    for i in S1:
        if(i==1):
            cnt=cnt+1
    return cnt
def change(x):
    if(x==0):
        x==1
    else:
        x==0
    return x

for j in range(1000,0,-1):
    num = random.randint(0,Snum-1)
    Snew[num]=1
    r = round(np.random.uniform(low=0,high=1),1)
    if((count_1(Sold)<count_1(Snew)) or r<math.exp(-(count_1(Sold)-count_1(Snew))/j)):
        Sold = Snew 
        print(Sold)
    if(int(count_1(Sold))==Snum):
        print("總共跑了:",1000-j)
        break
print("最終結果:")
print(Sold)


# In[ ]:




