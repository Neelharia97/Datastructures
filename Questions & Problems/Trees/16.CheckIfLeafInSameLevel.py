class Node:
    def __init__(self, data):
        self.data = data
        self.left = None
        self.right = None

def print_results(map_):
    flag_level = -1
    for i in map_:
        if flag_level == -1:
            flag_level = map_[i]
        else:
            if map_[i] != flag_level:
                return False
    return True


def if_leaf_at_same_level(root, level, map_):
    if root is None:
        return False
    if root.left is None and root.right is None:
        map_[root.data] = level
    
    if_leaf_at_same_level(root.left, level+1, map_)
    if_leaf_at_same_level(root.right, level+1, map_)

if __name__ == "__main__":
    tree = Node(27)
    tree.left = Node(5)
    tree.right =  Node(3)
    tree.left.left =  Node(5)
    tree.left.right =  Node(6)
    tree.right.left =  Node(8)

    map_ ={}
    if_leaf_at_same_level(tree, 0, map_)
    print(print_results(map_))