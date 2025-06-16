class Stack(list):
    def is_empty(self):
        return len(self) == 0
    def push(self, item):
        self.append(item)
    def pop(self):
        if not self.is_empty():
            return super().pop()
        else:
            raise IndexError("Stack is empty")
    def peek(self):
        if not self.is_empty():
            return self[-1]
        else:
            raise IndexError("Stack is empty")
    def size(self):
        return len(self)
    def insert(self, index, value):
        raise AttributeError("No attribute 'insert' in stack")

s1=Stack()

s1.push(1)
s1.insert(1,40)
s1.push(2)
s1.push(3)

    
