import math

def truncated_cone_surface_area(R, r, h):

    l = math.sqrt(h**2 + (R - r)**2)

    A = math.pi * (R**2 + r**2) + math.pi * (R + r) * l

    return round(A, 2)

R, r, h = map(int, input().split())


result = truncated_cone_surface_area(R, r, h)
print(result)