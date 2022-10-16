def welcome():
    print('This is a simple calculator program for two numbers. Hope you enjoy it!')

def main():
    print('''             For subtration type s
             For addtion type a
             For multification type m
             For division type d
             To quit type q''')
    
    a = input('what oparetion do you want?(s/a/m/d/q) - ')

    if a == 's':
        w1 = int(input('type your first number - '))
        w2 = int(input('type your second number - '))
        sub(w1,w2)

    elif a == 'a':
        x1 = int(input('type your first number - '))
        x2 = int(input('type your second number - '))
        add(x1,x2)

    elif a == 'm':
        y1 = int(input('type your first number - '))
        y2 = int(input('type your second number - '))
        mul(y1,y2)

    elif a == 'd':
        z1 = int(input('type your first number - '))
        z2 = int(input('type your second number - '))
        div(z1,z2)

    elif a == 'q':
        quit()

    else:
        print('you type something wrong!')
        main()

def add(a,b):
    r = print(f'you result is {a+b}')
    return main()

def sub(a,b):
    r = print(f'you result is {a-b}')
    return main()

def mul(a,b):
    r = print(f'you result is {a*b}')
    return main()

def div(a,b):
    r = print(f'you result is {a/b}')
    return main()

welcome()
main()
