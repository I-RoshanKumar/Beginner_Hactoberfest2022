"""
This script simple generates a qrcode for our text as well as extract data from any qr code.
requirements :-
python 3.7 or above
tkinter 
"""
## Source code

import tkinter as tk
from functools import partial  
import tkinter.messagebox
from tkinter.filedialog import *
r = tk.Tk()
r.title('QRCODE')
r.geometry('400x300')
def qrcode():
    def create_code():
        def data_create(n1,n2):
            link =n1.get()
            name =n2.get()
            print(link , name)
            import qrcode 
            image = qrcode.make(link)
            save_video = askdirectory()
            image.save(f"{save_video}+{name}.jpg")
            tkinter.messagebox.showinfo("QRcode Status", "QRcode Created Successfully !!")
        button.destroy()
        button1.destroy()
        link= tk.StringVar()  
        name= tk.StringVar()  
        la=tk.Label(r,text="paste link or text to create  QRCode")
        la.place(x=100,y=20)
        ent=tk.Entry(r,width=50,textvariable=link)
        ent.place(x=50,y=50)
        la2=tk.Label(r,text="write file name to save")
        la2.place(x=140,y=100)
        ent2=tk.Entry(r,width=50, textvariable=name)
        ent2.place(x=50,y=130)
        data_create = partial(data_create, link,name)  
        button2 = tk.Button(r, text='Create QRCODE', width=25, command=data_create)
        button2.place(x=100,y=170)
        button4 = tk.Button(r, text='Exract QRCODE', width=25, command=extract_qrcode)
        button4.place(x=100,y=210)
    def extract_qrcode(label):
        filename=filedialog.askopenfilename()
        print(filename)
        import cv2 # pip install opencv-python
        d= cv2.QRCodeDetector() #class use to detect data in qrcode
        img=cv2.imread(filename)
        data, points, staright_qrcode = d.detectAndDecode(img)
        print(data)
        label.config(text=f"Data in QRCODE : {data} ")  
    labelResult = tk.Label(r)  
    labelResult.place(x=10, y=270)  
    extract_qrcode = partial(extract_qrcode, labelResult) 
    button = tk.Button(r, text='CREATE QRCODE', width=25, command=create_code)
    button.place(x=100,y=110)
    button1 = tk.Button(r, text='Exract QRCODE', width=25, command=extract_qrcode)
    button1.place(x=100,y=150)
qrcode()
r.mainloop()

