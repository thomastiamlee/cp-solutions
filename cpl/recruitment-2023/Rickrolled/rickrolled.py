import sys
import re

pattern = ['never', 'gonna', 'give', 'you', 'up', 'never', 'gonna', 'let', 'you', 'down']

for line in sys.stdin:
    data = [re.sub(r'[\W_]', '', i) for i in line.split(' ')]
    current = 0
    for s in data:
        if current < len(pattern) and s == pattern[current]:
            current += 1
    if current == len(pattern):
        print("YES")
    else:
        print("NO")


    
