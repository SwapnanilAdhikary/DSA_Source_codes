class node:
    def __init__(self, prev=None,item=None, next=None):
        self.prev = prev
        self.item = item
        self.next = next
class Dll:
    def __init__(self,start):
        self.start = start
    
    def is_empty(self):
        if self.start is None:  return False
    
    def delete_first(self):
        if self.is_empty():
            pass
        elif self.start:
            self.start = self.start.next
            if self.start:
                self.start.prev = None
    
    def delete_last(self):
        if self.is_empty():
            pass
        elif self.start.next is None:
            self.start = None
        else:
            last_node = self.start
            while last_node.next:
                last_node = last_node.next
            last_node.prev.next = None
    
    def delete_item(self,data):
        if self.is_empty():
            pass
        elif self.start.item == data:
            self.start = self.start.next
            if self.start:
                self.start.prev = None
        else:
            temp=self.start
            while temp:
                if temp.item==data:
                    if temp.next:
                        temp.prev.next=temp.prev
                    elif temp.prev:
                        temp.prev.next=temp.next
                    else:
                        self.start=temp.next
                        break
                temp=temp.next
    
                                