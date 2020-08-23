n = int(input())
A = list(map(int, input().split()))
A.sort()
res = 0
for i in range(n):
    for j in range(i + 1, n):
        for k in range(j + 1, n):            
            if A[i] + A[j] > A[k] and len(set([A[i], A[j], A[k]])) == 3:
                res += 1

print(res)