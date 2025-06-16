class node:
    def __init__(self, data=None, next=None):
        self.data = data
        self.next = next

class Stack:
    def __init__(self):
        self.start = None
        self.size = 0
    
    def is_empty(self):
        return self.start is None
    
    def push(self, data):
        new_node = node(data)
        if self.is_empty():
            self.start = new_node
            self.size += 1
        else:
            new_node.next = self.start
            self.start = new_node
            self.size += 1
    
    def pop(self):
        if self.is_empty():
            raise IndexError("Empty stack")
                             
        else:
            popped_data = self.start.data
            self.start = self.start.next
            self.size -= 1
            return popped_data
        
    
    def peek(self):
        if self.is_empty():
            raise IndexError("Empty stack")
        else:
            return self.start.data
    
    def sized(self):
        return self.size
    
s1=Stack()

s1.push(10)

s1.push(20)

s1.push(30)

print(s1.peek())
print(s1.sized())

print(s1.pop())
print(s1.sized())
    