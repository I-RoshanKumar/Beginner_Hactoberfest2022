import random
import array


MAX_LEN = 8


Digits = ['0', '1', '2', '3', '4', '5', '6', '7', '8', '9']
Lowercase = ['a', 'b', 'c', 'd', 'e', 'f', 'g', 'h',
                     'i', 'j', 'k', 'm', 'n', 'o', 'p', 'q',
                     'r', 's', 't', 'u', 'v', 'w', 'x', 'y',
                     'z']

Uppercase = ['A', 'B', 'C', 'D', 'E', 'F', 'G', 'H',
                     'I', 'J', 'K', 'M', 'N', 'O', 'P', 'Q',
                     'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y',
                     'Z']

Symbol = ['@', '#', '$', '%', '=', ':', '?', '.', '/', '|', '~', '>',
           '*', '(', ')', '<']


list = Digits + Uppercase + Lowercase + Symbol


rand_digit = random.choice(Digits)
rand_upper = random.choice(Uppercase)
rand_lower = random.choice(Lowercase)
rand_symbol = random.choice(Symbol)


temp_pass = rand_digit + rand_upper + rand_lower + rand_symbol


for x in range(MAX_LEN - 4):
    temp_pass = temp_pass + random.choice(list)

    
    temp_pass_list = array.array('u', temp_pass)
    random.shuffle(temp_pass_list)


password = ""
for x in temp_pass_list:
    password = password + x


print(password)
