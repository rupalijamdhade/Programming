#accept numner and prints it's factor

def factor(n):
    print("the factor of",n,"are:")
    for i in range(1,n+1):
        if n%i==0:
            print(i)

n=int(input("Enter a number:"))
factor(n)