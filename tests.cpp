#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "doctest.h"
#include <vector>
#include "funcs.h"

// Task A: The easy one
TEST_CASE("testing Task A") {
  CHECK(makeVector(-3) == vector<int> {});
	CHECK(makeVector(0) == vector<int> {});
	CHECK(makeVector(3) == vector<int> {0,1,2});
	CHECK(makeVector(5) == vector<int> {0,1,2,3,4});
}

// Task B: A Happy Filter
TEST_CASE("testing Task B") {
  CHECK(goodVibes({-5,-4,-3,-2,-1}) == vector<int>{});
  CHECK(goodVibes({}) == vector<int>{});
  CHECK(goodVibes({0}) == vector<int>{});
  CHECK(goodVibes({-5,-4,-3,-2,-1,0,1,2,3,4,5}) == vector<int> {1,2,3,4,5});
  CHECK(goodVibes({-5,5,-4,4,-3,3,-2,2,-1,1}) == vector<int> {5,4,3,2,1});
}

// Task C: It’s over 9000!
TEST_CASE("testing Task C") {
  vector<int> c1 = {0,0,0};
  vector<int> c2 = {0,0};
  gogeta(c1,c2);
  CHECK(c1 == vector<int>{0,0,0,0,0});
  CHECK(c2 == vector<int>{});
}

// Task D: Pairwise sum
TEST_CASE("testing Task D") {
  CHECK(sumPairWise({1,2,3}, {4,5}) == vector<int> {5,7,3});
  CHECK(sumPairWise({4,5}, {1,2,3}) == vector<int> {5,7,3});
  CHECK(sumPairWise({1,2,3}, {1,2,3}) == vector<int> {2,4,6});
  CHECK(sumPairWise({0}, {1}) == vector<int> {1});
  CHECK(sumPairWise({0}, {}) == vector<int> {0});
  CHECK(sumPairWise({}, {}) == vector<int> {});
}
