#include "test_runner.h"
#include <algorithm>
#include <memory>
#include <vector>
#include <iterator>
using namespace std;



template <typename RandomIt>

void MergeSort(RandomIt range_begin, RandomIt range_end) {
    size_t size = range_end - range_begin;

    if (size < 2) return;

    vector<typename iterator_traits<RandomIt>::value_type> temp(range_begin, range_end);

    RandomIt begin = temp.begin();
    RandomIt one_third  = begin + temp.size() / 3;
    RandomIt two_third  = begin + 2 * temp.size() / 3;
    RandomIt end  = temp.end();


    MergeSort(begin, one_third);
    MergeSort(one_third, two_third);
    MergeSort(two_third, end);



    vector<int> dst;
    merge(begin, one_third, one_third, two_third, back_inserter(dst));
    merge(dst.begin(), dst.end(), two_third, end, range_begin);


}

void TestIntVector() {
    vector<int> numbers = {6, 1, 3, 9, 1, 9, 8, 12, 1};
    MergeSort(begin(numbers), end(numbers));
    ASSERT(is_sorted(begin(numbers), end(numbers)));
}
