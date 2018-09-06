#include <iostream>
#include <list>

using namespace std;

int main() {

    list<int> numbers;

    numbers.push_back(1);
    numbers.push_back(2);
    numbers.push_back(3);
    numbers.push_back(4);
    numbers.push_front(0);

    list<int>::iterator it=numbers.begin();
    it++;
    numbers.insert(it, 100);
    cout << "Element: " << *it << endl;

    list<int>::iterator eraseIt = numbers.begin();
    eraseIt++;
    eraseIt = numbers.erase(eraseIt);
    cout << "Element: " << *eraseIt << endl;

    for (auto item : numbers) {
        cout << item << endl;
    }

    return 0;
}
