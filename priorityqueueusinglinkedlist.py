class node:
    def __init__(self,item=None,priority=None,next=None):
        self.item = item
        self.priority = priority
        self.next = next

class PriorityQueue:
    def __init__(self):
        self.head = None
        self.size = 0
    
    def is_empty(self):
        return self.head is None
    
    def push(self,data,priority):
        new_node = node(data, priority)
        if self.is_empty() or priority < self.head.priority:
            new_node.next = self.head
            self.head = new_node
        else:
            current = self.head
            while current.next and current.next.priority <= priority:
                current = current.next
            new_node.next = current.next
            current.next = new_node
        self.size += 1
    
    def pop(self):
        if self.is_empty():
            raise IndexError("Empty priority queue")
        data=self.head.item
        self.head=self.head.next
        self.size -= 1
        return data
    def count(self):
        return self.size

p=PriorityQueue()
p.push('A',5)
p.push('B',4)
p.push('C',2)       
while not p.is_empty():
    print(p.pop())