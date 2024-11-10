yuan=0
while True:
    shi=int(input('请输入停车时间（小时）：'))
    if shi<=2:
        print('收费5元')
    else:
        shi=(shi-2)*2
        yuan=5+shi
        print('收费',yuan,'元')