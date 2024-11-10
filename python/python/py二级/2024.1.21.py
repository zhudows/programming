# a=int(input("请输入一个正整数:"))
# b=int(input("请输入另一个正整数:"))
# num1=[]
# for i in range(a,b):
#     flag=0
#     for j in range(2,i+1):
#         if i%j==0:
#             break
#     else:
#         num1.append(i)
# print(num1)
# print(len(num1))

# a=input(">>>")
# list1=[]
# list2=['1','2','3','4','5','6','7','8','9','0']
# for i in a:
#     if i not in list2:
#         list1.append(i)
# a=input(">>>")
# list1=[]
# list2=['1','2','3','4','5','6','7','8','9','0']
# for i in a:
#     for j in list2:
#         if i==j:
#             break
#     else:
#         list1.append(i)
# print(list1)

while True:
    fenshu=int(input("请输入你的分数>>>"))
    if fenshu<60:
        print("恭喜,不及格！")
    if fenshu>=60 and fenshu<=84:
        print("良")
    if fenshu>=85 and fenshu<=100:
        print("优")
