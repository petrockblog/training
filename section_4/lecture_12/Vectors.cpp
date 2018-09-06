#include <iostream>
#include <vector>

using namespace std;

int main() {
  vector<string> strings;

  strings.push_back("one");
  strings.push_back("two");
  strings.push_back("three");

  for (size_t i=0; i<strings.size(); i++) {
    cout << strings[i] << endl;
  }

  for (vector<string>::iterator it = strings.begin(); it != strings.end(); it++ ) {
    cout << *it << endl;
  }

  for (auto i : strings) {
    cout << i << endl;
  }

  return 0;
}