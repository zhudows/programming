import turtle as t
t.shape("turtle")
t.speed(1)
t.pencolor("black")
t.fillcolor("red")
t.penup()

t.goto(-100,100)
t.pendown()
t.forward(200)
t.right(90)
t.forward(200)
t.right(90)
t.forward(200)
t.right(90)
t.forward(200)
t.right(90)
t.penup()

t.goto(0,100)
t.pendown()
t.begin_fill()
t.goto(-100,0)
t.goto(0,-100)
t.goto(100,0)
t.goto(0,100)
t.end_fill()
t.penup()

t.home()
t.hideturtle()
t.done()
