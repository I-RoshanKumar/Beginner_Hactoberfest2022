import re
def password(v):
   
    if v == "\n" or v == " ":
        return "Password cannot be a newline or space!"
      
    if 9 <= len(v) <= 20:
   
        # checks for occurrence of a character 
        # three or more times in a row
        if re.search(r'(.)\1\1', v):
            return "Weak Password: Same character repeats three or more times in a row"
   
        # checks for occurrence of same string 
        # pattern( minimum of two character length)
        # repeating
        if re.search(r'(..)(.*?)\1', v):
            return "Weak password: Same string pattern repetition"
   
        else:
            return "Strong Password!"
   
    else:
        return "Password length must be 9-20 characters!"
  
def main():
   
    # Driver code
    print(password("password"))
    print(password("6gh&^%TRy765RTy74"))
    print(password("*&^RFghuiyU*&^Ty"))
    print(password(" "))
    
if __name__ == '__main__':
    main()
