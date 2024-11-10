#复习
list_1=[1,2,3,4]
print(type(list_1))

#列表--切片
list_2=[1,2,3,4,5,6,7,8]
#切出[1,2,3,4]
print(list_2[0:4])
#my_list[:4]
print(list_2[:3])
#my_list[2:]
print(list_2[2:])
#my_list[:]输出整个列表
print(list_2[:])
#从0开始-1倒数第二个
print(list_2[:-1])
#步长
print(list_2[::2])

#列表--排序
list_3=[2,4,5,1,3,7,8,6]
#没有备份的排序--sort()
list_3.sort()
print(list_3)
#备份的排序--sorted()
list_4=sorted(list_3,reverse=True)
print(list_3)
print(list_4)

list_4=sorted(list_3,reverse=False)
print(list_3)
print(list_4)

list_5=[1,2,3,4]
list_6=[1,2,3,4]
print(list_5==list_6)

list_7=[1,2,[1,4]]
print(list_7)