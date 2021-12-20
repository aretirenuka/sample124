a=list(map(int,input().split()))
for i in range(len(a)):
    for j in range(i+1,len(a)):
        if a[j]<a[i]:
            a[i],a[j]=a[j],a[i]
print(a)
