class Node:
    def __init__(self,data):
        self.data = data
        self.left = None
        self.right = None



def findValue(root, key):

    if root is None or root.data == key:
        return root
        
    elif root.data<key:
        return findValue(root.right, key)
        
    return findValue(root.left, key)

        


if __name__ == "__main__":
    root  = Node(8)

    root.left = Node(4)
    root.right = Node(10)

    root.left.left = Node(3)
    root.left.right = Node(5)

    root.right.left = Node(9)
    root.right.right = Node(11)


    print(findValue(root, 5))