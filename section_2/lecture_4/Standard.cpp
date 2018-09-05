//
// Created by florian on 05.09.2018.
//

#include <iostream>
using namespace std;

class CanGoWrong {
 public:
  CanGoWrong() {
    char * pMemory = new char[99999];  // does not work with MinGW. Compiler already reports that array is too large.
    delete [] pMemory;
  }
};

int main() {
  try {
    CanGoWrong wrong;
  }
  catch(bad_alloc& e) {
    cout << e.what() << endl;
  }

  cout << "Still running" << endl;

  return 0;
}