n= int(input("enter the number of elements:"))
lst=[]
sum_even=0

for i in range(n):
    lst.append(int(input()))

for num in lst:
    if num%2==0:
        sum_even+=num
print("Output:",sum_even)