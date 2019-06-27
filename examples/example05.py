def f(xs):
    return [x % 3 for x in sorted(xs) if x < 120]

def f(xs):
    ys = list(xs)
    ys.sort()
    zs = filter(lambda y: y < 120, ys)
    zs.map(lambda x: x % 3)
    return zs
