class Node:
    def __init__(self,data):
        self.data = data
        self.left = None
        self.right = None

def inOrder(root):
    if(root == None):
        return None
    else:
        inOrder(root.left)
        print(root.data, end = " ")
        inOrder(root.right)

def CreateNode(data):
    newNode = Node(data)
    newNode.left = None
    newNode.right = None
    return newNode

def mirrorify(root, mirror):
    if root == None:
        mirror = None
        return mirror
    
    mirror = CreateNode(root.data)
    mirror.right = mirrorify(root.left, ((mirror).right))
    mirror.left = mirrorify(root.right, ((mirror).left))
    
    return mirror

if __name__ == "__main__":
    tree = Node(1)
    tree.left = Node(2)
    tree.right = Node(3)
    tree.left.left = Node(4)
    tree.left.right = Node(5)
    tree.right.left = Node(6)
    tree.right.right = Node(7)
    mirror = None
    print(inOrder(tree))
    mirror = mirrorify(tree,mirror)
    print(inOrder(mirror))