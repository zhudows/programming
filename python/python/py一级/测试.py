import turtle
turtle.shape('turtle')
turtle.pensize(3)
turtle.pencolor('black')
turtle.fillcolor('yellow')
turtle.speed(7)
turtle.penup()
turtle.seth(90)
turtle.forward(90)
turtle.seth(180)
turtle.forward(90)
turtle.pendown()
turtle.seth(0)
turtle.begin_fill()
turtle.forward(180)
turtle.seth(-135)
turtle.forward(255)
turtle.seth(90)
turtle.forward(180)
turtle.end_fill()
turtle.seth(-90)
turtle.fillcolor('red')
turtle.forward(180)
turtle.seth(0)
turtle.begin_fill()
turtle.forward(180)
turtle.seth(90)
turtle.forward(180)
turtle.end_fill()
turtle.hideturtle()
turtle.done()