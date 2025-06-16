class Node:
    def __init__(self,prev=None, item=None, next=None):
        self.prev = prev
        self.item = item
        self.next = next

class Dll:
    def __init__(self,start=None):
        self.start = start
    
    def is_empty(self):
        return self.start is None
    
    def insert_at_start(self, data):
        new_node = Node(prev=None, item=data, next=self.start)
        if self.start is not None:
            self.start.prev = new_node
        self.start = new_node
    
    def insert_at_end(self, data):
        new_node = Node(prev=None, item=data, next=None)
        if self.is_empty():
            self.start = new_node
        else:
            temp = self.start
            while temp.next is not None:
                temp = temp.next
            temp.next = new_node
            new_node.prev = temp
    def search(self,data):
        temp = self.start
        while temp is not None:
            if temp.item == data:
                return temp
            temp = temp.next
        return None
    def insert_after(self,temp,data):
        if temp:
            new_node = Node(prev=temp, item=data, next=temp.next)
            if temp.next is not None:
                temp.next.prev = new_node
            temp.next = new_node
    def delete_first(self):
        if self.start is not None:
            self.start = self.start.next
            if self.start is not None:
                self.start.prev = None
    
    def print_list(self):
        temp=self.start
        while temp:
            print(temp.item,end=' ')
            temp=temp.next
    def delete_last(self):
        if self.is_empty():
            pass
        elif self.start.next is None:
            self.start = None
            return
        else:
            temp = self.start
            while temp.next is not None:
                temp = temp.next
            temp.next = None
    def delete_item(self,data):
        if self.is_empty():
            pass
        else:
            temp = self.start
            while temp is not None:
                if temp.item == data:
                    if temp.next is not None:
                        temp.next.prev=temp.prev
                    if temp.prev is not None:
                        temp.prev.next = temp.next
                    else:
                        self.start = temp.next
                        break
                temp = temp.next
    def __iter__(self):
        return DllIterator(self.start)
class DllIterator:
    def __init__(self, start=None):
        self.current = start
    def __iter__(self):
        return self
    def __next__(self):
        if self.current is None:
            raise StopIteration
        data = self.current.item
        self.current = self.current.next
        return data

dll = Dll()

dll.insert_at_start(20)

dll.insert_at_end(30)

dll.insert_at_end(40)

dll.insert_after(dll.search(30), 50)
for x in dll:
    print(x, end=' ')
print()
