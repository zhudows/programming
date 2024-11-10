sum1=0
for i in range(2,101,2):
    sum1+=i
print(sum1)

sum1=0
j=2
for i in range(5):
    sum1+=j
    j= j * 10 + j
print(sum1)

for i in range(1,4):
    for j in range(1,4):
        for k in range(1,4):
            if i!=j and i!=k and k!=j:
                print(i,j,k)
print('--------------------------------------------------评估版本--------------------------------------------------')
head=int(input('头:'))
foot=int(input('脚:'))
for j in range(0,head):
    for t in range(0,foot):
        if j*2+t*4==132 and j+t==48:
            print('鸡：', j, '兔：', t)