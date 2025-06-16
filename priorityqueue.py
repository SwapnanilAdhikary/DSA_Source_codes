class PriorityQueue:
    def __init__(self):
        self.queue = []
        
    
    def is_empty(self):
        return len(self.queue)==0

    def push(self,data,priority):
        index=0
        while index < len(self.queue) and self.queue[index][1] <=  priority:
            index+=1
        self.queue.insert(index, (data, priority))
        
    
    def pop(self):
        if not self.is_empty():
            return self.queue.pop(0)[0]
        else:
            raise IndexError("Priority queue is empty")
    
    def size(self):
        return len(self.queue)

pq = PriorityQueue()

pq.push('A',3)

pq.push('B',5)

pq.push('C',4)

while not pq.is_empty():
    print(pq.pop())


