l, r = [int(i) for i in input().split()]
counter = 0
for i in range(l,r):
    mapper = {}
    i = str(i)
    for j in i:
        # print(type(j))
        if mapper[j]>0:
            mapper[j] += 1
        else:
            mapper[j] = 1
    if(mapper["6"]>0 and mapper["8"]>0):
        pass
    elif(mapper["6"] or mapper["8"]):
        counter+=1

print(counter)
