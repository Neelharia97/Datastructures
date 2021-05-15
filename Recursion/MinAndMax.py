
import numpy as np
def Min(a,size):
    if(size == 1):
        return a[0]
    else:
        return min(Min(a[1:], size-1), a[0])

def Max(a, size):
    if(size == 1):
        return a[0]
    else:
        return max(Max(a[1:], size-1), a[0])

if __name__ == "__main__":

    a =  np.random.randn(400)
    print(a)
    print("Min is: ", Min(a,len(a)))
    print("Max is: ", Max(a,len(a)))