class Node:
    def __init__(self, data):
        self.data = data
        self.left = None
        self.right = None

def pre_order(root):
    if root is None:
        return False
    
    print(root.data, " ")
    pre_order(root.left)
    pre_order(root.right)


tree = Node(1)
tree.left = Node(5)
tree.right =  Node(3)
tree.left.left =  Node(5)
tree.left.right =  Node(6)
tree.right.left =  Node(8)

pre_order(tree)
