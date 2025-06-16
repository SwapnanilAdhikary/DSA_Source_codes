from linkedlisttry import*

class Stack(Sll):
    def __init__(self):
        super().__init__(None)
        self.size=0
    
    def push(self, data):
        self.insert_at_start(data)
        self.size+=1
    
    def pop(self):
        if self.is_empty():
            raise IndexError("Stack is empty")
        else:
            popped_data = self.start.item
            self.start = self.start.next
            self.size -= 1
            return popped_data
    def is_empty(self):
        return super().is_empty()
    
    def peek(self):
        if self.is_empty():
            raise IndexError("Stack is empty")
        else:
            return self.start.item
    
    def get_size(self):
        return self.size

s=Stack()

s.push(10)

s.push(20)

s.push(30)

print(s.peek())

print(s.get_size())

print(s.pop())

print(s.get_size())