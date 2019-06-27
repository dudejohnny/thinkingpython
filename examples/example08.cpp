
set<Point> calc_path(map<Point, Point> prevs, Point point) {
    set<Point> results;
    point = prevs[point];
    while (prevs.find(point) != prevs.end()) {
        results.insert(point);
        point = prevs[point]; }
    return results; }

auto points = calc_path(prevs, end_point);

int i;

