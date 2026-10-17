#n=int(input("enter a number:"))
def sum_of_digit(n):
    n=abs(n)#handle negative numbers
    total_sum=0

    while n>0:
        digit=n%10#get last digit
        total_sum+=digit#add it to total
        n//=10#remove last digit
    return total_sum    