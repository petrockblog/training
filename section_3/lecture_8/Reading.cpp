#include <iostream>
#include <fstream>

using namespace std;

int main() {

  string inFileName = "../../../section_3/lecture_8/test.txt";
  ifstream inFile;

  inFile.open(inFileName, ios::in);
  if (inFile.is_open()) {

    string line;
    while (inFile) {
      getline(inFile, line);
      cout << line << endl;
    }

    inFile.close();
  } else {
    cout << "Cannot open file: " << inFileName << endl;
  }

  return 0;
}