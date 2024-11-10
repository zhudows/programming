
def shu(start,end):
    c = 0
    for i in range(start,end+1):
        bai=i//100
        shi=i//10%10
        ge=i%10
        if bai**3+shi**3+ge**3==i:
            c+=1
    return c
print(shu(200,500))

def shu(start,end):
    c = 0
    for i in range(start,end+1):
        bai=int(str(i)[0])
        shi=int(str(i)[1])
        ge=int(str(i)[2])
        if bai**3+shi**3+ge**3==i:
            c+=1
    return c
print(shu(200,500))
sum1=0
j=2
for i in range(5):
    sum1=sum1+int(str(j)*(i+1))
print(sum1)