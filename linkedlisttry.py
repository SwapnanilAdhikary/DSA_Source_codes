class node:
    def __init__(self, item=None,next=None):
        self.item=item
        self.next=next
class Sll:
    def __init__(self,start=None):
        self.start=start
    def is_empty(self):
        return self.start==None
    def insert_at_start(self,data):
        n=node(data,self.start) 
        self.start=n
    def insert_at_end(self,data):
        n=node(data,None) 
        if not self.is_empty():
            temp=self.start
            while temp.next:
                temp=temp.next
            temp.next=n
        else:
            self.start=n 
    def search(self,data):
        temp=self.start
        while temp:
            if temp.item==data:
                return temp
            temp=temp.next
        return None
    def inset_after(self,temp,data):
        if temp:
            n=node(data,temp.next)
            temp.next=n
    def print_list(self):
        temp=self.start
        while temp:
            print(temp.item,end=' ')
            temp=temp.next
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
    def delete_item(self,data):
        if self.start is None:
            pass
        elif self.start.next is None:
            if self.start.item == data:
                self.start = None
            else:
                print("Element not found")  
        else:
            temp = self.start
            if temp.item == data:
                self.start=temp.next
            else:
                while temp.next:
                    if temp.next.item == data:
                        temp.next = temp.next.next
                        break
                    temp = temp.next
    def __iter__(self):
        return SllIterable(self.start)
class SllIterable:
    def __init__(self, start=None):
        self.current=start
    def __iter__(self):
        return self
    def __next__(self):
        if not self.current:
            raise StopIteration
        data=self.current.next
        self.current=self.current.next
        return data                    
#mylist=Sll()
#mylist.insert_at_start(20)
#mylist.insert_at_end(28)
#mylist.insert_at_start(30)
#mylist.inset_after(mylist.search(20),25)
#mylist.delete_item(30)
#mylist.print_list()
#print()
#for x in mylist:
#    print(x,end='')

#print()
        
                