class Node:
    def __init__(self,item=None,next=None):
        self.item=item
        self.next=next

class Cll:
    
    def __init__(self,last=None):
        self.last=last
    
    def is_empty(self):
        return self.last==None
    
    def insert_at_start(self,data):
        new_node=Node(data,self.last)
        if self.is_empty():
            new_node.next=new_node
            self.last=new_node
        else:
            new_node.next=self.last.next
            self.last.next=new_node
        
            
    def insert_at_end(self,data):
        new_node=Node(data,None)
        if self.is_empty():
            new_node.next=new_node
            self.last=new_node
        else:
            new_node.next=self.last.next
            self.last.next=new_node
            self.last=new_node
    
    def search(self,data):
        if self.is_empty():
            return None
        temp=self.last.next
        while temp!=self.last:
            if temp.item==data:
                return temp
            temp=temp.next
        if temp.item==data:
            return temp
        return None
    
    def insert_after(self,temp,data):
        if temp:
            new_node=Node(data,temp.next)
            temp.next=new_node
            if temp==self.last:
                self.last=new_node
    
    def print_list(self):
        if not self.is_empty():
            temp=self.last.next
            while temp!=self.last:
                print(temp.item,end=' ')
                temp=temp.next
            print(temp.item)
    
    def delete_first(self):
        if not self.is_empty():
            
            if self.last.next==self.last:
                self.last=None
            else:
                self.last.next=self.last.next.next
                
    def delete_last(self):
        if not self.is_empty():
            temp=self.last.next
            while temp.next!=self.last:
                temp=temp.next
            temp.next=self.last.next
            self.last=temp
    
    def delete_node(self,data):
        if self.is_empty():
            pass
        temp=self.last.next
        if temp.item==data:
            self.last.next=temp.next
            if temp==self.last:
                self.last=None
        else:
            while temp.next!=self.last:
                if temp.next.item==data:
                    temp.next=temp.next.next
                    
                temp=temp.next
            if temp.next.item==data:
                temp.next=temp.next.next
                if temp.next==None:
                    self.last=temp
    def __iter__(self):
        if self.last==None:
            return cllIterator(None)
        else:
            return cllIterator(self.last.next)
class cllIterator:
    def __init__(self, start):
        self.current=start
        self.start=start
        self.count=0
    def __iter__(self):
        return self
    def __next__(self):
        if not self.current:
            raise StopIteration
        if self.current==self.start:
            raise StopIteration
        else:
            self.count=1
        data=self.current.item
        self.current=self.current.next
        return data


mylist=Cll()

mylist.insert_at_start(20)

mylist.insert_at_start(30)

mylist.insert_at_start(40)

mylist.insert_after(mylist.search(30),50)

for x in mylist:
    print(x,end=' ')

print()
mylist.print_list()