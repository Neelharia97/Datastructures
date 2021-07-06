class Node:
    def __init__(self, data):
        self.data = data
        self.next = None

class LinkedList:
    def __init__(self):
        self.head = None
    
    def append(self, value):
        new_node = Node(value)
        if self.head == None:
            self.head = new_node
        else:
            runner = self.head
            while(runner.next):
                runner = runner.next
            runner.next = new_node
    
    def prepend(self, value):
        new_node = Node(value)
        new_node.next = self.head
        self.head = new_node


    def removeDups(self):
        dict_mapper = {}
        prev = None
        cur = self.head
        dict_mapper[cur.data] = 1
        prev = cur
        cur = cur.next
        while(cur):
            if cur.data in dict_mapper:
                prev.next = cur.next
            else:
                dict_mapper[cur.data] = 1
                prev = cur
            cur = cur.next 



    def printList(self):
        runner = self.head
        while(runner):
            print(runner.data)
            runner = runner.next

if __name__ == "__main__":
    linklist = LinkedList()
    linklist.append(1)
    linklist.append(2)
    linklist.append(4)
    linklist.append(4)
    linklist.append(2)
    linklist.append(1)
    linklist.append(4)
    linklist.append(1)
    linklist.append(5)
    linklist.append(5)

    linklist.removeDups()
    linklist.printList()