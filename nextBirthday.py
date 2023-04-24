from datetime import date
year = int(input('Enter a year: '))
month = int(input('Enter a month: '))
day = int(input('Enter a day: '))
today = date.today()
if month<=today.month:
    year=today.year+1
else:
    year=today.year


d = date(year, month, day)
print("Your next birthday is on : ", d)



print("Today's date:", today)


diff=today-d
print(f'Difference is {abs(diff.days)} days')
