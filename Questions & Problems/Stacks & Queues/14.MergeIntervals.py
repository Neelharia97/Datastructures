class Solution:
    def merge(self, intervals):
        intervals = sorted(intervals, key= lambda x: x[0])
        output = []
        for i in intervals:
            if len(output) == 0:
                output.append(i)
            elif output[-1][1]>= i[0]:
                max_ = max(output[-1][1], i[1])
                output[-1].pop()
                output[-1].append(max_)
            else:
                temp = [i[0],i[1]]
                output.append(temp)
        return output

if __name__ == "__main__":
    sol = Solution()
    intervals = [[5,7],[2,6],[8,10],[15,18]]
    print(sol.merge(intervals))