def f(xs):
  return sorted(x / 2 for x in xs if (x % 2) == 0)

def f(xs):
  return sorted(
    map(lambda x: x / 2,
      filter(lambda x: (x % 2) == 0,
        xs)))

def f(xs):
  tmp = Vector()
  tmp.extend(filter(lambda x: (x % 2) == 0, xs))
  tmp.map(lamnda x: x / 2)
  tmp.sort()
  return tmp
