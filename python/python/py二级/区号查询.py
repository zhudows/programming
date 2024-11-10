cities_id={'020': '广州', '021': '上海', '022': '天津', '023': '重庆', '024': '沈阳', '025': '南京'}
chaxun=input('请输入区号:')
if chaxun in cities_id.keys():
        print(cities_id[chaxun])
else:
    print('查无此号码')
print('--------------------2--------------------')
cities_id={'020': '广州', '021': '上海', '022': '天津', '023': '重庆', '024': '沈阳', '025': '南京'}
chaxun=input('请输入区号:')
for i in cities_id.keys():
    if i==chaxun:
        print(cities_id[chaxun])
    else:
        print('查无此号码')