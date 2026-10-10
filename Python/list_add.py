def sum_list_elements():
    n=int(input("enter the number of elements:"))
    elements=[]

    #print(f"enter{n}elements:")
    for i in range(n):
        value=int(input())
        elements.append(value)
    total=sum(elements)
    return total
print(f"output:{sum_list_elements()}")
    