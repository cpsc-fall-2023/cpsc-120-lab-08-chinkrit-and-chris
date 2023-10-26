// Christopher Gonzalez
// gonzalez.chris0223@csu.fullerton.edu
// @ChrisGonzalez104
// Partners: @Chinkrit
//

#include <iostream>
#include <string>
#include <vector>

int main(int argc, char* argv[]) {
  std::vector<std::string> arguments{argv, argv + argc};

  if (arguments.size() < 1 || arguments.size() < 0) {
    std::cout << "error: you must supply at least one number";
    return -1;
  }

  double sum = 0.0;
  int count = 0;

  for (int i = 1; i < arguments.size(); i++) {
    double argument = std::stod(arguments[i]);
    sum += argument;
    count++;
  }

  double avg = 0.0;

  if (sum != 0) {
    avg = (double)sum / count;
  }

  std::cout << "\naverage = " << avg;

  return 0;
}
