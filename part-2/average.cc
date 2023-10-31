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

  if (arguments.size() <= 1) {
    std::cout << "error: you must supply at least one number" << std::endl;
    return -1;
  }

  double sum = 0.0;
  bool first = true;

  for (std::string& argument : arguments) {
    if (first) {
      first = false;
    } else {
      double number = std::stod(argument);
      sum += number;
    }
  }

  double avg = 0.0;
  avg = sum / (static_cast<int>(arguments.size()) - 1);

  std::cout << "\naverage = " << avg << std::endl;

  return 0;
}
