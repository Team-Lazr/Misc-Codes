#Python Func
for i in range (5+1):
    print("*"*i)

#Normal
for i in range (5):
    for j in range (i+1):
        print("*",end="")
    print("")

#10 to 20
for i in range (1,5):
    for j in range (1,i+1):
        print(f"{j*10} ",end="")
        # k=k+10
    if(i==4):
        print("0")
    else:
        print("")


for i in range (5):
    for j in range (5,i+1,-1):
        print(" ",end="")
    for k in range (0,(i)+1,1):
        print(f"{k+1} ",end="")

    # for k in range (i+1):
    #     print("*",end="")
    print("")