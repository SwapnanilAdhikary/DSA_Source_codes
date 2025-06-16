from linkedlisttry import *

class Stack:
    def __init__(self):
        self.sll= Sll()
        self.size=0
    def is_empty(self):
        return self.sll.is_empty()
    def push(self,data):
        self.sll.insert_at_start(data)
        self.size+=1
    def pop(self):
        if self.sll.is_empty():
            raise IndexError("Stack is empty")
        else:
            popped_data=self.sll.start.item
            self.sll.delete_first()
            self.size-=1
            return popped_data
    def peek(self):
        if self.sll.is_empty():
            raise IndexError("Stack is empty")
        else:
            return self.sll.start.item 
    def sized(self):
        return self.size

s = Stack()

s.push(10)

s.push(20)

s.push(30)



print(s.peek())

print(s.sized())

print(s.pop())

print(s.sized())

           
    