n=int(input())
a=[]
p=[]
for i in range(n):
    k=input()
    a.append(int(k[0]))
    p.append(int(k[2]))
m=min(p)
index=p.index(m)



money=0
for i in range(0,index+1):
    money+=a[i]*p[i]


for i in range(index+1,n):
    money+=m*a[i]
    
print(money)



