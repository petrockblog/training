#include <iostream>
using namespace std;

class MyException : public exception {
 public:
  const char *what() const noexcept override {
    return "Exception here: Something bad happened";
  };
};

class Test {
 public:
  void goesWrong() {
    throw MyException();
  }
};

int main() {
  Test test;

  try {
    test.goesWrong();
  }
  catch (MyException &e) {
    cout << e.what() << endl;
  }
  return 0;
}