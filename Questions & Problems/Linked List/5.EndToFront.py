class Node:
    def __init__(self,data):
        self.data = data
        self.next = None

class LinkedList:
    def __init__(self):
        self.head = None
    
    def end_push(self,data):
        new_node = Node(data)
        if(self.head == None or self.head.next == None):
            self.head = new_node
        else:
            temp = self.head
            while(temp.next):
                temp = temp.next
            temp.next = new_node
        
    
    def lastToFirst(self):

        cur = self.head
        sec_last = None
        if not cur or not cur.next:
            return

        while(cur.next and cur):
            sec_last = cur
            cur = cur.next
        
        sec_last.next = None
        cur.next = self.head
        self.head = cur

    def printLL(self):
        temp1 = self.head
        
        while(temp1 is not None):
            print(temp1.data)
            temp1 = temp1.next
        

if __name__ == "__main__":
    a = [1,2,3,4,5,6]
    l = LinkedList()
    for i in a:
        print(i)
        l.end_push(i)
    print(l.printLL())

    l.lastToFirst()

    print(l.printLL())