class Node:
    def __init__(self, data):
        self.data = data
        self.left = None
        self.right = None
    

def rightView_recursive(root, max_level, level):
    if root != None:
        if max_level[0]<level:
            print(root.data)
            max_level[0] = level
        
        rightView_recursive(root.right, max_level, level+1)
        rightView_recursive(root.left, max_level, level+1)

if __name__ == "__main__":
    tree = Node(1)
    tree.left = Node(5)
    tree.right =  Node(3)
    tree.left.left =  Node(5)
    tree.left.right =  Node(6)
    tree.right.left =  Node(8)

    rightView_recursive(tree, [0], 1)
