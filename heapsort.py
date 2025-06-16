class Heap:
    def __init__(self):
        self.heap=[]
    
    def create_hip(self,list1):
        for e in list1:
            self.insert(e)
    
    
    
    def insert(self,e):
        index=len(self.heap)
        parentIndex=(index-1)//2
        while index>0 and self.heap[parentIndex]<e:
            if index==len(self.heap):
                self.heap.append(self.heap[parentIndex])
            else:
                self.heap[index]=self.heap[parentIndex]
            index=parentIndex
            parentIndex=(index-1)//2
        
            
        if index==len(self.heap):
            self.heap.append(e)
        else:
            self.heap[index]=e
    def top(self):
        if len(self.heap)==0:
            return EmptyHeadException()
        else:
            return self.heap[0]
    
    def delete(self):
        if len(self.heap)==0:
            return EmptyHeadException()
        if len(self.heap)==1:
            return self.heap.pop()
        max_value=self.heap[0]
        temp=self.heap.pop()
        index=0
        leftChildIndex=2*index+1
        rightChildIndex=2*index+2
        while leftChildIndex<len(self.heap) or rightChildIndex<len(self.heap):
            if rightChildIndex<len(self.heap):
                if self.heap[leftChildIndex]>self.heap[rightChildIndex]:
                    if self.heap[leftChildIndex]>temp:
                        self.heap[index]=self.heap[leftChildIndex]
                        index=leftChildIndex
                    else:
                        break
                else:
                    if self.heap[rightChildIndex]>temp:
                        self.heap[index]=self.heap[rightChildIndex]
                        index=rightChildIndex
                    else:
                        break
            else: #no right child
                if self.heap[leftChildIndex]>temp:
                    self.heap[index]=self.heap[leftChildIndex]
                    index=leftChildIndex
                else:
                    break
            leftchildIndex=2*index+1
            rightChildIndex=2*index+2
        self.heap[index]=temp
        return max_value
    def heapsort(self,list1):
        self.create_hip(list1)
        sorted_list=[]
        try:
            while True:
                sorted_list.insert(0,self.delete())
        except EmptyHeadException:
            pass
        return sorted_list
            
            
            
        

class EmptyHeadException(Exception):
    def __init__(self,msg="Empty Head"):
        self.msg=msg
    
    def __str__(self):
        return self.msg    
        

list1=[34,56,12,47,67,36,74,87,67]
h=Heap()
list1=h.heapsort(list1)
print(list1) 