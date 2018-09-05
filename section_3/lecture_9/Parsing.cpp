#include <iostream>
#include <fstream>

using namespace std;

int main() {
  string filename = "../../../section_3/lecture_9/stats.txt";
  ifstream input;

  input.open(filename);
  if (!input.is_open())
  {
    cout << "Could not open file " << filename << endl;
    return 1;
  }

  while(input) {
    string line;
    getline(input, line, ':');


    int population;
    input >> population;

    // input.get();
    input >> ws;

    if(!input) {
      break;
    }
    cout << line << " --- " << population << endl;
  }

  input.close();

  return 0;
}