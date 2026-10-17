n=int(input("Enter a number:"))

if n<=1:
    print("given number is not a prime number")
else:
    for i in range(2,n):
        if n%i==0:
            print("given number is not a prime number")
            break
    else:
        print("given number is a prime number")