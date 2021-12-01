import math as m
x= int(input("unesite broj x: "))
log=(m.log2(x))
print("jeste, 2 na {} daje razultat {}".format(int(log),x) if log.is_integer() else "broj nije stepen dvojke")