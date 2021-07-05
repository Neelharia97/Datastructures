class Node:
    def __init__(self,data):
        self.data = data
        self.left = None
        self.right = None

def TreeHeight(root):
    if root == None:
        return 0
    if root:
        left = TreeHeight(root.left)
        right = TreeHeight(root.right)

        if(left>right):
            return left+1
        else:
            return right+1

if __name__ == "__main__":
    root_ = Node(1)
    root_.left = Node(2)
    root_.right = Node(3)
    root_.left.left = Node(4)
    root_.left.right = Node(5)

    print(TreeHeight(root_))