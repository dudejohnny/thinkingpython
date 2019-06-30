#include <algorithm>
#include <iostream>
#include <string>
#include <vector>
using namespace std;





vector<string> f(const vector<int>& xs) {
  vector<int> ys = xs;
  sort(ys.begin(), ys.end());

  vector<int> zs;
  copy_if(
    ys.begin(),
    ys.end(),
    back_inserter(zs),
    [](int i){return (i% 3) == 0;}
  );

  vector<string> results;
  transform(
    zs.begin(),
    zs.end(),
    back_inserter(results),
    [](int i){ return to_string(i); }
  );

  return results;
}




int main(int, char**) {
  vector<int> v{0,1,2,3,4,5,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19};
  for (auto& it: f(v))
    clog << it << ", ";
  clog << "\n";
}