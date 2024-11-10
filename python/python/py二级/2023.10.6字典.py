contacts={'爸爸':'13788888888','妈妈':'15588888888'}
print(contacts)

#字典——增和改
contacts['王老师']='15133333333'
print(contacts)

#字典——删
del contacts['王老师']
print(contacts)
#清空字典数据
contacts.clear()
print(contacts)

del contacts
contacts_2={'爸爸':'13788888888','妈妈':'15588888888','爷爷':'13788888888','奶奶':'15588888888','姥姥':'13788888888','老爷':'15588888888'}
for key in contacts_2.keys():
    print(key)
contacts_3={'爸爸':'13788888888','妈妈':'15588888888','爷爷':'13788888888','奶奶':'15588888888','姥姥':'13788888888','老爷':'15588888888'}
for value in contacts_3.values():
    print(value)