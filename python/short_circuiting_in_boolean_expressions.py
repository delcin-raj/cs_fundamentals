l = [1,3,-1,100,20]
sorted(l)
l
l.sort()
l
l = [1,3,-1,100,20]
l
sorted(l, reverse=True)
l
l.sort(reverse=True)
l
sorted(iterable=l)
def f(x):
    return x
f(1)
f(x=1)
def f(x, /, *):
    return x
def f(x, /, *, name="Name"):
    return x
f(1)
f(x=1)
def g(x):
    return x
g(x=3)
g(y=4)
def f(x, *, name="Name"):
    return x
f(1)
f(x=1)
True and True
True and False
False and True
False and False
False or False
False or True
# Shortcircuiting in python
%hist -g
def demo():
    print("demo")
    return False
True or demo()
False or demo()
False and demo()
True and demo()
def isAscending(nums):
    i = 0
    n = len(nums)
    while i < n - 1 and nums[i] < nums[i+1]:
        i += 1
    return i == n
isAscending([1,2,3,4,4,5])
def isAscending(nums):
    i = 0
    n = len(nums)
    while i < n - 1 and nums[i] < nums[i+1]:
        i += 1
    return i == n - 1
isAscending([1,2,3,4,4,5])
def isAscending(nums):
    i = 0
    n = len(nums)
    while i < n - 1 and nums[i] <= nums[i+1]:
        i += 1
    return i == n - 1
isAscending([1,2,3,4,4,5])
isAscending([1,2,30,4,4,5])
isAscending([1,2,3,4,4,5,1])
# Implement isAscending function using for loop
