class Queue:
    def __init__(self):
        self.queue = []
    
    def is_empty(self):
        return len(self.queue) == 0
    
    def enqueue(self,data):
        self.queue.append(data)
    
    def dequeue(self):
        self.queue.pop(0)
    
    def front(self):
        if not self.is_empty():
            return self.queue[0]
        else:
            return None
    
    def rear(self):
        if not self.is_empty():
            return self.queue[-1]
        else:
            return None
    
    def size(self):
        return len(self.queue)

q=Queue()
q.enqueue(5)
q.enqueue(10)
q.enqueue(60)
print(q)
print(q.front())
print(q.rear())
print(q.size())