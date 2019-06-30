def f(xs):
    return [str(x) for x in sorted(xs) if (x % 3) == 0]


def f(xs):
    ys = list(xs)
    sort(ys)
    zs = filter(lambda y: (y % 3) == 0, ys)
    results = map(str, zs)
    return results
