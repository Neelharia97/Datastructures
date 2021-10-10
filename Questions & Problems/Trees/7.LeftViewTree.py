class Node:
    def __init__(self, data):
        self.data = data
        self.left = None
        self.right = None


def leftView(root):
    queue = [root]
    while(queue):
        for i in range(len(queue)):
            if i == 0:
                print(queue[0].data)
            if queue[0].left:
                queue.append(queue[0].left)
            if queue[0].right:
                queue.append(queue[0].right)
            queue.remove(queue[0])
        

    


    
   


if __name__ == "__main__":
    root = Node(5)
    root.left = Node(6)
    root.right = Node(7)
    root.left.left = Node(8)
    root.left.right = Node(9)

    root.right.right = Node(10)
    root.right.right.left = Node(11)

    leftView(root)


    #      5
    #    /   \
    #   6     7
    #  / \     \
    # 8   9     10
    #           /
    #          11