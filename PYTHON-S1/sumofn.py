#using function
n = int(input("enter range"))

def sum(n):
    i=0
    sum = 0
    while(i<=n):
        sum +=i
        i +=1
    return sum

print("sum = ",sum(n))