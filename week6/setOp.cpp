#include <iostream>
#include <set>
using namespace std;
int main() {
    set<int> set1;
    set1.insert(1);
    set1.insert(2);
    set1.insert(3);
    set1.insert(4);
    set1.insert(5);
    set<int> set2;
    set2.insert(4);
    set2.insert(5);
    set2.insert(6);
    set2.insert(7);
    set2.insert(8);
    // Union
    set<int> unionSet;
    set_union(set1.begin(), set1.end(), set2.begin(), set2.end(), inserter(unionSet, unionSet.begin()));
    cout << "Union of sets: ";
    for (auto it = unionSet.begin(); it != unionSet.end(); it++) {
        cout << *it << " ";
    }
    cout << ::endl;

    // Intersection
    set<int> intersectSet;
    set_intersection(set1.begin(), set1.end(), set2.begin(), set2.end(), inserter(intersectSet, intersectSet.begin()));
    cout << "Intersection of sets: ";
    for (auto it = intersectSet.begin(); it != intersectSet.end(); it++) {
        cout << *it << " ";
    }
    cout << endl;

    // Difference
    set<int> diffSet;
    set_difference(set2.begin(), set2.end(), set1.begin(), set1.end(), inserter(diffSet, diffSet.begin()));
    cout << "Difference of sets: ";
    for (auto it = diffSet.begin(); it != diffSet.end(); it++) {
        cout << *it << " ";
    }
    cout << endl;

    return 0;
}
