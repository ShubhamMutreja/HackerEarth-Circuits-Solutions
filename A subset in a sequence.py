import math 
def pov(n): 
    p = int(math.log(n, 2)); 
    return int(pow(2, p)),p; 
     
for _ in range(int(input())):
    n = int(input())
    arr = []
    while(n > 0):
        closest_pow,power_of = pov(n);
        arr.append(3**power_of)
        n = n - closest_pow
    print(len(arr))
    print(*arr[::-1])