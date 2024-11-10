start=int(input('请输入一正整数：'))
end=int(input('请输入一正整数：'))
zhishu = [1]
for i in range(start+1, end):
    for j in range(1, i):
        print(i)
        print(qwertyiop)
        print(j)
        if i % j == 0 and j != 1:
            zhishu.append(i)
print(zhishu)