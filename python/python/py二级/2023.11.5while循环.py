print('--------------------1--------------------')
password=input('请输入密码:')
while password!='1314':
    password=input('密码错误，请再次输入:')
    continue
print('密码正确')
print('--------------------2--------------------')
for subject in['语文','数学','英语','物理']:
    if subject=='英语':
        continue
    print(subject)
print('--------------------3--------------------')
cities=['大连','深圳','北京','葫芦岛','广州','杭州']
city=input('请输入搜索的城市:')
if city in cities:
    print(city)
else:
    print('No data')
print('--------------------4--------------------')
