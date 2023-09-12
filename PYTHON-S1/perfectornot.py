n = int(input("enter the number to check"))

sum = 0;

for i in range(1,n):
    if(n%i) == 0:
        sum += i
if(sum == n):
    print("number is perfect")
else:
    print("number not perfect")