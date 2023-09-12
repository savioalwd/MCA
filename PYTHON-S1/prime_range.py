upper = int(input("enter upper limit = \t"))
# lower = int(input("enter lower limit = \t"))

print("Prime no btw 1 and ",upper," are \n")

for i in range(1,upper+1):
    if(i>1):
        for c in range(2,i):
            if(i % c) == 0:
                break
        else:
            print(i)