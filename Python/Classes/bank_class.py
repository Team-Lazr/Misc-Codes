# A bank wants to conduct examination for recruitment. You need to develop an application for the banks to submit their detials by implementing the classes based on the class diagram and description given

class bank():
    global valobj
    name=""
    jobProfile=""
    age=0

    # def func(self):
    #     print('Hello')
    #     valobj=validate()
    #     valobj.getName()

    def getName(self):
        return input("Enter your Name : ")
    def setName(self,apnaNaam):
        validate().validateName(apnaNaam)
        self.name=apnaNaam
        print(self.name)
    def getJobProfile(self):
        return input("Enter your Job Profile : ")
    def setJobProfile(self,apnaJobProfile):
        validate().validateJobProfile(apnaJobProfile)
        self.jobProfile=apnaJobProfile
        print(self.jobProfile)
    def getAge(self):
        return int(input("Enter your Age : "))
    def setAge(self,apnaAge):
        validate().validateAge(apnaAge)
        self.age=apnaAge
        print(self.age)

class validate(bank):
    def validateName(self,name):
        try:
            if (name==""):
                raise InvalidNameException
            else:
                return True
        except InvalidNameException:
            print("Invalid Name")
            exit()
        
    def validateJobProfile(self,jobprofile):
        try:
            jobprofile=jobprofile.lower()
            if (jobprofile == "associate" or jobprofile == "clerk" or jobprofile == "executive" or jobprofile == "officer"):
                return True
            else:
                raise InvalidJobProfileException
        except InvalidJobProfileException:
            print("Invalid Job Profile")
            exit()
    
    def validateAge(self,age):
        try:
            if (age>=18 and age<=30):
                return True
            else:
                raise InvalidAgeException
        except InvalidAgeException:
            print("Invalid Age")
            exit()

class InvalidNameException(Exception):
    pass
class InvalidJobProfileException(Exception):
    pass
class InvalidAgeException(Exception):
    pass

if __name__ == "__main__":
    obj=bank()
    a=obj.getName()
    obj.setName(a)
    b=obj.getJobProfile()
    obj.setJobProfile(b)
    c=obj.getAge()
    obj.setAge(c)
    # obj.func()
