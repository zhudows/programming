import turtle as t
#第一种方法：
t.goto(0,0)
t.pendown()
t.dot(400,"red")
t.dot(300,"#ffffff")
t.dot(200,"red")
t.dot(100,"white")

t.penup()
t.goto(0,50)
t.pencolor("blue")
t.pendown()
t.setheading(-108)
t.forward(95)
t.left(144)
t.forward(95)
t.left(144)
t.forward(95)
t.left(144)
t.forward(95)
t.left(144)
t.forward(95)
t.left(144)




#第二种方法：
#第一个圆
# t.penup()
# t.goto(0,-200)
# t.pendown()
# t.pensize(40)
# t.pencolor("red")
# t.showturtle()
# t.circle(200)
#
# #第二个圆
# t.penup()
# t.goto(0,-130)
# t.pencolor("#ffffff")
# t.pensize(40)
# t.pendown()
# t.circle(130)
#
# #第三个圆
# t.penup()
# t.goto(0,-110)#坐标 位置
# t.pencolor("red")
# t.pensize(40)
# t.pendown()
# t.circle(110)#距离 长短


t.done()