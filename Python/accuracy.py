a=str(10.6666666)
b=str(10.7)

aa=len(a[a.find(".")+1:])
bb=len(b[b.find(".")+1:])
if(aa<bb):
    print(f"{b} is accurate")
else:
    print(f"{a} is accurate")