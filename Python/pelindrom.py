#given number is pelndrom or not
n=input("Enter a number:")
if n==n[::-1]:
    print("n is pelindrom")
else:
    print("n is not a pelindrom")