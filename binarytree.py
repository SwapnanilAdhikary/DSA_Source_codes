class BinarytreeNode:
    def __init__(self, item=None,left=None,right=None):
        self.item = item
        self.left = left
        self.right = right

class Binarytreesearch:
    def __init__(self):
        self.root = None
        self.count = 0
    
    def insert(self, data):
        self.root=self.rinsert(self.root,data)
    
    def rinsert(self, root,data):
        if root is None:
            return BinarytreeNode(data)
        if data < root.item:
            root.left = self.rinsert(root.left, data)
        else:
            root.right = self.rinsert(root.right, data)
        return root
    def search(self,data):
        return self.rsearch(self.root, data)
    
    def rsearch(self, root, data):
        if root is None or root.item == data:
            return root 
        if data < root.item:
            return self.rsearch(root.left, data)
        return self.rsearch(root.right, data)
    def inorder(self):
        result=[]
        self.rinorder_traversal(self.root,result)
        return result
    def preorder_traversal(self):
        result=[]
        self.rpreorder_traversal(self.root,result)
        return result
    def rpreorder_traversal(self,root,result):
        if root:
            result.append(root.item)
            self.rpreorder_traversal(root.left,result)
            self.rpreorder_traversal(root.right,result)
    
    def rinorder_traversal(self, root,result):
        if root:
            self.rpreorder_traversal(root.left,result)
            result.append(root.item)
            self.rpreorder_traversal(root.right,result)
    def postorder_traversal(self):
        result=[]
        self.rpostorder_traversal(self.root,result)
        return result
    def rpostorder_traversal(self, root,result):
        if root:
            self.rpostorder_traversal(root.left,result)
            self.rpostorder_traversal(root.right,result)
            result.append(root.item)
    def minimum(self,temp):
        current=temp
        while current.left is not None:
            current=current.left
        return current.item
    def maximum(self,temp):
        current=temp
        while current.left is not None:
            current=current.left
        return current.item
    def delete(self, data):
        self.root=self.rdelete(self.root,data)
    def rdelete(self, data):
        if self.root is None:
            return None
        if data < self.root.item:
            self.root.left = self.rdelete(self.root.left, data)
        elif data > self.root.item:
            self.root.right = self.rdelete(self.root.right, data)
        else:
            if self.root.left is None:
                temp = self.root.right
                return temp
            elif self.root.right is None:
                temp = self.root.left
                return temp
            self.root.item = self.minimum(self.root.right)
            self.rdelete(self.root.right,self.root.item)
            
        return self.root.item
    def size(self):
        self.inorder()
        return len(self.inorder())

tree = Binarytreesearch()