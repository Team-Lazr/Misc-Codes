import pytesseract
import cv2
from PIL import Image
import numpy as np 
import os
import sys

def blur(filename):
    pytesseract.pytesseract.tesseract_cmd = 'C:\Program Files\Tesseract-OCR\tesseract.exe'
    out_filename = (os.path.join(sys.path[0], "blur_img.jpg"))
    img = cv2.imread(filename)
    blurImg = cv2.blur(img,(250,250))
    cv2.imwrite(out_filename, blurImg)
    return out_filename
    # cv2.imshow('blurred image',blurImg)
    # cv2.waitKey(0)
    # cv2.destroyAllWindows()