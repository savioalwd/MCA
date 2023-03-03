word = input("enter a string")
a =0;
print("\n"+word);
result =  {'a':0,'e':0,'i':0,'o':0,'u':0};
for i in word:
    if i== 'a':
        result['a'] += 1
    elif i== 'e':
        result['e'] += 1
    elif i== 'i':
        result['i'] += 1
    elif i== 'o':
        result['o'] += 1
    elif i== 'u':
        result['u'] += 1

print(result)