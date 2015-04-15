def main():
    t = int(raw_input())
    for _ in range(t):
        nums = map(int, raw_input().split())
        print nums[0], sorted(nums[1:])[7]

if __name__ == '__main__':
    main()
