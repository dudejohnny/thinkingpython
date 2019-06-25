>>> n, path = 2, 'small folder'
>>> lines = system(f'du -a {path}').splitlines()
>>> lines[:2]
['8\t./darker.css', '32\t./index.html']
>>> pairs = [line.split('\t') for line in lines]
>>> pairs[:2]
[['8', './darker.css'], ['32', './index.html']]
>>> nlargest(n, pairs)
[['96', './.git/objects/d1/31af6800b725b05b...'],
  ['912', './images/repr.jpg'],
  ['900', './.git/objects/20']]
>>> [name for size, name in nlargest(n, pairs)]
...