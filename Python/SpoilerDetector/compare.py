from thefuzz import fuzz
from thefuzz import process
import os
import sys

def check_spoiler(filtered_text):
    with open(filtered_text, "r") as f:
        check = f.readlines()

        print(check)

    with open(os.path.join(sys.path[0], "potentialspoilers.txt"), "r") as f:
        lines = f.readlines()
    print("enteting for")
    for i in lines:
        print("in for \t",i)
        if((fuzz.ratio(check[0],i)>65)):
            
            print(i)
            print(fuzz.ratio(check,i))
            return True