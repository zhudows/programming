#用circle函数可以画一个正五边形
import turtle
turtle.shape('turtle')
turtle.pensize(4)
turtle.speed(0)
turtle.pencolor('green')
turtle.penup()
turtle.goto(0,-200)
turtle.pendown()
turtle.circle(200,steps=5)