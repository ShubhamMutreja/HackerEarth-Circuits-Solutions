def check_palindrome(s): 
    return s == s[::-1]


for _ in range(int(input())):
    s = input()
    s = sorted(s)
    res = ''.join(sorted(s)) 
    if check_palindrome(res) == True:
        print(-1)
    else:
        print(res)