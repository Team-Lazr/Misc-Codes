import cv2
import pytesseract
import easygui
from easygui import *
import os
import sys

def imgocr(img):
    img = cv2.imread(img)
    outputfilepath=(os.path.join(sys.path[0], "recognized.txt"))
    pytesseract.pytesseract.tesseract_cmd = 'C:\\Program Files\\Tesseract-OCR\\tesseract.exe'
    gray = cv2.cvtColor(img, cv2.COLOR_BGR2GRAY)
    ret, thresh1 = cv2.threshold(gray, 0, 255, cv2.THRESH_OTSU | cv2.THRESH_BINARY_INV)
    rect_kernel = cv2.getStructuringElement(cv2.MORPH_RECT, (18, 18))
    dilation = cv2.dilate(thresh1, rect_kernel, iterations = 1)
    contours, hierarchy = cv2.findContours(dilation, cv2.RETR_EXTERNAL, cv2.CHAIN_APPROX_NONE)
    im2 = img.copy()
    file = open(outputfilepath, "w+")
    file.write("")
    file.close()
    for cnt in contours:
        x, y, w, h = cv2.boundingRect(cnt)
        rect = cv2.rectangle(im2, (x, y), (x + w, y + h), (0, 255, 0), 2)
        cropped = im2[y:y + h, x:x + w]
        file = open(outputfilepath, "a")
        text = pytesseract.image_to_string(cropped)
        file.write(text)
        file.write("\n")
        file.close

    return outputfilepath
