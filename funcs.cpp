#include <iostream>
#include <vector>
using namespace std;

#include "funcs.h"

// Task A: The easy one
vector<int> makeVector(int n) {
  vector<int> vec;
  for (int i = 0; i < n; i++) {
    vec.push_back(i);
  }
  return vec;
}

// Task B: A Happy Filter
vector<int> goodVibes(const vector<int> &v) {
  vector<int> vec;
  for (int i = 0; i < v.size(); i++) {
    if (v[i] > 0) {
      vec.push_back(v[i]);
    }
  }
  return vec;
}

// Task C: It’s over 9000!
void gogeta(vector<int> &goku, vector<int> &vegeta) {
  for (int i = 0; i < vegeta.size(); i++) {
    goku.push_back(vegeta[i]);
  }
  vegeta.clear();
}

// Task D: Pairwise sum
vector<int> sumPairWise(const vector<int> &v1, const vector<int> &v2) {
  vector<int> vec;
  // if equal in size
  if (v1.size() == v2.size()) {
    for (int i = 0; i < v1.size(); i++) {
      vec.push_back(v1[i] + v2[i]);
    }
  }
  // if Vector2 is larger in size
  else if (v1.size() < v2.size()) {
    int count_v1 = v1.size();
    for (int j = 0; j < v2.size(); j++) {
      if (count_v1 > 0) {
        vec.push_back(v1[j] + v2[j]);
        count_v1--;
      }
      else if (count_v1 == 0) {
        vec.push_back(v2[j]);
      }
    }
  }
  // if Vector1 is larger in size
  else if (v2.size() < v1.size()) {
    int count_v2 = v2.size();
    for (int k = 0; k < v1.size(); k++) {
      if (count_v2 > 0) {
        vec.push_back(v1[k] + v2[k]);
        count_v2--;
      }
      // if count of Vector2 runs out, just take from Vector1
      else if (count_v2 == 0) {
        vec.push_back(v1[k]);
      }
    }
  }
  return vec;
}
