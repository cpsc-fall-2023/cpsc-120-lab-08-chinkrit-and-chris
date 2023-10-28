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

  if (arguments.size() < 1) {
    std::cout << "error: you must supply at least one number" << std::endl;
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
    avg = sum / count;
  }

  std::cout << "\naverage = " << avg << std::endl;

  return 0;
}
