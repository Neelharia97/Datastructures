class Node:
    def __init__(self, data):
        self.data = data
        self.left = None
        self.right = None
    

def rightView(rootNode):
    queue = [rootNode]
    nextLevel = []
    res = []

    while queue and rootNode is not None:
        for node in queue:            
            if node.left:
                nextLevel.append(node.left)
            if node.right:
                nextLevel.append(node.right)
        res.append(node.data)
        queue = nextLevel
        nextLevel = []
    return res


if __name__ == "__main__":
    node = Node(5)
    node.left = Node(6)
    node.right = Node(7)
    node.left.left = Node(8)
    node.left.right = Node(9)
    node.right.right = Node(10)
    node.left.left.left = Node(11)

    print(rightView(node))
