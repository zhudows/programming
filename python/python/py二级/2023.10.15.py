jiage={'铅笔':'2元','橡皮':'2元','白纸':'1元','文具盒':'20元','玩具手枪':'60元'}
jiage['橡皮泥']='8'
jiage['白纸']='0.2'
del jiage['玩具手枪']
for key in jiage.keys():
    print(key)

for value in jiage.values():
    print(value)

for item in jiage.items():
    print(item)
