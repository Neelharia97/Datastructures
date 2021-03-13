import math

def temporary(tmp, x):
    tmp1  = 0
    for i in range(x):
        tmp1 += tmp[i]
    return tmp1/60   
 
def playlist(songs):
    tmp = []
    count = 0
    for i in range(len(songs)):
        if songs[i]<60:
            tmp.append(songs[i])
        elif songs[i] == 60:
            count+=1
        elif songs[i]>60:
            if songs[i]%60 == 0:
                count += songs[i]/60
            else:
                count += math.floor(songs[i]/60)

    
    return math.floor(count+temporary(tmp, len(tmp)))

if __name__ == "__main__":
    a = [60,60,60,60,60,120,30,30,50,10,20,20,20,30,50]
    print(playlist(a))