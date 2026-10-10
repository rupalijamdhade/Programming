n=int(input("enter the number of elements:"))
lst=[]
even_list=[]
for i in range(n):
    lst.append(int(input()))

for num in lst:
    if num%2==0:
        even_list.append(num)
print("Output:",even_list)