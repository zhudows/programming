def shuchu(strat,end):
    num1 = 0
    for i in range(strat, end + 1, 2):
        num1 += i
    return num1
print(shuchu(1,100))

