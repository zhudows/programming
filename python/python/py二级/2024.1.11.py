while True:
    long,long1,long2 = input("请输入行李的长宽高(用英文逗号隔开):").split(",")
    list1=[long,long1,long2]
    long=int(long)
    long1=int(long1)
    long2=int(long2)
    if long+long1+long2>=60 and long+long1+long2<=203:
        print("可以托运")
    else:
        print("不可以托运")
