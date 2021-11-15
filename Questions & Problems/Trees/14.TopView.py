class Node:
    def __init__(self, data):
        self.data = data
        self.left = None
        self.right = None
    
def topView_recursive(root,level, dist, map):
    
    if root is None:
        return
    else:
        if dist not in map or map[dist][1]>level:
            map[dist] = [root.data, level]
        
        topView_recursive(root.left, level+1, dist-1, map)
        topView_recursive(root.right, level+1, dist+1, map)

def print_(map):
    for i in map:
        print(map[i][0])
       


if __name__ == "__main__":
    tree = Node(1)
    tree.left = Node(5)
    tree.right =  Node(3)
    tree.left.left =  Node(5)
    tree.left.right =  Node(6)
    tree.right.left =  Node(8)
    map = {}
    topView_recursive(tree, 0,0,map)
    print_(map)