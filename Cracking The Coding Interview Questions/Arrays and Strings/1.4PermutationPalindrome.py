def PermutationPalindrome(str):
    EvenCount = 0
    OddCount = 0
    checking  = checker(str)
    for i in checking:
        if(checking[i]%2 == 0):
            EvenCount+=1
        elif(checking[i] == 1 or checking[i]%2 != 0):
            OddCount+= 1
        
    if(OddCount== 0 or OddCount == 1):
        print("Palindrome")
    else:
        print("Not Palindrome")

def checker(str):
    dict_checker = {}
    str = str.lower().replace(" ","")
    for i in str:
        if(i in dict_checker):
            dict_checker[i] += 1
        else:
            dict_checker[i] = 1
    return dict_checker


if __name__ == "__main__":
    str = "tact Coa"
    PermutationPalindrome(str)