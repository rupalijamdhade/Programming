#accepts the input from users and givereturn addition of digit in that number

num=int(input("enter the number"))

digit_sum=sum (int(d)for d in str(abs(int(num))))

print(f"number of digit:{digit_sum}")
