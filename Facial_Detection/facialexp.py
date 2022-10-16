from deepface import DeepFace
import cv2 as cv
import matplotlib.pyplot as plt

img = cv.imread('sample.jpg')
plt.imshow(img[:,:,::-1])
plt.show()