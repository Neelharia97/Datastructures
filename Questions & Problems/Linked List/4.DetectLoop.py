class Node:
    def __init__(self,data):
        self.data = data
        self.next = None

class LinkedList:
    def __init__(self):
        self.head = None
    
    def detectAddress(self):
        q = self.head
        dict_address = {}
        while(q):
            if(q in dict_address):
                dict_address[q]+=1
            else:
                dict_address[q] = 1
            q = q.next
        
        for i in dict_address:
            if(dict_address[i]>1):
                return True
            else:
                return False


    def detectLoop(self):
        slow = self.head
        fast = self.head.next
        if(self.head == None or self.head.next == None):
            return False
        else:
            while(slow and fast):
                if(slow  == fast):
                    return True
                if(fast.next):
                    slow = slow.next
                    fast = fast.next.next
                else:
                    break
            return False

    def end_push(self,data):
        new_node = Node(data)
        if(self.head is None):
            self.head = new_node
        else:
            temp = self.head
            while(temp.next):
                temp = temp.next
            temp.next = new_node
        


if __name__ == "__main__":
    l = LinkedList()
    l.end_push(10)
    l.end_push(20)
    l.end_push(30)
    l.end_push(40)

    print(l.detectLoop())
    print(l.detectAddress())