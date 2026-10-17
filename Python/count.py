#accept numbers from users and return number of digits in that number

num=int(input("enter the number"))
digit_count=len(str(abs(int(num))))

print(f"number of digit:{digit_count}")
