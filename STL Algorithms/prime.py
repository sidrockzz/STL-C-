i=1
count = 0;
x = int(input("Enter the number:\n"))
while (count < x):
    c=0
    for j in range (1, (i+1), 1):
        a = i%j
        if (a==0):
            c = c+1
    if (c==2):
        print (i)
        count = count+1
    i=i+1