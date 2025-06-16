class Employee:
    def __init__(self, name=None, age=None, empid=None,salary=None):
        self.name = name
        self.age=age
        self.empid = empid
        self.salary = salary
    def setEmpid(self, empid):
        self.empid = empid
    def setName(self, name):
        self.name = name
    def setAge(self, age):
        self.age = age
    def setSalary(self, salary):
        self.salary = salary
    def getEmpid(self):
        return self.empid
    def getName(self):
        return self.name
    def getAge(self):
        return self.age
    def getSalary(self):
        return self.salary
    
e1=Employee()
e2=Employee('Sagnik',21,'E014',20000)
e1.setName('Sayan')
e1.setAge(21)
e1.setSalary(19000)
e1.setEmpid('E015')
print(e1.getName(),e1.getAge(),e1.getSalary())
print(e2.getName(),e2.getAge(),e2.getSalary())    
        