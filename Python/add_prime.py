def Chkprime(num):
    if num<=1:
        return False
    for i in range(2,num):
        if num%i==0:
            return False
        return True
n=int(input("enter the number of elements:"))
lst=[]

for i in range(n):
    lst.append(int(input()))
sum_prime=0
for num in lst:
    sum_prime+=num
print("Output:",sum_prime)