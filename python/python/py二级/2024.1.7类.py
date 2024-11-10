class Animal:
    pass
tiger = Animal()
dog = Animal()
dog.name = "柯基"
dog.weight = 10
dog.LegNum = 4
print("我是一只狗，名字叫%s，体重%dkg，有%d条腿"%(dog.name,dog.weight,dog.LegNum))

class Animal:
    def __init__(self,name,weight,LegNum):
        self.name=name
        self.weight=weight
        self.LegNum=LegNum
dog=Animal("柯基",10,4)
print("我是一只狗，名字叫%s，体重%dkg，有%d条腿"%(dog.name,dog.weight,dog.LegNum))
print(dog)