class Node:
    def __init__(self, data):
        self.data = data
        self.next = None
    
class linked_list:
    def __init__(self):
        self.head = None
    
    def end_push(self, data):
        new_node = Node(data)
        if self.head == None:
            self.head = new_node
        else:
            temp = self.head
            while(temp.next):
                temp = temp.next
            temp.next = new_node
    
    def return_head(self):
        return self.head

def print_list(node):
    while(node):
        print(node.data, "->")
        node = node.next

def find_intersection(node1, node2):
    dummy = Node(0)
    temp = dummy
    while(node1 != None and node2 != None):
        # if node1 == None or node2 == None:
        #     return False    
        if node1.data<node2.data:
            node1 = node1.next
        elif node1.data>node2.data:
            node2 = node2.next
        elif node1.data == node2.data:
            var = node1.data
            dummy.next = Node(var)
            dummy = dummy.next
            node1 = node1.next
            node2 = node2.next
    return temp.next


ll =linked_list()
ll_=linked_list()
a = [1,2,3,4,5,6,7]
b = [1,2,3,6,7]
for i in a:
    ll.end_push(i)
for j in b:
    ll_.end_push(j)

node1 = ll.return_head()
node2 = ll_.return_head()
print_list(find_intersection(node1, node2))