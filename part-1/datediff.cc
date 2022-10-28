// Christian Alton bonilla
// CPSC 120-01
// 2022-10-26
// Alton77@csu.fullerton.edu
// @alton7759
//
// Lab 07-01
// Partners: @FrankiePaniagua004, @deborahjoneshappy, @jnd323
//
// Program to calculate the number of days between two Gregorian dates.
//

#include <iostream>

int JulianDay(int month, int day, int year) { return 0; }
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
  return julian_day;
}

void PrintDate(int month, int day, int year) {
  std::cout << month << "/" << day << "/" << year;
}

int main(int argc, char* argv[]) {
  int start_month = 0;
  int start_day = 0;
  int start_year = 0;
  int end_month = 0;
  int end_day = 0;
  int end_year = 0;

  std::cout << "Enter a start month: ";
  std::cin >> start_month;
  std::cout << "Enter a start day: ";
  std::cin >> start_day;
  std::cout << "Enter a start year: ";
  std::cin >> start_year;
  std::cout << "Enter an end month: ";
  std::cin >> end_month;
  std::cout << "Enter an end day: ";
  std::cin >> end_day;
  std::cout << "Enter an end year: ";
  std::cin >> end_year;

  std::cout << "The number of days between ";
  PrintDate(start_month, start_day, start_year);
  std::cout << " and ";
  PrintDate(end_month, end_day, end_year);
  std::cout << " is ";
  std::cout << DateDifference(start_month, start_day, start_year, end_month,
                              end_day, end_year)
            << " days";

  return 0;
}
