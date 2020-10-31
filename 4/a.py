n=int(input())
c=sorted([int(i) for i in input().split()])
print("Deck looks good" if all(c[i+1]-1==c[i] for i in range(n-1)) else "Scammed")