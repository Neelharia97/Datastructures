class Node:
    def __init__(self, data):
        self.data = data
        self.next = None

class LinkedList:
    def __init__(self):
        self.head = None
    
    def end_push(self, data):
        new_node  = Node(data)
        if self.head == None:
            self.head = new_node
        else:
            temp = self.head
            while(temp.next):
                temp =temp.next
            temp.next = new_node


def find_common_intersection_point(node1, node2):
    # dummy = Node(0)
    while(node1 != None and node2 != None):
        if node1.next == node2.next:
            return node1.data
        else:
            node1 = node1.next
            node2 = node2.next

ll = LinkedList()
a = [1,2,3]