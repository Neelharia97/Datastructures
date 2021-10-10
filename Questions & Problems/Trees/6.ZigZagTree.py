class Node:
    def __init__(self,data):
        self.data = data
        self.left = None
        self.right = None


def ZigZagTraversal(root):
    if root is None:
        return []

    s1 = [root]
    s2 = []
    values = []
    result = []

    while s1 or s2:
        while s1:
            root = s1.pop()
            values.append(root.data)
            if root.left:
                s2.append(root.left)
            if root.right:
                s2.append(root.right)
        result.append(values)
        values = []

        while s2:
            root = s2.pop()
            values.append(root.data)
            if root.right:
                s1.append(root.right)
            if root.left:
                s1.append(root.left)
        result.append(values)
        values = []
    
    return result


if __name__ == "__main__":
    root = Node(3)
    root.left = Node(9)
    root.right = Node(20)
    root.right.left = Node(15)
    root.right.right = Node(7)

    print(ZigZagTraversal(root))
