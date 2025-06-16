class Node:
    def __init__(self, item=None,next=None):
        self.item = item
        self.next = next
class Queue:
    def __init__(self):
        self.front = None
        self.rear = None
        self.count=0
    
    def is_empty(self):
        return self.count==0 
    
    def enqueue(self, data):
        new_node = Node(data)
        if self.is_empty():
            self.front = new_node
            self.rear = new_node
        else:
            self.rear.next=new_node
        self.rear = new_node
        self.count += 1
    def dequeue(self):
        if self.is_empty:
            raise IndexError("Empty queue")
        elif self.front == self.rear:
            self.front=None
            self.rear = None
        else:
            self.front = self.front.next
        self.count -= 1
    
    def get_front(self):
        if self.is_empty():
            raise IndexError("Empty queue")
        return self.front.item 
    
    def get_rear(self):
        if self.is_empty():
            raise IndexError("Empty queue")
        return self.rear.item
    
    def size(self):
        return self.count        
            
q=Queue() 
q.enqueue(10)
q.enqueue(20)
q.enqueue(30)
q.enqueue(40)

print(q.get_front())
print(q.size())
print(q.get_rear())
q.dequeue()
print(q.size())
print(q.get_front(),q.get_rear())       