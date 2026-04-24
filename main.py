import sys
from functools import reduce


def main():
    lines = sys.stdin.read().splitlines()
    index = 0

    def solve_case(_):
        nonlocal index

        x = int(lines[index])
        index += 1

        nums = list(map(int, lines[index].split()))
        index += 1

        if len(nums) != x:
            print(-1)
            return

        non_positives = list(filter(lambda n: n <= 0, nums))
        total = reduce(lambda acc, n: acc + n ** 4, non_positives, 0)
        print(total)

    n = int(lines[index])
    index += 1
    list(map(solve_case, range(n)))


if __name__ == "__main__":
    main()