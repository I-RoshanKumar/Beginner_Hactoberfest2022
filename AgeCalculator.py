import datetime
from datetime import date
def Cal_Age(bday):
	n= date.today()
	a= n.year - bday.year
	return a
b=input("Enter your BirthDate as dd/mm/yyyy:")
n="%d/%m/%Y"
bday=datetime.datetime.strptime(b,n)
print("You are",Cal_Age(bday), "years")
