import turtle as t
t.penup()
t.goto(-120,120)
t.pendown()
def zheng1(num):
    for i in range(num):
        t.forward(80)
        t.right(90)
def zheng2(num):
    for i in range(num):
        zheng1(4)
        t.forward(80)
    zheng1(4)
zheng2(2)
t.penup()
t.goto(-120,40)
t.pendown()
zheng2(2)
t.penup()
t.goto(-120,-40)
t.pendown()
zheng2(2)
t.penup()
t.hideturtle()
t.done()