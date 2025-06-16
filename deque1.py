class deque:
    def __init__(self):
        self.items = []
    
    def is_empty(self):
        return len(self.items) == 0
    
    def add_front(self, item):
        self.items.insert(0, item)
    
    def add_rear(self, item):
        self.items.append(item)
    
    def remove_front(self):
        if not self.is_empty():
            self.items.pop(0)
        else:
            return None
    
    def remove_rear(self):
        if not self.is_empty():
            self.items.pop()
        else:
            return None
    
    def get_front(self):
        return self.items[0]
    
    def get_rear(self):
        return self.items[-1]
    
    def size(self):
        return len(self.items)

d = deque()

d.add_front('A')

d.add_rear('B')

d.add_rear('C')

print(d.get_front())  # Output: A

print(d.get_rear())  # Output: C

print(d.remove_front())  # Output: A

print(d.remove_rear())  # Output: C

print(d.size())  # Output: 0
print(d.get_front()) # Output: