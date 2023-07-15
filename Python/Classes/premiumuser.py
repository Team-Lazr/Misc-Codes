class user:
	id:int
	userName:str
	emailId:str
	walletBalance:float
	
	def __init__(self,id,userName,emailId,walletBalance):
		self.setID(id)
		self.setUserName(userName)
		self.setEmailId(emailId)
		self.setWalletBalance(walletBalance)
	
	def makePayment(self,billAmount):
		if(self.getWalletBalance()>billAmount):
			self.setWalletBalance(self.getWalletBalance()-billAmount)
			return True
		else : 
			return False
	def getId(self):
		return self.id
	
	def setID(self,id):
		self.id=id

	def getUserName(self):
		return self.userName

	def setUserName(self,userName):
		self.userName=userName

	def getEmailId(self):
		return self.emailId

	def setEmailId(self,emailId):
		self.emailId=emailId

	def getWalletBalance(self):
		return self.walletBalance

	def setWalletBalance(self,walletBalance):
		self.walletBalance=walletBalance

class PremiumUser(user):
	rewardPoints:int

	def __init__(self,id,userName,emailId,walletBalance):
		self.setID(id)
		self.setUserName(userName)
		self.setEmailId(emailId)
		self.setWalletBalance(walletBalance)
		self.rewardPoints=0

	def makePayment(self,billAmount):
		if(self.getWalletBalance()>billAmount):
			newBal = self.getWalletBalance() - billAmount
			self.setWalletBalance(newBal)
			self.setRewardPoints((self.getRewardPoints()+(0.1*billAmount)))
			return True
		else: 
			return False
	def getRewardPoints(self):
		return self.rewardPoints
	def setRewardPoints(self,rewardPoins):
		self.rewardPoints=rewardPoins


if __name__ == "__main__":
	def processPayment(classobj,billamount):
		if(classobj.makePayment(billamount)):
			print(f"Congratulations {classobj.getUserName()}, Payment of Rs. {billamount} Successfull")
		else:
			print(f"Sorry! {classobj.getUserName()}, you do not have enough balance to pay the bill")
		print(f"Your wallet balance is Rs. {classobj.getWalletBalance()}")
		
		if(isinstance(classobj,PremiumUser)):
			print(f"You have {classobj.getRewardPoints()} point!")


	userobj=user(101,"Joe","joe@abc.com",100)
	PremiumUserobj=PremiumUser(201,"Jill","jill@abc.com",300)

	processPayment(userobj,70)
	processPayment(PremiumUserobj,150)
	processPayment(PremiumUserobj,80)
	processPayment(PremiumUserobj,120)