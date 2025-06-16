import queue
from queue import deque
class Graph:
    def __init__(self,vno):
        self.graph = {v:[] for v in range(vno) }
        self.count = vno
    

    
    def add_edge(self, u, v,weight=1):
        if 0<=u<self.count and 0<=v<self.count:
            self.graph[u].append((v,weight))
            self.graph[v].append((u,weight))
        else:
            raise ValueError("Both vertices must exist in the graph")
    def remove(self, u, v):
        if 0<=u<self.count and 0<=v<self.count:
            self.graph[u] = [(vertex,weight) for vertex,weight in self.graph[u] if vertex!=v]
            self.graph[v] = [(vertex,weight) for vertex,weight in self.graph[v] if vertex!=u]
        else:
            raise ValueError("Both vertices must exist in the graph")
    def is_connected(self, u, v):
        if 0<=u<self.count and 0<=v<self.count:
            return any(vertex==v for vertex in self.graph[u])
        else:
            raise ValueError("Both vertices must exist in the graph")
        
    def print(self):
        for vertex,n in self.graph.items():
            print("V",vertex,":",n)
    
    def breadth_first_search(self, start, end):
        q=queue(self.graph)
        visited=set()
        q=deque([start])
        visited_order=[]
        while queue:
            node=queue.popleft()
            if node not in visited:
                visited.add(node)
                visited_order.append(node)
                if node==end:
                    return visited_order
                for neighbor, weight in self.graph[node]:
                    queue.append(neighbor)
        return visited_order
        
            

g = Graph(5)



g.add_edge(1,2)

g.add_edge(1,3)

g.add_edge(2,4)

g.add_edge(3,4)

g.print()

g.breadth_first_search(1,5)