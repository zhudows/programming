import turtle#第一步 导入文具库
turtle.shape("arrow")#第二步 初始化
turtle.pencolor("#000000")
turtle.pensize(2)
turtle.speed(2)
turtle.screensize(800,600,"green")
turtle.fillcolor("blue")

turtle.pendown()#第三步 落笔
turtle.begin_fill()#第四步 痕迹
turtle.circle(-30,90)
turtle.left(180)
turtle.circle(-30,180)
turtle.left(180)
turtle.circle(90,180)#最大的半圆
turtle.left(180)
turtle.circle(-30,180)
turtle.left(180)
turtle.circle(-30,90)
turtle.end_fill()

turtle.right(90)
turtle.forward(120)
turtle.circle(-10,180)

turtle.penup()
turtle.hideturtle()
turtle.done()