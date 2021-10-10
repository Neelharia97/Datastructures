def solve(ip, op):
    if len(ip) == 0:
        print(op)
    
    op1 = [op]
    op2 = [op]
    op2.append(ip[0])
    ip.remove(ip[0])
    solve(ip, op1)
    solve(ip, op2)

    

if __name__ == "__main__":
    ip = ["abcdefg"]
    op = ""
    print(solve(ip, op))