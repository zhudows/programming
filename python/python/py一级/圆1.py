import turtle
turtle.shape('turtle')
turtle.pensize(25)
turtle.speed(7)
turtle.pencolor('red')
turtle.penup()
turtle.goto(0,-150)
turtle.pendown()
turtle.circle(150)
turtle.penup()
turtle.goto(0,-95)
turtle.pendown()
turtle.circle(95)
turtle.penup()
turtle.goto(0,0)
turtle.dot(165,"blue")
turtle.goto(0,80)
turtle.pensize(4)
turtle.pencolor('white')
turtle.right(108)
turtle.pendown()
turtle.fillcolor('white')
turtle.begin_fill()
for i in range(5):
    turtle.forward(150)
    turtle.left(144)
turtle.end_fill()
turtle.hideturtle()
turtle.done()