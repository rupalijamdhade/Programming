
#accept one number and return addition of its factor

num=int(input("enter the number:"))

sum_factor=0

for i in range(1,num):
    if num%i==0:
        sum_factor+=i
print("addition of factors:",sum_factor)