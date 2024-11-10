#1、有没有输入流
#2、需不需要变量
#3、处理
#4、有没有输出流

store=int(input("输入一个分数："))
if store>=80 and store<90:
    print("优秀")
elif store>=70 and store<80:
    print("良好")
elif store>=60 and store<70:
    print("一般")


