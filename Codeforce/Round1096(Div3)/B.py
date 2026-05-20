
def helper_check(s: str) -> bool:
    hash_valid = {"(":0, ")":0}
    for i in s:
        if i in hash_valid:
            hash_valid[i] += 1
    return hash_valid["("] == hash_valid[")"]

def main():
    t = int(input())
    
    for _ in range(t):
        n = int(input())
        s = input()
        
        if helper_check(s):
            print("YES")

        if helper_check(s) == False:
            print("NO")
if __name__ == "__main__":
    main()