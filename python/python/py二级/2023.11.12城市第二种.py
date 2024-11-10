# print("--------------------1--------------------")
# cities=['大连','深圳','北京','葫芦岛','广州','杭州']
# city_id=input('请输入搜索的城市:')
# for num in range(len(cities)):
#     if city_id==cities[num]:
#         print(cities[num])
#         break
#     else:
#         if num ==len(cities[num])-1:
#             print('No Data')
#         continue
# print("--------------------2--------------------")
# cities=['大连','深圳','北京','葫芦岛','广州','杭州']
# city_id=input('请输入搜索的城市:')
# num=0
# while num!=len(cities):
#     if city_id==cities[num]:
#         print(cities[num])
#         break
#     else:
#         if num==len(cities)-1:
#             print('No Data')
#         num+=1
print("--------------------3--------------------")
cities=['大连','深圳','北京','葫芦岛','广州','杭州']
city_id=input('请输入搜索的城市:')
while city_id in cities:
    print(city_id)
    break
