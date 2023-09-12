def check(n):
    
    if( str(n) == str(n)[::-1]):
        return True
    else:
        return False
    
n = 122
if(check(n) == True):
    print("palindrome")
else:
    print("not palindrome")
