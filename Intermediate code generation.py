#!/usr/bin/env python
# coding: utf-8

# In[4]:


print("1. Assignment  2. Arithmetic  3. Relation  4. Exit")
while True:
    n = int(input("Enter your choice : "))
    match n:
        case 1:
            thr_addr_code = input("Enter assignment operation : ")
            t1, t2 = thr_addr_code.split('=')
            print(f'temp = {t2}')
            print(f'{t1} = temp')
        case 2:
            thr_addr_code = input("Enter arithmetic operation : ")
            t1, t2 = thr_addr_code[:3], thr_addr_code[3:]
            print(f'temp = {t1}')
            print(f't1 = temp{t2}')
        case 3:
            thr_addr_code = input("Enter relation operation : ")
            addr = 100
            print(f'{addr} if {thr_addr_code} goto {addr + 3}')
            addr += 1
            print(f'{addr} T = 0')
            addr += 1
            print(f'{addr} goto {addr + 2}')
            addr += 1
            print(f'{addr} T = 1')
        case 4:
            break


# In[5]:


import sys
assert sys.version_info >= (3, 10)


# In[ ]:




