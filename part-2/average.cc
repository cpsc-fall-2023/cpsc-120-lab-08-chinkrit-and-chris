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

  // TODO: Validate that there is at least one command line argument.
  // If not, print an error message and return a non-zero value.
  if (arguments.size() < 1 ) {
    std::cout << "error: you must supply at least one number";
    return -1;
  }

  // TODO: Write a for-each loop to sum (add up) all of the command line
  // arguments.
  // Use a double or float type so that your program preserves fractional
  // values.
  // The loop needs to skip over the command name, which is the first element
  // of the arguments vector.
  // Each argument is a std::string. You will need to convert each string into
  // a number with the std::stod or std::stof function.
  double sum = 0.0;
  int count = 0;
  for (int i = 1; i < arguments.size(); i++) {
    sum = sum  + arguments[i] ;
    count++;
  }

  // TODO: After the loop has finished summing the arguments, calculate the
  // average of the values. Recall that the average is the total value divided
  // by the number of values.
  double avg = 0.0;

  if (sum > 0) {
    avg = (double) sum / count;
  }

  // TODO: Use cout to print out a message of the form
  // average = *AVERAGE*
  // on its own line.

  std::cout << "\naverage = " << avg;

  return 0;
}
