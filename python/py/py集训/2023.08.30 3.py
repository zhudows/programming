import turtle as t
t.pencolor("red")
t.pensize(2)
t.penup()

t.goto(0,-100)
t.pendown()
t.circle(100)
t.left(90)

t.forward(200)
t.penup()

t.goto(-100,0)
t.pendown()
t.right(90)
t.forward(200)
t.penup()

t.hideturtle()
t.done()
