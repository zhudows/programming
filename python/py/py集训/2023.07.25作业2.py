import turtle as t
t.speed(1)
t.shape('turtle')
t.pencolor('black')
t.fillcolor('black')
t.seth(90)

t.pendown()
t.begin_fill()
t.forward(100)
t.left(90)
t.forward(100)
t.left(90)
t.forward(100)
t.left(90)
t.forward(100)
t.end_fill()

t.begin_fill()
t.forward(100)
t.right(90)
t.forward(100)
t.right(90)
t.forward(100)
t.right(90)
t.forward(100)
t.end_fill()
t.penup()

t.backward(100)
t.pendown()
t.left(90)
t.pendown()
t.forward(100)
t.right(90)
t.forward(100)
t.penup()

t.goto(0,100)
t.pendown()
t.right(90)
t.forward(100)
t.right(90)
t.forward(100)

t.hideturtle()
t.done()
