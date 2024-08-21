str1=input("Enter a String:")
spl_char=input("Enter a Char : ")
count=0
for i in range(len(str1)):
    if(str1[i]==spl_char):
        count+=1
print(f"{spl_char} occurs {count} times in {str1}")