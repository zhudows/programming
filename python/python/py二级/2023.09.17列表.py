#非空列表
list_1=['python','C++',3.1415926535897932384626433832795,"圆周率"]
print(list_1)

#空列表
list_2=[]
print(list_2)

#单引号和双引号
list_3=[""]
print(list_3)

#列表的操作--增
list_4=['python','C++']
#在末尾增加一个数据——append()
list_4.insert(1,'pycharm')
print(list_4)

#在末尾增加多个数据——extend()
list_5=['python','C++']
list_5.extend(list_5)
print(list_5)

#删除——remove（指定）
#删除——pop（最后一个）
#删除——del（指定位置）
list_6=['python','idle','pycharm']
list_6.remove('idle')
print(list_6)

list_7=['python','idle','pycharm']
list_7.pop()
print(list_7)

list_8=['python','idle','pycharm']
list_8.pop(1)
print(list_8)

list_9=['python','idle','pycharm']
del list_9[0]
print(list_9)

#列表操作--改
list_10=['python','idle','pycharm']
list_10[1]='windows'
print(list_10)

#列表操作--查
list_11=['python','idle','pycharm']
if ('windows' in list_11):
    print("有")
else:
    print('没有')

#查——index
list_12=['python','idle','pycharm']
print(list_12.index('python'))