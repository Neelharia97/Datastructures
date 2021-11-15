class Node:
    def __init__(self, data):
        self.data = data
        self.left = None
        self.right = None


def leftView(root):
    queue = [root]
    while(queue):
        for i in range(len(queue)):
            # print("i:",i, " data:", queue[0].data," len:", len(queue))
            if i == 0:
                print(queue[0].data)
            if queue[0].left:
                queue.append(queue[0].left)
            if queue[0].right:
                queue.append(queue[0].right)
            queue.remove(queue[0])

        
def leftView_recursive(root, level, max_level):
    if(root != None):
        if(max_level[0] < level):
            print(root.data)
            max_level[0] = level

        leftView_recursive(root.left, level + 1, max_level)
        leftView_recursive(root.right, level + 1, max_level)


if __name__ == "__main__":
    tree = Node(1)
    tree.left = Node(5)
    tree.right =  Node(3)
    tree.left.left =  Node(5)
    tree.left.right =  Node(6)
    tree.right.left =  Node(8)



    leftView_recursive(tree, 1, [0])


    #      5
    #    /   \
    #   6     7
    #  / \     \
    # 8   9     10
    #           /
    #          11