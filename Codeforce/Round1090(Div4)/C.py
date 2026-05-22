def main():
    t = int(input())
    for _ in range(t):
        n = int(input())
        res = []
        for i in range(n):
            small = i + 1
            med = 3 * n - 2 * i - 1
            big = 3 * n - 2 * i
            res.extend([small, med, big])
        print(*res)

if __name__ == "__main__":
    main()