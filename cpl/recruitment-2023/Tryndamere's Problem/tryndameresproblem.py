import sys

def gcd(a, b):
    if b > a:
        temp = a
        a = b
        b = temp

    while b != 0:
        t = b
        b = a % b
        a = t
    
    return a

for line in sys.stdin:
    data = line.split(' ')
    a = int(data[0])
    b = int(data[1])
    c = int(data[2])
    d = int(data[3])

    g = gcd(b, d)
    l = b * d / g
    gold = l / b * a + l / d * c
    print(int(gold))