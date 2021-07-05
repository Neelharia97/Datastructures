class Node:
    def __init__(self, data):
        self.data = data
        self.next = None
    
class LinkedList:
    def __init__(self):
        self.head = None
    
    def reverse(self):
        pass

    def front_push(self,new_data):
        new_node = Node(new_data)
        new_node.next = self.head
        self.head = new_node
    
    def end_push(self, new_data):
        new_node = Node(new_data)
        if(self.head is None):
            self.head = new_node
        else:
            temp = self.head
            while(temp.next):
                temp = temp.next
            temp.next = new_node

    def reverse(self):
        prev = None
        current = self.head
        while(current):
            next = current.next
            current.next = prev
            prev = current
            current = next
        self.head = prev
    
    def printList(self):
        if self.head == None:
            print("Empty")
        else:
            temp = self.head
            while(temp):
                print(temp.data, "->")
                temp = temp.next

if __name__ == "__main__":
    LL = LinkedList()
    arr = [10,20,30,40,50,60]
    for i in arr:
        LL.end_push(i)
    LL.printList()
    print('\n')
    LL.reverse()
    LL.printList()