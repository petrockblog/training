
#include <iostream>
#include <vector>

using namespace std;

int main() {
  vector<double> numbers(0);

  cout << "Size: " << numbers.size() << endl;

  int capacity = numbers.capacity();
  cout << "Capacity: " << capacity << endl;

  for (int i=0; i<1000; i++) {
    if (numbers.capacity() != capacity) {
      capacity = numbers.capacity();
      cout << "Capacity: " << capacity << endl;
    }
    numbers.push_back(i);
  }

  numbers.reserve(10000);
  cout << numbers[2] << endl;
  cout << "Size: " << numbers.size() << endl;
  cout << "capacity: " << numbers.capacity() << endl;

  return 0;
}