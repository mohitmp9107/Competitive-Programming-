t=int(input())
for _ in range(t):
    n = int(input())
    a=list(map(int,input().split()))

    ans = set()
    someone = {0}

    for ele in a:
        someone = {ele|y for y in someone}|{ele}
        ans |=someone

    if(len(ans)==(n*(n+1))/2):
        print("YES")
    else:
        print("NO")
