class Node:
    def __init__(self,data):
        self.data = data
        self.left = None
        self.right = None

def level_order_traversal(root):
    queue = [root]
    output = []
    while queue:
        output.append(queue[0].data)
        if queue[0].left:
            queue.append(queue[0].left)
        if queue[0].right:
            queue.append(queue[0].right)
        queue.remove(queue[0])
    return output

tree = Node(1)
tree.left = Node(5)
tree.right = Node(3)
tree.left.left =  Node(5)
tree.left.right =  Node(6)
tree.right.left =  Node(8)

print(level_order_traversal(tree))