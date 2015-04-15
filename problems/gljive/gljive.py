def gljive(nums):
    points = 0
    for num in nums:
        if abs(points+num - 100) <= abs(points-100):
            points += num
        else:
            break
    return points


if __name__ == '__main__':
    nums = []
    for i in xrange(10):
        nums.append(int(raw_input()))
    print gljive(nums)

            
        
    
