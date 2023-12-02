f = open("input/day1.dat","r")
data = f.read()
print(data)
calibrations = data.split('\n')
s = 0

for calibration in calibrations:
    digits=[]
    for c in calibration: 
        # print(c)
        if c.isdigit():
            digits.append(int(c))
    print(digits)
    if digits==[]:
        continue    
    first = digits[0]
    last = digits[-1]
    num = first*10+last
    print(num)
    s+=num
print(s)