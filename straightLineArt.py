import turtle
import time
from random import *
import os
import subprocess

turtle.setup(width=3840,height=2160)
shape=turtle.Turtle()
shape.hideturtle()
shape.speed(10)

for i in range (1, 150):
	side = randint(1,20)
	shape.pensize(random()*5)
	col =(random(),random(),random())
	shape.pencolor(col)

	if(shape.xcor()<-(1920/2) or shape.xcor()>1920/2 or shape.ycor()<-(1080/2) or shape.ycor()<1080/2):
		shape.setpos(randint(-1920/2, 1920/2),randint(-1080/2, 1080/2))
	shape.left(random()*360)
turtle.getcanvas().postscript(file="saved.ps", colormode='color')
subprocess.call("convert saved.ps newsave.png", shell=True)
os.remove("saved.ps")
