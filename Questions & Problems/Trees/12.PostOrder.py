class Node:
    def __init__(self, data):
        self.data = data
        self.left = None
        self.right = None
    
def post_order(root):
    if root is None:
        return None

    post_order(root.left)
    post_order(root.right)
    print(root.data, " ")


tree = Node(1)
tree.left = Node(5)
tree.right =  Node(3)
tree.left.left =  Node(5)
tree.left.right =  Node(6)
tree.right.left =  Node(8)

post_order(tree)