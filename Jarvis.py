
import pyttsx3
import datetime
import time 
import speech_recognition as sr
import wikipedia
import webbrowser
import os
import pyautogui
import pyjokes
import keyboard
from googletrans import Translator
import smtplib
from pywikihow import search_wikihow 


engine = pyttsx3.init('sapi5')
voices = engine.getProperty('voices')
engine.setProperty('voices',voices[1].id)
engine.setProperty('rate',160)
# print(voices[1].id)


def hackerrank():
    os.startfile("C:\\Program Files\\Google\\Chrome\\Application\\chrome.exe")
    time.sleep(5)
    pyautogui.click(x=1432,y=101)
    time.sleep(4)
    pyautogui.click(x=1559,y=167)
    time.sleep(2)

    pyautogui.click(x=987,y=381)
    time.sleep(2)
    pyautogui.click(x=959,y=456)
    time.sleep(3)
    pyautogui.click(x=959,y=456)
    Pass = "dkjfalkflk"
    keyboard.write(Pass)
    keyboard.press('enter')
def whatsapp():
    who = input("enter the name jisko ghumana h message...: ")
    mess = input("kya mess bheju sir .....: ")
    os.startfile('C:\\Users\\Neelesh\\AppData\\Local\\WhatsApp\\WhatsApp.exe')
    os.startfile('https://web.whatsapp.com')
    time.sleep(9)
    pyautogui.click(x=223, y=262)
    keyboard.write(who)
    time.sleep(2)
    pyautogui.click(x=216, y=438)
    time.sleep(2)
    pyautogui.click(x=996, y=959)
    time.sleep(2)
    keyboard.write(mess)
    keyboard.press('enter')
def wishMe():
    hour = int(datetime.datetime.now().hour)

    if hour>=0 and hour<12:
        speak("GOOD MORNING..")
    elif hour>12 and hour<17:
        speak("GOOD AFTERNOON..")
    else:
        speak("GOOD EVENING..")
    speak("I am Jarvis Sir. Please tell me how may I help you....")
def intro():
    speak("My Owner name is Ayush Rathore and I am the assistant Jarvis ")
def speak(audio):
    engine.say(audio)
    engine.runAndWait()
def takecmd():
    # it takes microphone imput from user and returns output..
    r = sr.Recognizer()
    with sr.Microphone() as source:
        print("Listening.....")
        r.pause_threshold = 1
        audio = r.listen(source)
    try:
        print("Recognizing....")
        query = r.recognize_google(audio, language='en-in')
        print(f"User said: {query}\n")

    except Exception as e:
        print(e)
        print("say that again please...\n")
        return "None"
    return query
def sendEmail(to,content):
    server = smtplib.SMTP('smtp.gmail.com',587)
    server.ehlo()
    server.starttls()
    server.login('email@example.com','password')
    server.sendmail('email@example.com',to,content)
    server.close()
def telegram():
    speak('who?? kise message krna h sir ..')
    who = input("enter the name jise message krna h: ")
    speak('sir kya message bheju..')
    message = input("kya mess krna h : ")
    os.startfile("C:\\Users\\Neelesh\\AppData\\Roaming\\Telegram Desktop\\Telegram.exe")
    time.sleep(5)
    pyautogui.click(x=655, y=173)
    
    keyboard.write(who)
    keyboard.press('space bar')
    # keyboard.press('enter')
    time.sleep(2)
    pyautogui.click(x=671, y=239)
    time.sleep(2)
    keyboard.write(message)
    keyboard.press('enter')

def countdown(time_sec):
    while time_sec:
        mins, secs = divmod(time_sec,60)
        timeformat = '{:02d}:{:02d}'.format(mins,secs)
        print(timeformat,end='\r')
        time.sleep(1)
        speak(time_sec)
        time_sec -=1
    speak("Time Over.....")
def takehindi():
    r = sr.Recognizer()
    with sr.Microphone() as source:
        print("Listening.....")
        r.pause_threshold = 1
        audio = r.listen(source)
    try:
        print("Recognizing....")
        query = r.recognize_google(audio, language='hi')
        print(f"User said: {query}\n")

    except Exception as e:
        print(e)
        print("say that again please...\n")
        return None
    return query
def translate():
    speak("tell me the line...")
    line = takehindi()
    translate = Translator()
    result = translate.translate(line)
    text = result.text

    speak("the translation of your language is "+text)
def music():
    os.startfile("https://open.spotify.com/playlist/1dLtfFIoxDSJmBhadXJZt4")
    time.sleep(5)
    pyautogui.click(x=405,y=631)
def wolframe():
    api_key = "Y64XLJ-VQX3U772KX"
    requester = wolframealpha.client(api_key)
    requested = requester.query(query)

    try:
        Ans = next(requested.results).text
        return Ans

    except:
        speak("an string value is not found...")
if __name__ == '__main__':
    wishMe()
    intro()
    countdown(4)

    while True:
        query = takecmd().lower()
        if 'search' in query:
            speak("Searching...")
            query = query.replace("search","")
            results = wikipedia.summary(query, sentences=3)
            speak("According to wikipedia....")
            speak(results)
            print(results)
        elif "tell me joke" in query:
            speak(pyjokes.get_joke())
        elif 'hackerrank' in query:
            hackerrank()
            
        elif 'whatsapp' in query:
            whatsapp()
            
        elif 'open youtube' in query:
            webbrowser.open("youtube.com")
        elif 'open google' in query:
            webbrowser.open("google.com")
        elif 'open classroom' in query:
            webbrowser.open("https://classroom.google.com/u/1/h")
        elif 'open codechef' in query:
            webbrowser.open("codechef.com")
        elif 'play music' in query:
            music()
        elif 'telegram' in query:
            telegram()
        elif 'time' in query:
            strTime = datetime.datetime.now().strftime("%H:%M:%S")
            speak(f"sir time is {strTime}")
            print(strTime)
        elif 'translator' in query:
            translate()
        elif 'alarm' in query:
            speak("tell the time....")
            time = input(":Enter the time : ")
            while True:
                Time_ac = datetime.datetime.now()
                now = Time_ac.strftime("%H:%M:%S")
                if now ==time:
                    speak("Time to wake up sir.....")
                    os.startfile('remix.mp3')
                    speak("Alarm closed!")

                elif now>time:
                    break

        elif 'how to ' in query:
            speak("getting data from internet!!")
            op = query.replace("jarvis","")
            max_result =1
            how_to_fxn = search_wikihow(op,max_result)
            assert len(how_to_fxn) ==1
            how_to_fxn[0].print()
            speak(how_to_fxn[0].summary)

        elif 'countdown' in query:
            speak("sir how many seconds...")
            sec = input(": ENter the seconds ")
            countdown(sec)
        elif "shutdown" in query:
            speak("do you really want to shut down the system.")
            reply = takecmd().lower()
            if "yes" in reply:
                os.system('shut down /s /t 1')
            else:
                speak("Ok sir")
        elif 'exit' in query:
            quit()


