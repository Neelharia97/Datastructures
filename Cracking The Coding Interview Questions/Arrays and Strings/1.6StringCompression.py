def CompressGood(str1):
    dict_map = {}
    compressed_string = ""
    for i in str1:
        if(i in dict_map):
            dict_map[i]+= 1
        else:
            dict_map[i] = 1

    for i in dict_map:
        # print(i)
        compressed_string += i+ str(dict_map[i])
    
    if(len(str1) <= len(compressed_string)):
        return str1
    else:
        return compressed_string


if __name__ == "__main__":
    str1 = "aaabbbccc"
    print(CompressGood(str1))