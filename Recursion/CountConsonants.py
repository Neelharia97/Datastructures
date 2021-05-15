def isConsonant(a):
    list_consonant = ['a','e','i','o','u', ' ']
    if(a.lower() in list_consonant):
        return 0
    else:
        return 1

def totalConsonant(a,size):
    if(size == 1):
        return isConsonant(a[0])
    else:
        return totalConsonant(a,size-1) + isConsonant(a[size-1])

if __name__ == "__main__":
    a = "geeksforgeeks portal"
    size = len(a)
    print(totalConsonant(a,size))