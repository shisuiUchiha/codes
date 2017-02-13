# Enter your code here. Read input from STDIN. Print output to STDOUT
n=int(raw_input())
l=raw_input().split()
for i in range(0,n):
    l[i]=int(l[i])
l.sort()
l.reverse()
z=100000000
for i in range(0,n-1):
    y=l[i]-l[i+1]
    z=min(y,z)
h=[]
for i in range(0,n-1):
    if l[i]-l[i+1]==z:
        h.append(l[i])
        h.append(l[i+1])
    else:
        h=h
h.reverse()
for i in h:
    print i,

    
    
