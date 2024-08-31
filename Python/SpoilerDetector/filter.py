from pickletools import string1
from nltk.corpus import stopwords
from nltk.tokenize import word_tokenize
import string
import inflect
import os
import sys
p = inflect.engine()




def filtertext(filepath):
    outputfilepath=(os.path.join(sys.path[0], "filtered_text.txt"))
    string1=""
    with open(filepath, "r") as f:
        lines = f.readlines()
    
    for i in lines:
        string1+=i

    file = open(outputfilepath, "w+")
    file.write("")
    file.close()

    print(remove_stopwords(remove_whitespace(remove_punctuation(text_lowercase(convert_number(string1))))))
    filtered_string=""
    filtered_string_list=(remove_stopwords(remove_whitespace(remove_punctuation(text_lowercase(convert_number(string1))))))
    for i in filtered_string_list:
        filtered_string= filtered_string + i + " "
    file = open(outputfilepath, "a")
    file.write(filtered_string)
    file.write("\n")
    file.close
    return(outputfilepath)


def conv_str(filepath):
    string_a=""
    with open(filepath, "r") as f:
        lines = f.readlines()
    for i in lines:
        string_a = string_a  + i + " "
    return(remove_whitespace(string_a))
    
    

    

def convert_number(text):
    temp_str = text.split()
    new_string = []
  
    for word in temp_str:
        if word.isdigit():
            temp = p.number_to_words(word)
            new_string.append(temp)
        else:
            new_string.append(word)
    temp_str = " ".join(new_string)
    return temp_str

def text_lowercase(text):
    return text.lower()

def remove_punctuation(text):
    translator = str.maketrans("", "", string.punctuation)
    return text.translate(translator)

def remove_whitespace(text):
    return  " ".join(text.split())

def remove_stopwords(text):
    stop_words = set(stopwords.words("english"))
    word_tokens = word_tokenize(text)
    filtered_text = [word for word in word_tokens if word not in stop_words]
    return filtered_text





# print(convert_number("Hello one  three "))
# callall("Hello One 1 two HAPPY abcd 1234 dsljfn,gsg. My. Name. IS. Bhaalu, Grrrrrrrrr")
