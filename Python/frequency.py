n=int(input("Enter the number of elements:"))
lst=[]

for i in range(n):
    lst.append(int(input()))

find=int(input("enter element to find:"))
count=lst.count(find)

print("output:",count)