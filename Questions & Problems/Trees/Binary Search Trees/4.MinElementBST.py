class Node:
    def __init__(self,data):
        self.data = data
        self.left = None
        self.right = None



def insert(node, data):
    if node is None:
        return Node(data)

    
    else:   
        if data<=node.data:
            node.left = insert(node.left, data) 
        else:
            node.right = insert(node.right, data)

        return node

def inorder(node):
    if node:
        inorder(node.left)
        print(node.data)
        inorder(node.right)

def minValue(node):
    current = node
    while(current.left):
            current = current.left
    return current.data


if __name__ == "__main__":
    a = [4,5,6,4,5,2,1,7,6,3]
    root = None
    for i in a:
        root = insert(root, i)
    print("Inorder: ")
    inorder(root)

    print("Min Value: ")
    print(minValue(root))


