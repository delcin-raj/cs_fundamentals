import re

with open("aoc2023\input\day4.dat",'r') as one:
    lines = one.read().strip().split('\n')

ans = 0

for line in lines:
    parts = re.split("\s+", line)
    winning_no = list(map(int, parts[2:10]))
    our_no = list(map(int, parts[13:]))
    score = 0

    for num in our_no:
        if num in winning_no:
            score += 1
        elif score > 0:
            ans += 2 ** (score - 1)

print(ans)
