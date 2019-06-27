std::vector<int> firsts_sorted_by_second(
  const std::vector<std::pair<int, int>>& items
) {
  std::vector<std::pair<int, int>> temp(items);

  std::sort(
    temp.begin(),
    temp.end(), 
    [](const int& a, const int& b
      ) -> bool { return a.second > b.second; } 
  );

  std::vector<int> results;
  results.reserve(temp.size());
  std::transform(
    temp.begin(),
    temp.end(),
    std::back_inserter(results),
    [](auto const& pair){ return pair.first / 2; }
  );

  return results;
}

