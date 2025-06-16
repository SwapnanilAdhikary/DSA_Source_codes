class graph:
    def __init__(self,vno):
        self.vertex_count =vno
        self.adj_matrix=[ [0]*vno for e in range(vno)]
    
    def add_edge(self,v,w,weight=1):
        if 0<=v<self.vertex_count and 0<=w<self.vertex_count:
            self.adj_matrix[v][w] = weight
            self.adj_matrix[w][v] = weight
        else:
            print("Invalid vertex")
    
    def remove_edge(self,v,w,weight=1):
        if 0<=v<self.vertex_count and 0<=w<self.vertex_count:
            self.adj_matrix[v][w] = 0
            self.adj_matrix[w][v] = 0
        else:
            print("Invalid vertex")
    
    def has_edge(self,v,w,weight=1):
        if 0<=v<self.vertex_count and 0<=w<self.vertex_count:
            return self.adj_matrix[v][w]!=0
        else:
            print("Invalid vertex")
    
    def display(self):
        for i in self.adj_matrix:
            print(" ".join(map(str,i)))
            
g=graph(5)
g.add_edge(0,1)
g.add_edge(1,2)
g.add_edge(1,3)
g.add_edge(2,3)
g.add_edge(3,4)

g.display()




    