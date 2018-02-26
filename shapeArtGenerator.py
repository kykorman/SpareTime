import turtle
from random import *
import subprocess
import tempfile
import os
import time
triangle = turtle.Turtle()
triangle.pensize(2)
state=randint(0,1)
 
triangle.speed(99999999)
 
r=random()
g=random()
b=random()
 
addcol=random()%.05+.02
col=(r,g,b)
triangle.pencolor(col)
side=randint(1,9)
triangle.penup()
triangle.goto(0,0) 
tele=int(input("1 to teleport on screen, 0 not to "))
shape=int(input("1 to change shape periodically, 0 not to "))
 
 
#sides=int(input("Enter sides: "))
sides=randint(2,7)
sides=360/sides+sides*4
if(state==0):
    state=-1
    side=randint(400,500)
    triangle.goto(-150,-150)
triangle.hideturtle()
triangle.pendown()
top=400
if(not tele):
    top=200
for i in range (1,top):
     
    #slightly go more than necessary turn for triangle
    for k in range (1,5):
        triangle.forward(side/5.0)
         
        r+=addcol/randint(1,50)
        g+=addcol/randint(1,50)
        b+=addcol/randint(1,50)
         
        if(r>1):
            r=0
        if(g>1):
            g=0
        if(b>1):
            b=0
         
        col=(r,g,b)
        triangle.pencolor(col)
 
    triangle.left(sides)
    side=side + state*randint(0,5)
     
 
    #Moves shape around within window
         
    if(i%30==29):
        if(tele):
         
            triangle.penup()
            x=randint(-200,200)
            y=randint(-200,200)
            triangle.goto(randint(-300,300),randint(-300,300))
            if(x<=0):
                if(y<=0):
                    triangle.seth(45)
                else:
                    triangle.seth(-45)
            else:
                if(y<=0):
                    triangle.seth(135)
                else:
                    triangle.seth(225)
                     
 
            triangle.pendown()
 
        if(shape):
            sides=randint(2,9)
            sides=360/sides+sides*4
            triangle.pendown()
 
    if (i%150==149):
        state*=-1
 
cv = turtle.getcanvas()
cv.postscript(file="saved.ps", colormode='color')
 
subprocess.call("convert saved.ps newsave.png",shell=True)
os.remove("saved.ps")
