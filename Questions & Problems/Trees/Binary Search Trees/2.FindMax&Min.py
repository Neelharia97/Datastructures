class Node:
    def __init__(self, data):
        self.data = data
        self.left = None
        self.right = None

def findMin(root):
    if root is None:
        return root
    if root.left:
        key = root.data
        findMin(root.left)
    return key


def findMax(root,key):
    if root is None:
        return root
    if root.right:
        key = root.data
        findMin(root.right)
    return key


if __name__ == "__main__":
    root  = Node(8)

    root.left = Node(4)
    root.right = Node(10)

    root.left.left = Node(3)
    root.left.right = Node(5)

    root.right.left = Node(9)
    root.right.right = Node(11)


    print(findMax(root,root.data))
    print(findMin(root,root.data))