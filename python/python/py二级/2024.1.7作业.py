class stationary:
    def __init__(self,name,len,shuliang):
        self.name=name
        self.len=len
        self.shuliang=shuliang
stationary=stationary("铅笔",10,2)
print("名称%s,长度%d,数量%d"%(stationary.name,stationary.len,stationary.shuliang))
stationary.name="格尺"
print("名称%s,长度%d,数量%d"%(stationary.name,stationary.len,stationary.shuliang))