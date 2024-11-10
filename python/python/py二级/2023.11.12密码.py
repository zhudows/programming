num=3
password=input('请输入密码:')
while password!='1314':
    if num>1:
        num=num-1
        password=input('密码错误，请再次输入:')
    else:
        print('机会用完')
        break
if num>1:
    print('密码正确')

num=0
while True:
    password=input('请输入密码:')
    if password==('1314'):
        print('密码正确!')
        break
    else:
        num+=1
        if num==3:
            print('机会用完')
            break