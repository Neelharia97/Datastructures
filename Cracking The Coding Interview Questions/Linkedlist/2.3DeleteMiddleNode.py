import math as math
class Node:
    def __init__(self,data):
        self.data = data
        self.next = None

class LinkedList:
    def __init__(self):
        self.head = None
    
    def append(self, data):
        new_node = Node(data)
        if (self.head ==None):
            self.head = new_node
        else:
            runner = self.head
            while(runner.next):
                runner = runner.next
            runner.next = new_node

    def printList(self):
        temp = self.head
        while(temp):
            print(temp.data)
            temp = temp.next

    def deleteMiddle(self):
        dummy = Node(0)
        dummy.next = self.head
        left = self.head
        right = self.head.next
        while(right and right.next):
            if self.head == None:
                return
            else:
                right = right.next.next
                prev = left
                left = left.next
        prev.next = left.next     
                

if __name__ == "__main__":
    linklist = LinkedList()
    for i in range(1,10):
        linklist.append(i)
    
    linklist.deleteMiddle()
    linklist.printList()



