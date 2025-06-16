class Stack:
    def __init__(self):
        self.items=[]
    def is_empty(self):
        return len(self.items)==0
    def push(self,item):
        self.items.append(item)
    def pop(self):
        if not self.is_empty():
            return self.items.pop()
        else:
            return None
    def peek(self):
        if not self.is_empty():
            return self.items[-1]
        else:
            return None
    def size(self):
        return len(self.items)
    
s1=Stack()
s1.push(10)
s1.push(30)
s1.push(40)
print(s1.peek())
print()