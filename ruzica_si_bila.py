#!/usr/bin/env python
# _*_ coding: UTF-8 _*_
"""=================================================
@Project -> File    : Operate_system_ModeView_structure -> rose.py
@IDE     : PyCharm
@Author  : zihan
@Date    : 2020/5/20 15:09
@Desc    :https://jingyan.baidu.com/article/d169e18689f309026611d8c8.html
================================================="""
import turtle as t


def main():
    # Set initial position
    t.bgcolor("black")
    t.color("black");
    t.penup()
    t.left(90)
    t.fd(200)
    t.pendown()
    t.right(90)

    #  Stamen
    t.fillcolor("red")
    t.begin_fill()
    t.circle(10, 180)
    t.circle(25, 110)
    t.left(50)
    t.circle(60, 45)
    t.circle(20, 170)
    t.right(24)
    t.fd(30)
    t.left(10)
    t.circle(30, 110)
    t.fd(20)
    t.left(40)
    t.circle(90, 70)
    t.circle(30, 150)
    t.right(30)
    t.fd(15)
    t.circle(80, 90)
    t.left(15)
    t.fd(45)
    t.right(165)
    t.fd(20)
    t.left(155)
    t.circle(150, 80)
    t.left(50)
    t.circle(150, 90)
    t.end_fill()

    #  Draw the first petal
    t.left(150)
    t.circle(-90, 70)
    t.left(20)
    t.circle(75, 105)
    t.setheading(60)
    t.circle(80, 98)
    t.circle(-90, 40)

    #  Petal 2
    t.left(180)
    t.circle(90, 40)
    t.circle(-80, 98)
    t.setheading(-83)

    #  First leaf
    t.fd(30)
    t.left(90)
    t.fd(25)
    t.left(45)
    t.fillcolor("green")
    t.begin_fill()
    t.circle(-80, 90)
    t.right(90)
    t.circle(-80, 90)
    t.end_fill()

    t.right(135)
    t.fd(60)
    t.left(180)
    t.fd(85)
    t.left(90)
    t.fd(80)

    #  Second leaf
    t.right(90)
    t.right(45)
    t.fillcolor("green")
    t.begin_fill()
    t.circle(80, 90)
    t.left(90)
    t.circle(80, 90)
    t.end_fill()

    t.left(135)
    t.fd(60)
    t.left(180)
    t.fd(60)
    t.right(90)
    t.circle(200, 60)

    printer = t.Turtle()
    printer.hideturtle()
    printer.penup()
    printer.back(200)
    printer.write("Ružica si bila, Mojaaaaaaaaa\n\n", align="right", font=("Italics", 16, "bold"))

    t.exitonclick()


if __name__ == '__main__':
    main()