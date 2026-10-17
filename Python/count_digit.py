
# count of digit in  given number

n=int(input("enter a number"))
count=0
while n!=0:
    n//=10
    count+=1

print("number of digit:"+str(count))   