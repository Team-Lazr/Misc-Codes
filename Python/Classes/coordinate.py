import math
class Point:

    xCoordinate:float
    yCoordinate:float
    
    def __init__(self, x ,y):
        self.xCoordinate=x
        self.yCoordinate=y
    
    def calculateDistancefromOrigin(self):
        return (round(math.sqrt(((self.xCoordinate-0.0)**2)+((self.yCoordinate-0.0)**2)),2))
    
    def calculateDistancefromPoint(p1,p2):
        return round(math.sqrt(((p2.getxCoordinate() - p1.getxCoordinate())**2) + ((p2.getyCoordinate() - p1.getyCoordinate())**2)),2)
    def getxCoordinate(self):
        return self.xCoordinate
    def getyCoordinate(self):
        return self.yCoordinate
    def setxCoordinate(self,x):
        self.xCoordinate=x
    def setyCoordinate(self,y):
        self.xCoordinate=y

class test(Point):
    def __init__(self):
        self.getdistance()


    def getdistance(self):
        a=Point(3.5,1.5)
        b=Point(6,4)

        print(a.calculateDistancefromOrigin())
        print(b.calculateDistancefromOrigin())

        print(Point.calculateDistancefromPoint(a,b))

test()