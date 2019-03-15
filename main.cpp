#include <iostream>
#include "super_vector.h"
#include "heavy_string.h"
#include "split_senten.h"
#include "merge_sort.h"
#include "hash_table.h"


int main() {
    TestRunner tr;
    RUN_TEST(tr, TestSmoke);
    RUN_TEST(tr, TestEmpty);
    RUN_TEST(tr, TestIdempotency);
    RUN_TEST(tr, TestEquivalence);
    return 0;
}