def counter(a):
    if(a == ''):
        return 0
    else:
        return 1+counter(a[1:])

if __name__ == "__main__":
    a = "Neel Haria"
    print(counter(a))