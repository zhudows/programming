animal=['dog','cat','pig']
animal.append('horse')
print(animal[:])

animal.pop(1)
print(animal)

animal[2]='snake'
print(animal)

if 'zebra' in animal:
    print("yes")
else:
    print("no")

print(animal[1:])