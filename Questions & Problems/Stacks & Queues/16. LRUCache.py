# class Node:
#     def __init__(self, key, value):
#         self.key = key
#         self.value = value
#         self.next = None
#         self.prev = None

# class LRU_Cache:
#     def __init__(self, capacity):
#         self.capacity = capacity
#         self.dic = dict()

#         self.head = Node(0,0)
#         self.tail = Node(0,0)
#         self.head.next = self.tail
#         self.tail.prev = self.head

#     def __add(self, node):
#         p = self.tail.prev
#         p.next = node
#         self.tail.prev = node
#         node.next = self.tail
#         node.prev = p

#     def __remove(self, node):
#         p = node.prev
#         n = node.next
#         p.next = n
#         n.prev = p
    
#     def get(self, key):
#         if key in self.dic:
#             value = self.dic[key]
#             self.__remove(value)
#             self.__add(value)
#             return value.value
#         return -1

#     def set(self, key, value):
#         n = Node(key, value)
#         self.__add(n)
#         self.dic[key] = n
#         if len(self.dic)>self.capacity:
#             n = self.head.next
#             self.__remove(n)
#             del self.dic[n.key]

# cache = LRU_Cache(3)

# cache.set('a', 'apple')
# cache.set('b', 'ball')
# cache.set('c', 'cat')
# cache.set('d', 'dog')

# print(cache.get('a'))
# print(cache.get('b'))
# cache.set('a', 'apple')
# print(cache.get('c'))

#===================================================================================================================#
# Second Attempt
#===================================================================================================================#

class Node:
    def __init__(self, key, value):
        self.key = key
        self.value = value
        self.next = None
        self.prev = None


class LRU_Cache:
    def __init__(self, capacity):
        self.capacity = capacity
        self.dic = dict()

        self.head = Node(0,0)
        self.tail = Node(0,0)

        self.head.next = self.tail
        self.tail.prev = self.head
    
    def __add(self, node):
        p = self.tail.prev
        p.next = node
        self.tail.prev = node
        node.next = self.tail
        node.prev = p

    def __remove(self, node):
        n = node.next
        p = node.prev
        p.next = n
        n.prev = p

    def get(self, key):
        if key in self.dic:
            value = self.dic[key]
            self.__remove(value)
            self.__add(value)
            return value.value
        return -1
    
    def set(self, key, value):
        n = Node(key, value)
        self.__add(n)
        self.dic[key] = n
        if len(self.dic)>self.capacity:
            n = self.head.next
            self.__remove(n)
            del self.dic[n.key]


cache = LRU_Cache(3)
cache.set('a', 'apple')
cache.set('b', 'ball')
cache.set('c', 'cat')
cache.set('d', 'dog')
print(cache.get('a'))
print(cache.get('b'))