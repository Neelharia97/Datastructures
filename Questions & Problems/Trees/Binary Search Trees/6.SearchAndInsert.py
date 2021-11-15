class Node:
    def __init__(self, data):
        self.data = data
        self.left  = None
        self.right = None

def insert(root, key):
    if root is None:
        return Node(key)
    
    else:
        if root.data == key:
            return root
        elif root.data>key:
            root.left = insert(root.left, key)
        else:
            root.right = insert(root.right, key)
    return root

def inorder(root):
    if root:
        inorder(root.left)
        print(root.data)
        inorder(root.right)

def search(root,key):
    if root is None:
        return root
    if root.data == key:
        return True
    elif root.data<key:
        return search(root.right, key)
    else:
        return search(root.left, key)
    
if __name__ == "__main__":
    root = Node(50)
    root = insert(root, 30)
    root = insert(root, 20)
    root = insert(root, 40)
    root = insert(root, 70)
    root = insert(root, 60)
    root = insert(root, 80)

    inorder(root)
    print(search(root, 30))