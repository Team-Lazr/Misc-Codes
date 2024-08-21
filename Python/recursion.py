num=int(input("Enter A Number : "))

def fact(x):
    # print(x)
    if x == 0 or x==1:
        return 1
    else:
        return x*fact(x-1)

print(fact(num))