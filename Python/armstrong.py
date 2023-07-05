sum=0
num=int(input("Enter a Number: "))
num2=num
while(num>0):
    a=int(num%10)
    num=int(num/10)
    sum=sum+(a**3)
if(num2==sum):
    print("Armstrong Num")