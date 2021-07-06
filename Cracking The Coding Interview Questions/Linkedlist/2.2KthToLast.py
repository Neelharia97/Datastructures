from typing import Counter


class Node:
    def __init__(self,data):
        self.data = data
        self.next = None

class LinkedList:
    def __init__(self):
        self.head = None
    
    def append(self,data):
        new_node = Node(data)
        if self.head == None:
            self.head = new_node
        else:
            temp = self.head
            while(temp.next):
                temp = temp.next
            temp.next = new_node

    def removeK(self, target):
        dummy = Node(0)
        dummy.next = self.head
        left = dummy
        right = self.head

        while(target>0 and right):
            right = right.next
            target -= 1
        
        while(left and right):
            left = left.next
            right = right.next

        left.next = left.next.next
        

 

    def reverse(self):
        prev = None
        cur = self.head
        while(cur):
            next = cur.next
            cur.next = prev
            prev = cur
            cur = next
        self.head = prev   

    def printList(self):
        runner = self.head
        while(runner):
            print(runner.data)
            runner = runner.next

if __name__ == "__main__":
    linklist = LinkedList()
    for i in range(10):
        linklist.append(i)
    

    linklist.removeK(4)
    linklist.printList()