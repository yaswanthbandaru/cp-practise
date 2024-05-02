def solve(nums):
    n = len(nums)
    result = []

    if (len(nums) == 1):
        return [nums[:]]
    
    for i, num in enumerate(nums):

        for r in solve(nums[:i]+nums[i+1:]):
            result.append([num] + r)
    return result 

def main():
    arr = [1,2,3,4]
    result = solve(arr)
    print(len(arr))
    print("No of permutations:", len(result))
    print(result)

if __name__ == "__main__":
    main()

