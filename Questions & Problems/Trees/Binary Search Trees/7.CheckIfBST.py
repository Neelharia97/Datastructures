class Node:
    def __init__(self, data):
        self.data = data
        self.left = None
        self.right = None

def is_left_tree_lesser(root, data):
    if root is None:
        return True
    if root.data<=data and is_left_tree_lesser(root.left, data) and is_left_tree_lesser(root.right, data):
        return True
    return False

def is_right_tree_greater(root, data):
    if root is None:
        return True
    if root.data>data and is_right_tree_greater(root.left,data) and is_right_tree_greater(root.right, data):
        return True
    return False

def is_BST(root):
    if root is None:
        return True

    else:
        if(is_left_tree_lesser(root.left, root.data) and is_right_tree_greater(root.right, root.data) and is_BST(root.left) and is_BST(root.right)):
            return True
        return False


root = Node(4)
root.left = Node(2)
root.right = Node(5)
root.left.left = Node(1)
root.left.right = Node(3)
root.left.left.left = Node(8)

print(is_BST(root))