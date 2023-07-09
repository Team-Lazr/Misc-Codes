class myException:
    class personlimit(BaseException):
        Exception("Max 2 no. of extra people are allowed")
    class roomtype(BaseException):
        Exception("Invalid Type of Room")
    class maxdays(BaseException):
        Exception("Max limit of stay is exceeded")

class Roomdetails:
    billId:int
    billId=0
    customerName:str
    typeOfRoom:str
    noOfExtraPersons:int
    noOfDaysOfStay:int
    counter:int

    def __init__(self, name: str, roomtyp:str, extrappl:int, days:int):
        self.customerName=name
        self.typeOfRoom=roomtyp
        self.noOfExtraPersons=extrappl
        self.noOfDaysOfStay=days
    def getbillId(self):
        return self.billId
    def getCustomerName(self):
        return self.customerName
    def getTypeOfRoom(self):
        return self.typeOfRoom
    def getnoOfExtraPersons(self):
        return self.noOfExtraPersons
    def getnoOfDaysOfStay(self):
        return self.noOfDaysOfStay
    
    def validatenoOfDaysOfStay(self):
        if ((self.noOfDaysOfStay>15) or (self.noOfDaysOfStay <1)):
            print("Exception")
            raise myException.maxdays
    def validatenoOfExtraPersons(self):
        if(self.noOfExtraPersons>2):
            raise myException.personlimit
    def validatetypeOfRoom(self):
        roomtype=self.typeOfRoom.lower()
        if not(roomtype=="standard" or roomtype=="deluxe" or roomtype=="cottage"):
            raise myException.roomtype

    def calculateBill(self):
        try:
            self.validatenoOfDaysOfStay()
            self.validatenoOfExtraPersons()
            self.validatetypeOfRoom()

        except myException.maxdays:
            print("Max 2 no. of extra people are allowed")
        except myException.personlimit:
            print("Max limit of stay is exceeded")
        except myException.roomtype:
            print("Invalid Type of Room")

        else:
            roomfare=0
            roomtype=self.typeOfRoom.lower()
            if (roomtype=="standard"):
                roomfare=2500
            elif(roomtype=="deluxe"):
                roomfare=3500
            elif(roomtype=="cottage"):
                roomfare=5500
            totalbill=(self.noOfDaysOfStay*roomfare)+(self.noOfDaysOfStay*800)+(self.noOfExtraPersons*500)
            totalbill=totalbill*1.12
            return totalbill
        


class test():
    def __init__(self):
        self.getbill()
    
    def getbill(self):
        obj = Roomdetails("Test", "deluxe", 1, 14)
        ans = obj.calculateBill()
        print(ans)
        print(f"Bill ID: {obj.getbillId()}")
        print(f"Customer Name: {obj.getCustomerName()}")
        print(f"No of Days of Stay: {obj.getnoOfDaysOfStay()}")
        print(f"Total Bill: {obj.calculateBill()}")

test()
