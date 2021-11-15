class Node:
    def __init__(self, data):
        self.data = data
        self.left = None
        self.right = None

def sum_(root):
    if root == None:
        return 0
    return sum_(root.left)+root.data+sum_(root.right)

def sum_tree(root):
    a = 1
    if root is None:
        return 0
    if root.left is None and root.right is None:
        return root.data
    if a == 0:
        return 0
    left_ = sum_(root.left)
    right_ = sum_(root.right)
    if left_ + right_ != root.data:
        a = 0
    return  left_+right_, a

    

if __name__ == "__main__":
    tree = Node(27)
    tree.left = Node(5)
    tree.right =  Node(3)
    tree.left.left =  Node(5)
    tree.left.right =  Node(6)
    tree.right.left =  Node(8)

    print(sum_tree(tree))

