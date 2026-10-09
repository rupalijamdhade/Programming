#create module which contain  basic arithmatic operation
import Arithmatic

def main():
    a=int(input("enter the first number:"))
    b= int(input("enter the second number:"))

    print("Addition:",Arithmatic.Addition(a,b))
    print("Substraction:",Arithmatic.Substration(a,b))
    print("Multiplication:",Arithmatic.Multiplication(a,b))
    print("Division:",Arithmatic.Division(a,b))


if __name__=="__main__":
    main()