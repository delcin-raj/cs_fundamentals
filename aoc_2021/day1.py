f = open("input/day1.dat", "r")
data = f.read()
numbers = data.split('\n')
result = list(map(int, numbers))

prev = result[0]
count = 0

# for i in range(len(result)):
for n in result:
    if n > prev:
        count += 1
    
    prev = n

print(count)

# Part 2
prev = result[0] + result[1] + result[2]
count = 0

for i in range(len(result)):
    if i + 3 < len(result):
        next = prev - result[i] + result[i + 3]
    else:
        break

    if next > prev:
        count += 1
    prev = next

print("part2")
print(count)
