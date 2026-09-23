import numpy as np

def rms(a, n):
    arr = np.array(a)
    
    sum_of_squares = np.dot(arr, arr)
    
    rms_value = np.sqrt(sum_of_squares / n)
    return rms_value

n = int(input().strip())
readings = list(map(float, input().strip().split()))

result = rms(readings, n)
print(f"{result:.2f}")

