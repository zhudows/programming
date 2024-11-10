# def lucknum(num):
#     print('你的幸运数字是：{}'.format(num))
#
# number=input('请输入你的幸运数字：')
# lucknum(number)
#
# def lucknum(num):
#     return num+1
#
# num=int(input('请输入你的幸运数字:'))
# number=lucknum(num)
# print('你的幸运数字是:',number)
def qh(strat,end):
    sum1=0
    for i in range(strat, end+1, 2):
        sum1+=i
    return sum1
print(qh(1, 100))