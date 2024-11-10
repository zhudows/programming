import turtle as t
t.pencolor("black")
t.penup()

t.goto(-200,200)
t.pendown()
t.goto(200,200)
t.goto(200,-200)
t.goto(-200,-200)
t.goto(-200,200)
t.penup()

t.goto(-200,0)
t.pendown()
t.pencolor("red")
t.goto(200,0)
t.penup()

t.goto(0,-200)
t.pendown()
t.goto(0,200)

t.hideturtle()
t.done()
