str1=input("Enter a String:")
count=0
for i in range(len(str1)):
    if((ord(str1[i])>33 and ord(str1[i])<47)or str1[i]=="@"):
        count+=1
print(f"Special Characters occurs {count} times in {str1}")

#Not a Number/Letter/Space

count=0
for i in range(len(str1)):
    if(not((ord(str1[i])>=48 and ord(str1[i])<=57)or (ord(str1[i])>=65 and ord(str1[i])<=90) or (ord(str1[i])>=97 and ord(str1[i])<=122) or (str1[i]==" "))):
        count+=1
print(f"Special Characters occurs {count} times in {str1}")