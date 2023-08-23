import sys
def get_ints(): return list(map(int, sys.stdin.readline().strip().split()))

n, q = [int(i) for i in input().split(' ')]
res = ''
while n > 0 or q > 0:
    pref = [0]

    bestStart = -1
    bestCount = 0
    bestTime = q + 1
    total = 0

    data = get_ints()
    i = 1
    while i <= n:
        total += data[i - 1]
        pref.append(total)
        i += 1

    i = 1
    while i <= n:
        lo = i
        hi = n

        if q < pref[lo] - pref[i - 1]:
            i += 1
            continue
        while lo <= hi:
            mid = int((lo + hi) / 2)
            if pref[mid] - pref[i - 1] <= q and (mid == n or pref[mid + 1] - pref[i - 1] > q):
                count = mid - i + 1
                time = pref[mid] - pref[i - 1]
                if count > bestCount or (count == bestCount and time < bestTime):
                    bestStart = i
                    bestCount = count
                    bestTime = time
                break
            elif pref[mid] - pref[i - 1] > q:
                hi = mid - 1
            elif pref[mid] - pref[i - 1] <= q and pref[mid + 1] - pref[i - 1] <= q:
                lo = mid + 1
        i += 1
        
    if bestStart == -1:
        res += f"go back to old life\n"
    else:
        res += f"buy plot {bestStart} to plot {bestStart + bestCount - 1}\n"

    n, q = [int(i) for i in input().split(' ')]

print(res)