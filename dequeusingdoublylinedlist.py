class node:
    def __init__(self, data=None,prev=None, next=None):
        self.data = data
        self.prev = prev
        self.next = next
    
class deque:
    def __init__(self):
        self.front = None
        self.rear = None
        self.size = 0
    
    def is_empty(self):
        return self.front is None
    
    def add_front(self, data):
        new_node=node(data)
        if self.is_empty():
            self.front=new_node
            self.rear=new_node
        else:
            new_node.next=self.front
            self.front.prev=new_node
            self.front=new_node
            new_node.prev=self.rear
            self.rear.next=new_node
        self.size+=1
    
    def add_rear(self, data):
        new_node=node(data)
        if self.is_empty():
            self.front=new_node
            self.rear=new_node
        else:
            self.rear.next=new_node
            new_node.prev=self.rear
            self.rear=new_node
            new_node.next=self.front
            self.front.prev=new_node
        self.size+=1
    
    def remove_front(self):
        if self.is_empty():
            raise IndexError("Empty deque")
        else:
            self.front=self.front.next
            self.front.prev=self.rear
            if self.is_empty():
                self.rear=None
                self.front=None
        self.size-=1
    
    def remove_rear(self):
        if self.is_empty():
            raise IndexError("Empty deque")
        else:
            self.rear=self.rear.prev
            self.rear.next=self.front
            if self.is_empty():
                self.rear=None
                self.front=None
        self.size-=1
    
    def get_front(self):
        if self.is_empty():
            raise IndexError("Empty deque")
        else:
            return self.front.data
    
    def get_rear(self):
        if self.is_empty():
            raise IndexError("Empty deque")
        else:
            return self.rear.data
    
    def get_size(self):
        return self.size
    
 
    
# testing the deque class

d = deque()
d.add_front(1)
d.add_front(2)
d.add_rear(3)
d.add_rear(4)
print(d.get_front())
print(d.get_rear())
print(d.get_size())
d.remove_front()
print(d.get_front())
print(d.get_size())