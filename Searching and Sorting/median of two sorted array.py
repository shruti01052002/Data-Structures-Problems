
def findMedianSortedArrays(arr1, n, arr2, n2):
    c= arr1+arr2
    c.sort()
    med=(len(c)-1)//2
    if(len(c)%2):
        return c[med]
    return (c[med]+c[med+1])//2
    '''
    arr1: shorter array
    n1:   len of arr
    arr2: larger array
    n2:   len of array
    return: median
    '''
    #code here



if __name__ == '__main__': 
    t=int(input())
    for tcs in range(t):
        
        n1,n2=list(map(int,(input().split())))
        arr1=list(map(int,(input().split())))
        arr2=list(map(int,(input().split())))
        
        if n1<n2:
            print(findMedianSortedArrays(arr1,n1, arr2,n2))
        else:
            print(findMedianSortedArrays(arr2,n2, arr1,n1))
