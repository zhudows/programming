n=int(input('请输入一个总秒数:'))#输入总秒数，格式工厂转换为整形
m=n%60#取秒
f=n//60%60
s=n//(60*60)#n//3600
print(s,f,m)
