# Enter your code here. Read input from STDIN. Print output to STDOUT
t=int(raw_input())
for i in range(t):
    m=int(raw_input())
    n=int(raw_input())
    l=[int(x) for x in raw_input().split()]
    for i in range(n):
        for j in range(i+1,n):
            if l[i]+l[j]==m:
                print i+1,
                print j+1
                break
