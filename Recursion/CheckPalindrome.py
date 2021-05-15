# global fin = ''
def checkReverse(a,size):
    if(size == 0):
        return ''
    else:
        return a[size-1] + checkReverse(a,size-1)

def checkPalindrome(a, size):
    rev = checkReverse(a, size)
    if(rev == a):
        return True
    else:
        return False


if __name__ == "__main__":
    a = "NAMAN"
    size = len(a)
    print(checkPalindrome(a, size))