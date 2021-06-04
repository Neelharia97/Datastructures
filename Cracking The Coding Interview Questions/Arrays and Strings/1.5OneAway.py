
def checker(str1, str2):
    n_away  = 0
    mapper = OneAway(str1, str2)
    for i in mapper:
        if(mapper[i]>0):
            n_away+=1

    if(n_away == 1):
        print('One Away')
    else:
        print("Far Away")

def OneAway(str1, str2):
    if(len(str1)!=len(str2) and len(str1)-len(str2) != 1):
        return False
    else:
        mapper = {}
        for i in str1:
            if(i in mapper):
                mapper[i] +=1
            else:
                mapper[i] = 1
        
        for j in str2:
            if(j in mapper):
                mapper[j] -=1
    return mapper

if __name__ == "__main__":
    print(checker('pale', 'ple'))
    print(checker('pale', 'bale'))
    print(checker('pale', 'bake'))
    print(checker('pales', 'pale'))