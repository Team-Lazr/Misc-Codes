class animal:
    x=10
    def test(self):
        print("Class Animal")
class tiger(animal):
    def test2(self):
        print(f"X = {self.x}")

A=animal()
A.test()
print(type(A))
print(isinstance(A,animal))

T=tiger()
T.test2()