#include <iostream>
#include <map>

using namespace std;

int main() {
    map<string, int> ages;

    ages["Mike"] = 40;
    ages["Raj"] = 20;
    ages["Vicky"] = 30;

    ages["Mike"] = 50;

    ages.insert(pair<string, int>("Peter", 100));
    ages.insert(make_pair("Peterson", 88));

    cout << ages["Raj"] << endl;

    if (ages.find("Vicky") != ages.end()) {
        cout << "Found Vicky!" << endl;
    }
    else
    {
        cout << "Did not find Vicky" << endl;
    }

    for (auto elem : ages) {
        cout << elem.first << ": " << elem.second << endl;
    }

    return 0;
}
