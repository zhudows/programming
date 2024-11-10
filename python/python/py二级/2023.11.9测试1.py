print('--------------------1--------------------')
cities=['大连','深圳','北京','广州','葫芦岛']
city_input=input('请输入你要查询的城市:')
if city_input in cities:
    print(city_input)
else:
    print('No Data')

print('--------------------2--------------------')
cities=['大连','深圳','北京','葫芦岛','广州','杭州']
city_id=input('请输入搜索的城市:')
for num in range(len(cities)):
    if city_id==cities[num]:
        print(cities[num])
        break
    else:
        if num==len(cities[num])-1:
            print('No Data')
        continue
print('--------------------3--------------------')
cities=['大连','深圳','北京','广州','葫芦岛']
city_input=input('请输入你要查询的城市:')
num=0
while num!=len(cities):
    if city_id==cities[num]:
        print(cities[num])
        break
    else:
        if num==len(cities)-1:
            print('No Data')
        num+=1
print('--------------------4--------------------')

print('--------------------5--------------------')
num = 3
password = input('请输入密码:')
while password != '1314':
    if num > 1:

        num = num - 1
        password = input('密码错误,请再次输入:')
    else:
        print('机会用完!')
        break
if num > 1:
    print('密码正确!')
print('--------------------6--------------------')
print(2+22+222+2222+22222)
print('--------------------7--------------------')
print(2+4+6+8+10+12+14+16+18+20+22+24+26+28+30+32+34+36+38+40+42+44+46+48+50+52+54+56+58+60+62+64+66+68+70+72+74+76+78+80+82+84+86+88+90+92+94+96+98+100)
print('--------------------7--------------------')
for i in range(1,101):
    if i%7!=0 and i%10!=7 and i//10%10!=7 and i//100!=7:
        print(i)