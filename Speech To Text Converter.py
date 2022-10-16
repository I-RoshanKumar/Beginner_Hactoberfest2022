import speech_recognition as sr
def takeCommand():
    '''
    it takes microphone input from the user and returns the string output
    '''
    r=sr.Recognizer()
    with sr.Microphone() as source:
        r.energy_threshold=10000
        print("Listening.....")
        r.pause_threshold==1   # seconds of non-speaking audio before a phrase is considered complete(gap between the phrases)
        audio=r.listen(source)

        '''
        energy_threshold to change the input voice volume
        '''
    try:
        print('Recognizing.....')
        query=r.recognize_google(audio,language='en-in')
        print(f"user said:{query}\n")

        '''
        Python f-string is the newest Python syntax to do string formatting. 
        It is available since Python 3.6. 
        Python f-strings provide a faster, more readable, more concise, and less error prone way of formatting strings in Python.
        '''
    except Exception as e:
        print(e)  #can be skipped cause it'll print the error occured
        print("Say that again please....")

        return "None" 
    return query

takeCommand()
