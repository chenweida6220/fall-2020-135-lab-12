#include <iostream>
#include <vector>
using namespace std;

#include "funcs.h"

int main() {
  // Task A: The easy one
  vector<int> a = makeVector(11);
  cout << "0 to 10" << endl;
  for (int i = 0; i < a.size(); i++) {
    if (a[i] == a[a.size()-1]) {
      cout << a[i];
      break;
    }
    cout << a[i] << ",";
  }
  cout << endl;

  cout << "----------" << endl << endl;

  // Task B: A Happy Filter
  vector<int> b = goodVibes({1,2,-1,3,4,-1,6}); // returns [1,2,3,4,6]
  cout << "Unarranged: 1,2,-1,3,4,-1,6" << endl;
  cout << "Arranged: ";
  for (int j = 0; j < b.size(); j++) {
    if (b[j] == b[b.size()-1]) {
      cout << b[j];
      break;
    }
    cout << b[j] << ",";
  }
  cout << endl;

  cout << "----------" << endl << endl;

  // Task C: It’s over 9000!
  vector<int> c1 {1,2,3};
  vector<int> c2 {4,5};
  cout << "Vector1: {1,2,3}" << endl << "Vector2: {4,5}" << endl;
  gogeta(c1,c2);
  cout << "Vector1 is now [";
  for (int k = 0; k < c1.size(); k++) {
    if (c1[k] == c1[c1.size()-1]) {
      cout << c1[k];
      break;
    }
    cout << c1[k] << ",";
  }
  cout << "] and Vector2 is ";
  if (c2.size() == 0) {
    cout << "empty." << endl;
  }
  else {
    for (int l = 0; l < c2.size(); l++) {
      if (c2[l] == c2[c2.size()-1]) {
        cout << c2[l];
        break;
      }
      cout << c2[l] << ",";
    }
  }

  cout << "----------" << endl << endl;

  // Task D: Pairwise sum
  vector<int> v1{1,2,3};
  vector<int> v2{4,5};
  cout << "Vector 1: {1,2,3}" << endl << "Vector 2: {4,5}" << endl;
  vector<int> d = sumPairWise(v1, v2); // returns [5, 7, 3]
  cout << "Pairwise Sum Result: [";
  for (int m = 0; m < d.size(); m++) {
    if (d[m] == d[d.size()-1]) {
      cout << d[m];
      break;
    }
    cout << d[m] << ",";
  }
  cout << "]" << endl;


  cout << "----------" << endl << endl;
}
