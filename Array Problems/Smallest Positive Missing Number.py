
def findMissing(arr, size): 
    mi=0
    while True:
        mi+=1
        if mi in arr:
            continue
        else:
            return mi
            break

if __name__ == '__main__':
    t=int(input())
    for i in range(t):
        n = int(input())
        arr = list(map(int, input().strip().split()))
        print(findMissing(arr, n))