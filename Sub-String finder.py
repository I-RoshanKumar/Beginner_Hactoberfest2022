def count_substring(string, sub_string):
    c = 0
    for _ in range(len(string)):
        a = string.find(sub_string)
        if a==-1:
            break
        c += 1
        string = string[a+1:]
    return c
if __name__ == '__main__':
    string = input().strip()
    sub_string = input().strip()
    
    count = count_substring(string, sub_string)
    print(count)