// Joshua Naranjo
// CPSC 120-01
// 2022-10-22
// josh.naranjo@csu.fullerton.edu
// @jnd323
//
// Lab 06-01
// Partners: @FrankiePaniagua004 @deborahjoneshappy @jnd323
//
// In this program we use loops to make a cool pattern.
//

#include <iostream>

/*int julian_day = day - 32075 + 1461 * (year + 4800 + (month - 14) / 12) / 4 +
                 367 * (month - 2 - (month - 14) / 12 * 12) / 12 -
                 3 * ((year + 4900 + (month - 14) / 12) / 100) / 4; */
int JulianDay(int month, int day, int year) {
  // TODO: write statements to implement this function, and delete this comment
  return 0;
}
// Return the number of days between a start date and end date.
int DateDifference(int start_month, int start_day, int start_year,
                   int end_month, int end_day, int end_year) {
  int sjulian_day =
      start_day - 32075 +
      1461 * (start_year + 4800 + (start_month - 14) / 12) / 4 +
      367 * (start_month - 2 - (start_month - 14) / 12 * 12) / 12 -
      3 * ((start_year + 4900 + (start_month - 14) / 12) / 100) / 4;
  int ejulian_day = end_day - 32075 +
                    1461 * (end_year + 4800 + (end_month - 14) / 12) / 4 +
                    367 * (end_month - 2 - (end_month - 14) / 12 * 12) / 12 -
                    3 * ((end_year + 4900 + (end_month - 14) / 12) / 100) / 4;
  int julian_day = ejulian_day - sjulian_day;
  // std::cout << julian_day;
  return julian_day;

  // TODO: write statements to implement this function, and delete this
  // comment
}

// Print the given date to standard output in the format MM/DD/YYYY
void PrintDate(int month, int day, int year) {
  // TODO: write statements to implement this function, and delete this
  // comment
}

int main(int argc, char* argv[]) {
  int start_month = 0;
  int start_day = 0;
  int start_year = 0;
  int end_month = 0;
  int end_day = 0;
  int end_year = 0;

  std::cout << "Please enter the month\n";
  std::cin >> start_month;
  std::cout << "Plese enter the day\n";
  std::cin >> start_day;
  std::cout << "Pleas enter the year\n";
  std::cin >> start_year;
  std::cout << "Please enter the second month\n";
  std::cin >> end_month;
  std::cout << "Please enter the second day\n";
  std::cin >> end_day;
  std::cout << "Please enter the second year\n";
  std::cin >> end_year;

  std::cout << DateDifference(start_month, start_day, start_year, end_month,
                              end_day, end_year);

  // TODO: call DateDifference, and store its return value in a variable

  // TODO: output "The number of days between"
  // TODO: call PrintDate to print out the start date
  // TO: output " and "
  // TODO: call PrintDate to print out the end date
  // TODO: output " is DAYS days\n", where DAYS is the difference claculated
  //       by DateDifference above

  return 0;
}
