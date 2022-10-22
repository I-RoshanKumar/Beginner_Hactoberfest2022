import datetime
from datetime import date
def Cal_Age(bday):
	n= date.today()
	a= n.year - bday.year
	return a
b=input("Enter your BirthDate as yyyy/mm/dd:")
n="%Y/%m/%d"
bday=datetime.datetime.strptime(b,n)
print("You are",Cal_Age(bday), "years")
