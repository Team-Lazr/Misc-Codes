class user:
    def __init__(self,name,userName,emailId,walletBalance, billAmmount):
        self.name=name
        self.userName=userName
        self.rewardPoints  = 0.0
        self.paymentStatus = False
        self.emailId = emailId
        self.walletBalance = walletBalance
        self.billAmmount = billAmmount
    
    def getName(self):
        return self.name 
    
    def getUserName(self):
        return self.userName

    def getEmailId(self):
        return self.emailId
    
    def getWalletBalance(self):
        return self.walletBalance
    
    def getBillAmmount(self):
        return self.billAmmount
    
    def getPaymentStatus(self):
        return self.paymentStatus
    
    def makePaymentOfUser(self):
        if self.walletBalance < self.billAmmount:
            print("The Transcation was not Sucessfull as the Wallet Balance : ",self.walletBalance, " is less than the Bill Ammount : ", self.billAmmount)
        else:
            self.walletBalance = self.walletBalance - self.billAmmount
            print("Thankyou for using ePay!, Your Transaction of ammount : ",self.billAmmount," was successfull !!:)" )
            print("Your Updated Wallet Balance is  : ", self.walletBalance)
            self.paymentStatus = True
    

class PUser(user):
    def __init__(self,name,userName,emailId,walletBalance, billAmmount):
        super().__init__(name,userName,emailId,walletBalance, billAmmount)
    
    def setRewardPoints(self):
        if self.paymentStatus == True:
            self.rewardPoint = 0.1*self.billAmmount
        else:
                print("Cannot retrive the Updated Reward Points as the Transaction was not successfull !")
    
    def getRewardPoints(self):
                print("Your Current Reward Points are ",self.rewardPoint)


class validate():
    def validateID(self,ID):
        if isinstance(ID, int):
            return True
        else:
            return False

class start():
       
    def StartInputsOfUser(self,name,UserName,EmailID,WalletBalance,BillAmmount):

            self.objectOfUserClass = user(name,UserName,EmailID,WalletBalance,BillAmmount)

            self.objectOfUserClass.makePaymentOfUser()

    def StartInputsOfPUser(self,name,UserName,EmailID,WalletBalance,BillAmmount):

            self.objectOfPUserClass = PUser(name,UserName,EmailID,WalletBalance,BillAmmount)

            self.objectOfPUserClass.makePaymentOfUser()


    def printBill(self):
            print("Your Bill is as follows -> ")
            print("Customer's Name : ", self.objectOfUserClass.getName())
            print("-------------------------------------------")
            
            print(" ",self.objectOfUserClass.getName(),"'s User Name : ",self.objectOfUserClass.getUserName())
            print("-------------------------------------------")

            print(" ",self.objectOfUserClass.getName(),"'s Email ID: ",self.objectOfUserClass.getEmailId())
            print("-------------------------------------------")
            
            print(" ",self.objectOfUserClass.getName(),"'s Wallet Balance : ",self.objectOfUserClass.getWalletBalance())
            print("-------------------------------------------")

            print(" ",self.objectOfUserClass.getName(),"'s Bill Ammmount : ",self.objectOfUserClass.getBillAmmount())
            print("-------------------------------------------")
                       
            print(" ",self.objectOfUserClass.getName(),"'s Payment Status : ",self.objectOfUserClass.getPaymentStatus())
            print("-------------------------------------------") 
    
               
    def StartTheProg(self,id,name,UserName,EmailID,WalletBalance,BillAmmount):
        validateAnswer = validate().validateID(id)

        if validateAnswer == True and id == 1:
             s.StartInputsOfUser(name,UserName,EmailID,WalletBalance,BillAmmount)
             s.printBill()

        elif validateAnswer == True and id == 2:
             s.StartInputsOfPUser(name,UserName,EmailID,WalletBalance,BillAmmount)
             self.objectOfPUserClass.setRewardPoints()
             s.printBill()
             print("-------------------------------------------")

        else:
             print("Hmm.. Something Went Wrong! PLease Try again later!")

        
        



print("Hey There, Welcome to ePay !!")
id = int(input("Please Enter your ID to Start -> "))
name = input("Please Enter your Name ->")
UserName = input("Please Enter your User Name -> ")
EmailID = input("Please Enter your registered Email  ID -> ")
WalletBalance = float(input("Please Enter your Wallet Balance -> "))
BillAmmount = float(input("Please Enter the Amount you want to Send -> "))

s = start()
s.StartTheProg(id,name,UserName,EmailID,WalletBalance,BillAmmount)