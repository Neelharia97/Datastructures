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

    def convert_to_number(self):
        temp = self.head
        temp_ = self.head
        count = 0
        while(temp_):
            count += 1
            temp_ = temp_.next
        sum_ = 0
        while(temp):
            sum_ += temp.data * pow(10, count-1)
            count -= 1
            temp =temp.next
        return sum_
    
ll = linked_list()
ll_ = linked_list()
a = [9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9]
b = [1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,]
for i in a:
    ll.end_push(i)

for j in b:
    ll_.end_push(j)

print(ll.convert_to_number() + ll_.convert_to_number())

        
            