class Node:
    def __init__(self,data):
        self.data = data
        self.left = None
        self.right = None

def checkBalanced(root,flag):
    if root == None:
        return 0
    
    l = checkBalanced(root.left,flag)
    r = checkBalanced(root.right,flag)

    if abs(l-r)>1:
        flag = False
    print(flag)
    return 1+max(l,r)



if __name__ == "__main__":
    root = Node(5)
    root.left = Node(6)
    root.right = Node(7)
    root.left.left = Node(8)
    root.left.right = Node(9)
    root.right.right = Node(10)
    root.left.right.left = Node(13)
    root.right.right.left = Node(11)

    print(checkBalanced(root, True))