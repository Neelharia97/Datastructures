class Node:
    def __init__(self,data):
        self.data  = data
        self.next = None
    

    
def append(head_ref, data):
    new_node = Node(data)
    new_node.next = (head_ref);
    (head_ref) = new_node
    return head_ref

def printList(node):
    while(node):
        print(node.data)
        node = node.next



# def findIntersection(self, new_node1, new_node2):

if __name__  == "__main__":
    a = None
    a = append(a, 5)
    a = append(a, 6)
    a = append(a, 7)

    printList(a)
