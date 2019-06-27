def calc_path(prevs, point):
    point = prevs[point]
    while point in prevs:
        yield point
        point = prevs[point]

points = set(calc_path(prevs, end_point))
