class Node:
    def __init__(self, data):
        self.left = None
        self.right = None
        self.data = data
    


def inorder(root):
    if root:
        inorder(root.left)
        print(root.data)
        inorder(root.right)


def insert(node, data):
    if node is None:
        return Node(data)
    
    if data<node.data:
        node.left = insert(node.left, data)
    
    else:
        node.right = insert(node.right, data)
    
    return node

def minValueNode(node):
    current = node
    while(current.left):
        current = current.left

    return current
    

def deleteNode(root, data):
    if root is None:
        return root

    if data<root.data:
        root.left = deleteNode(root.left, data)
    
    elif data>root.data:
        root.right = deleteNode(root.right, data)

    else:
        if root.left is None:
            temp = root.right
            root = None
            return temp
        
        if root.right is None:
            temp = root.left
            root = None
            return temp
    
        #If any node has two children
        temp = minValueNode(root.right)

        root.data = temp.data

        root.right = deleteNode(root.right, temp.data)

    return root


    
if __name__ == "__main__":
    arr = [50,30,20,40,70,60,80]
    root = None
    for i in arr:
        root = insert(root, i)
    print("Before Deletion: ")
    inorder(root)
    
    print("Deleting Node: ")
    deleteNode(root, 40)

    print("After Deletion: ")
    inorder(root)
