X, K, D = map(int, input().split())
X = abs(X)
N = X // D

base = X - min(N, K) * D

if K <= N:
    res = base
else:
    if (K - N) % 2 == 0:
        res = min(base, abs(base - 2 * D))
    else:
        res = min(abs(base - D), base + D)

print(res)