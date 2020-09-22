# # Python3 program to print DFS traversal
# # from a given given graph
# from collections import defaultdict


# class Graph:

#     # Constructor
#     def __init__(self):

#         # default dictionary to store graph
#         self.graph = defaultdict(list)

#     # function to add an edge to graph
#     def addEdge(self, u, v):
#         self.graph[u].append(v)

#     # A function used by DFS
#     def DFSUtil(self, v, visited):

#         # Mark the current node as visited
#         # and print it
#         visited[v] = True
#         print(v, end=' ')

#         # Recur for all the vertices
#         # adjacent to this vertex
#         for i in self.graph[v]:
#             if visited[i] == False:
#                 self.DFSUtil(i, visited)

#     # The function to do DFS traversal. It uses
#     # recursive DFSUtil()
#     def DFS(self, v):

#         # Mark all the vertices as not visited
#         visited = [False] * (max(self.graph)+1)

#         # Call the recursive helper function
#         # to print DFS traversal
#         self.DFSUtil(v, visited)

# # Driver code


# # Create a graph given
# # in the above diagram
# g = Graph()
# c = int(input("e : "))
# for i in range(0, c):
#     s = input("s: ").split(" ")
#     g.addEdge(int(s[0]), int(s[1]))

# print("Following is DFS from (starting from vertex 2)")
# g.DFS(int(input("Starting vertex: ")))


