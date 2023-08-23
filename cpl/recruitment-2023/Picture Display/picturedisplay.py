n = int(input())

for i in range(n):
    data = input().split(' ')
    w1 = float(data[0])
    h1 = float(data[1])
    w2 = float(data[2])
    h2 = float(data[3])

    scaleFactor = min(w1 / w2, h1 / h2)

    newWidth = w2 * scaleFactor
    newHeight = h2 * scaleFactor

    print(f"{'{:.2f}'.format(scaleFactor)} {int(((w1 - newWidth) / 2.0))} {int(((h1 - newHeight) / 2.0))}")