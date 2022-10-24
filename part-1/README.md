
# Date Difference With Functions

This exercise is a reprisal of the data difference program that you wrote in lab 05.
Back in lab 05, you put all of your code in the `main` function definition.
This time, you will design your own functions. Using functions will help you to keep your code organized,
and void duplicating code. In particular, this time you will only need to implement the
[Fliegel & Van Flandern equation](https://dl.acm.org/doi/pdf/10.1145/364096.364097) once.

You may recall the Fliegel & Van Flandern algorithm from lab 04:

```C++
int month = 1;
int day = 23;
int year = 2021;
int julian_day = day - 32075 + 1461
      * (year + 4800 + (month - 14) / 12) / 4
      + 367 * (month - 2 - (month - 14) / 12 * 12) / 12 - 3
      * ((year + 4900 + (month - 14) / 12) / 100) / 4;
```

This algorithm converts a date (month, day, year) into an integer number called a *Julian day*.

In lab 04, you wrote a program that calculated a *date difference.* A data difference is the number of
days between a start day and end day. The program converted the start day to a Julian day; converted the end day to a
Julian day; and subtraced the Julian day numbers to compute the date difference.

## Functions

The main goal of this exercise is for you to practice writing function definitions. The starter code has four functions that you need to complete.

### `JulianDay`

```C++
// Given a month, day, and year, calculate the Julian day number using the
// Fliegel & Van Flandern equation.
int JulianDay(int month, int day, int year)
```

### `DateDifference`

```C++
// Return the number of days between a start date and end date.
int DateDifference(int start_month, int start_day, int start_year,
                   int end_month, int end_day, int end_year)
```

### `PrintDate`

```C++
// Print the given date to standard output in the format MM/DD/YYYY
void PrintDate(int month, int day, int year)
```

### `main`

As usual, you need to complete the program's `main` function. This is the last of the four functions.

## Example Input and Output

The input and output of your program should be the same as it was in lab 04.

```
$ ls
date_difference.cc  Makefile  README.md
$ make all
set -e; clang++ -MM -g -O3 -Wall -pedantic -pipe -std=c++17 -D LINUX -D AMD64 date_difference.cc \
| sed 's/\(date_difference\)\.o[ :]*/\1.o date_difference.d : /g' > date_difference.d; \
[ -s date_difference.d ] || rm -f date_difference.d
clang++ -g -O3 -Wall -pedantic -pipe -std=c++17 -D LINUX -D AMD64 -c date_difference.cc
clang++ -g -O3 -Wall -pedantic -pipe -std=c++17 -o date_difference date_difference.o 
$ ./date_difference
Let's find the number of days between two dates...
Enter a start month: 1
Enter a start day: 1
Enter a start year: 2020

Enter an end month: 1
Enter an end day: 1
Enter an end year: 2021

The number of days between 1/1/2020 and 1/1/2021 is 366 days
$ ./date_difference
Let's find the number of days between two dates...
Enter a start month: 1
Enter a start day: 1
Enter a start year: 1990

Enter an end month: 1
Enter an end day: 1
Enter an end year: 2021

The number of days between 1/1/1990 and 1/1/2021 is 11323 days
$ 
```

## Test Cases

As usual, test your program against the test suite below.

| Test Case | Input                              | Expected Output                                                       |
|-----------|------------------------------------|-----------------------------------------------------------------------|
| 1         | 1, 1, 2022, 1, 1, 2023             | `The number of days between 1/1/2022 and 1/1/2023 is 365 days`        |
| 2         | 1, 1, 1984, 1, 1, 1985             | `The number of days between 1/1/1984 and 1/1/1985 is 366 days`        |
| 3         | 12, 25, 1275, 12, 25, 2522         | `The number of days between 12/25/1275 and 12/25/2522 is 455457 days` |
| 4         | 9, 21, 2022, 10, 31, 1980          | `The number of days between 9/21/2022 and 10/31/1980 is -15300 days`  |
| 5         | 10, 1, 79, 9, 23, 2022             | `The number of days between 10/1/79 and 9/23/2022 is 709658 days`     |

## What to Do

1. With your partner, edit the `datediff.cc` source file using VS Code. Add the required header. Replace all the TODO comments with working code.
1. Your program must use the `JulianDay`, `DateDifference`, and `PrintDate` functions. Do not change the prototypes of these functions (name, return type, argument types).
1. Compile your program with the `$ make` shell command. Use the **debug compile error** procedure to debug any compile errors.
1. Run your program with the `$ ./datediff` shell command.
1. Test that your program passes all of the test cases in the test suite above. If your program suffers a runtime error, use the **debug runtime error** procedure to debug the error. If your program does not produce the expected output, use the **debug logic error** procedure to debug the error.
1. Test your program against automated test with the `$ make test` command. Debug any runtime errors or logic errors using the same procedures.
1. Check your header with the `$ make header` shell command. Correct any errors.
1. Check for format errors with the `$ make format` shell command. Correct any errors.
1. Check for lint errors with the `$ make lint` shell command. Correct any errors.
1. After your program passes all of these tests and checks, push your code to GitHub. Use the usual trio of commands: `git add`, `git commit`, and `git push`.

## Next Steps

After you have pushed your code, move on to part 2.
