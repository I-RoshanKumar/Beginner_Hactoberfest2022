import random
import pyttsx3
import speech_recognition as sr
engine = pyttsx3.init('sapi5')
voices = engine.getProperty('voices')
engine.setProperty('voice', voices[1].id)
engine.setProperty('rate', 150)
engine.setProperty('volume', 1.0)
inputString = input()
engine.say(inputString)
engine.runAndWait()