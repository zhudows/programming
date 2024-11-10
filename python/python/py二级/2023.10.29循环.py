print('--------------------1--------------------')
names=[1,2,3,4,5,6,7,8]
for name in names:
    print(name)

print('--------------------2--------------------')
list=[1,2,3,4,5]
for a in range(len(list)):
    print(list[a])

print('--------------------3--------------------')
tuple=('周一','周二','周三','周四','周五','周六','周日')
for b in range(len(tuple)):
    print(tuple[b])

print('--------------------4--------------------')
dics={'01':'张三','02':'李四','03':'王五','04':'赵六'}
for c in dics.items():
    print(c)

print('--------------------5--------------------')
for num in range(10,0,-2):
    print(num)

print('--------------------6--------------------')
cities_id={'020': '广州', '021': '上海', '022': '天津', '023': '重庆', '024': '沈阳', '025': '南京'}
chaxun=input('请输入区号:')
if chaxun in cities_id.keys():
    print(cities_id[chaxun])
else:
    print('查无此号码')

print('--------------------7--------------------')
print('下一个方法')
cities_id={'020': '广州', '021': '上海', '022': '天津', '023': '重庆', '024': '沈阳', '025': '南京'}
chaxun=input('请输入区号:')
for i in cities_id.keys():
    if i==chaxun:
        print(cities_id[chaxun])
    else:
        print('查无此号码')