class Node:
    def __init__(self, item=None , next=None):
        self.item = item
        self.next = next
    
class Sll:
    def __init__(self,start):
        self.start = start
    
    def is_empty(self):
        return self.start is None
    
    def insert_at_start(self,data):
        new_node = Node(data, self.start)
        
        self.start = new_node
    
    def insert_at_end(self,data):
        new_node = Node(data, None)
        if not self.is_empty:
            temp=self.start
            while temp.next:
                temp = temp.next
            temp.next = new_node
        else:
            self.start = new_node
    def search(self,data):
        temp=self.start
        while temp:
            if temp.item==data:
                return temp
            temp=temp.next
        return None
    def insert(self,temp,data):
        if temp:
            new_node = Node(data, temp.next)
            temp.next = new_node
    
    def delete_first(self):
        if self.start:
            self.start = self.start.next
    
    def delete_last(self):
        if self.start is None:
            pass
        elif self.start.next is None:
            self.start = None
        else:
            temp = self.start
            while temp.next.next:
                temp = temp.next
            temp.next = None
            
    
    def delete_node(self, data):
        if self.start is None:
            pass
        elif self.start.next is None:
            if self.start == data:
                self.start = None
            else:
                print("Node not found")
        else:
            temp=self.start
            if temp.item == data:
                self.start = temp.next
            else:
                while temp.next:
                    if temp.next.item==data:
                        temp.next = temp.next.next
                        break
                    temp=temp.next
            
            