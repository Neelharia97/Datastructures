class Node:
    def __init__(self, data):
        self.data = data
        self.next = None

class LinkedList:
    def __init__(self):
        self.head = None

    def end_push(self,data):
        new_node = Node(data)
        if(self.head == None):
            self.head = new_node
        else:
            temp = self.head
            while(temp.next):
                temp = temp.next
            temp.next = new_node
        
    def add_one(self):
        runner = self.head
        runner_ = self.head
        count = 0
        while(runner):
            count += 1
            runner = runner.next
        final = 0
        while(runner_ ):
            final += runner_.data*pow(10,count-1)
            count -= 1
            runner_ = runner_.next
        return final+1

    def printLinkedList(self):
        print_node = self.head
        while(print_node):
            print(print_node.data)
            print_node = print_node.next
    

if __name__ == "__main__":
    linked_list = LinkedList()
    a  = [9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9]
    for i in a:
        linked_list.end_push(i)
    
    # linked_list.printLinkedList()
    print(linked_list.add_one())

