#calculating area
a=int(input("enter the type of polynomial......1.for rectangle,2.for triangle,3.for square,4.for circel"))
if a==1:
    l=int(input("enter the lenght"))
    b=int(input("enter the breadth"))
    print("area is",l*b)

elif a==2:
    b=int(input("enter the base"))
    h=int(input("enter the height"))
    print("area is",(b*h)/2)
elif a==3:
    l=int(input("enter the lenght"))
    print("area is",l*l)
elif a==4:
    l=int(input("enter the radius"))
    print("area is",3.14*l*l)
else:
    print("invalid ") 
