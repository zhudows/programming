import turtle
turtle.shape('turtle')
turtle.pencolor('green')
turtle.pensize(4)
turtle.speed(3)
turtle.seth(90)
for i in range(3):
    turtle.circle(-30,180)
    turtle.seth(90)
turtle.circle(90,180)
turtle.penup()
turtle.goto(90,30)
turtle.pendown()
turtle.goto(90,-100)
turtle.circle(-15,180)
turtle.done()