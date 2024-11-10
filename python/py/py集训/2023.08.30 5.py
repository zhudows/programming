import turtle as t
t.pensize(10)
t.pencolor("black")
t.fillcolor("blue")

t.penup()
t.goto(0,-50)
t.pendown()
t.begin_fill()
t.circle(50)
t.end_fill()

t.forward(90)
t.left(120)
t.forward(180)
t.left(120)
t.forward(180)
t.left(120)
t.forward(90)

t.left(90)
t.forward(150)

t.hideturtle()
t.done()
