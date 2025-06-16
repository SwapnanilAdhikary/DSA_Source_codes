class Test:
    def __init__(self,a,b):#self is a class object variable , a and b are local variables
        self.a=a #self.a is instance variable
        self.b=b #self.b is instance variable

t1=Test(3,4)
t2=Test(5,6)
print(t1.a,t2.a,t1.b,t2.b)