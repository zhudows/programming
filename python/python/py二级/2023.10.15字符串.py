name='朱泽睿'
age=6
height=154.4
print('%s今年%d岁\n身高%.2f厘米' % (name, age, height))

str1= 'I love pycharm'
print(str1[0])

print(str1[2])

print(str1[7])

str2='I love python'
print(str2.find('python'))

a='python'.isalpha()
print(a)

b='python888'.isalpha()
print(b)

c='888888'.isdigit()
print(c)

d='python888888'.isdigit()
print(d)

e='pycharm888888'.isalnum()
print(e)

f='pycharm,888888'.isalnum()
print(f)

str3='my pycharm'
print(str3.replace('my','your'))
