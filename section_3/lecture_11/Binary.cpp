#include <iostream>
#include <fstream>

using namespace std;

#pragma pack(push, 1)
struct Person {
  char name[50];
  int age;
  double height;
};
#pragma pack(pop)

int main() {
  Person someone = {"Frodo", 220, 0.8};
  string fileName = "test.bin";

  // writing file

  ofstream outputFile;

  outputFile.open(fileName, ios::binary);
  if (outputFile.is_open()) {
    outputFile.write(reinterpret_cast<char *>(&someone), sizeof(Person));
    outputFile.close();
  }
  else
  {
    cout << "Could not create file " << fileName << endl;
  }

  // reading file

  ifstream inputFile;
  Person someoneElse;

  inputFile.open(fileName, ios::binary);
  if (inputFile.is_open()) {
    inputFile.read(reinterpret_cast<char *>(&someoneElse), sizeof(Person));
    inputFile.close();

    cout << someoneElse.name << ": Age: " << someoneElse.age << ", Height: " << someoneElse.height << endl;
  }
  else
  {
    cout << "Could not open file " << fileName << endl;
  }

  return 0;
}
