# This Code is Created by Team 34 Programmers in Pyjamas(PiP)
# Members : Harsh Buddhadev, Rachit Sharma, Abhishek Garg



##############################    Libraries       ##############################

from thefuzz import fuzz
from thefuzz import process
import tkinter as tk
from PIL import ImageTk
import cv2
import os
import sys
import pytesseract
import easygui
from easygui import *
from PIL import Image
import numpy as np
from blur import blur

##############################    Libraries       ##############################

##### Importing Custom Libraries #####
from ocr import imgocr
from filter import filtertext
from filter import conv_str
from compare import check_spoiler
##### Importing Custom Libraries #####


########## Opening Image ##########
print("Opening Image")
filename = easygui.fileopenbox()
temp_filename=filename
isImg=True
temp_filename, file_extension = os.path.splitext(temp_filename)
if(file_extension==".txt"):
    isImg=False
    print("txt file")
elif(file_extension==".jpg"):
    isImg=True
    print("Image File")
elif(file_extension==".png"):
    isImg=True
    print("Image File")

img = cv2.imread(filename)
print("Image Opened")
########## Opening Image ##########


############################## OCR_START ##############################
if(isImg):
    print("OCR start")
    recognizedtext_filepath=imgocr(filename)
    print(recognizedtext_filepath)
    print("OCR end")
else:
    recognizedtext_filepath=filename

############################## OCR_END   ##############################


############################## FILTERING_START ##############################
print("filter start")
filtered_file_path=filtertext(recognizedtext_filepath)
print(filtered_file_path)
print("filter end")
##############################  FILTERING_END  ##############################


############################## Spoiler_Checking_START ##############################
print("SC start")
spoiler=check_spoiler(filtered_file_path)
print(spoiler)
if(spoiler):
    print("Spoiler")
else:
    print("Not a spoiler")
print("SC End")
##############################  Spoiler_Checking_END  ##############################

##############################         Blur_IMG       ##############################

if(isImg):
    if(spoiler):
        blur_file_path=blur(filename)
        print(blur_file_path)
        print("Image blurred")
    else:
        print("Image NOT blurred")


##############################         Blur_IMG       ##############################




##############################           GUI          ##############################
if(isImg):
    def show_image(imagefile):
        image = ImageTk.PhotoImage(file=imagefile)
        imagebox.config(image=image)
        imagebox.image = image # save a reference of the image to avoid garbage collection

    root = tk.Tk()

    frame = tk.Frame(root)
    frame.pack()

    button = tk.Button(frame, text="QUIT", fg="red", command=quit)
    button.pack(side=tk.LEFT)
    if(spoiler):
        slogan = tk.Button(frame, text="This Image Is A spoiler", command=lambda:show_image(blur_file_path))
        slogan.pack(side=tk.LEFT)

        other = tk.Button(frame, text="click to Reveal", command=lambda: show_image(filename))
        other.pack(side=tk.LEFT)
    else:
        other = tk.Button(frame, text="Image", command=lambda: show_image(filename))
        other.pack(side=tk.LEFT)    

    # label to show the image
    imagebox = tk.Label(root)
    imagebox.pack()

    root.mainloop()
##############################           GUI          ##############################



##############################           TEXT         ##############################

with open(filename, "r") as f:
        filetext = f.readlines()

if(isImg==False):
    if(spoiler):
        root = tk.Tk()
        frame = tk.Frame(root)
        frame.pack()  
        button = tk.Label(root, text="potential spoiler")
        def changetext():
            button.config(text=filetext[0])
        button.pack(side=tk.LEFT)
        if(spoiler):
            slogan = tk.Button(frame, text="This Text Is A spoiler,Click to Reveal", command=changetext)
            slogan.pack(side=tk.TOP)
    # label to show the image
        imagebox = tk.Label(root)
        imagebox.pack()
        root.mainloop()
    else:
        root = tk.Tk()
        frame = tk.Frame(root)
        frame.pack()
        button = tk.Label(root, text=filetext[0])
        button.pack(side=tk.LEFT)
        imagebox = tk.Label(root)
        imagebox.pack()
        root.mainloop()


    

##############################           TEXT         ##############################