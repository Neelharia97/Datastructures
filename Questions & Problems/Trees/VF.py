class ModeStack:
    def __init__(self):
        self.stack = []
        self.dict_counter = {}
        
    def push(self,data):
        self.stack.append(data)
        if data in self.dict_counter:
            self.dict_counter[data] += 1
        else:
            self.dict_counter[data] = 1
    
    def pop(self):
        data = self.stack[-1]
        self.stack.pop()
        self.dict_counter[data] -= 1
    
    def mode(self):
        dict_new = sorted(self.dict_counter.values())
        print(dict_new[-1])
        
ms = ModeStack()
ms.push(1)
ms.push(1)
ms.push(1)
ms.push(1)
ms.mode()
ms.pop()
ms.mode()
