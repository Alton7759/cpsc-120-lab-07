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
#include <string>
#include <vector>

bool IsAce(const std::string& card_name) { return card_name == "A"; }
bool IsFaceCard(const std::string& card_name) {
  return card_name == "K" || card_name == "J" || card_name == "Q";
}

bool IsNumberCard(const std::string& card_name) {
  bool isclear{false};
  std::vector<std::string> f{"2", "3", "4", "5", "6", "7", "8", "9", "10", "0"};
  for (const auto& checker : f) {
    if (card_name == checker) {
      isclear = true;
    }
  }
  return isclear;
}

bool IsCardName(const std::string& str) {
  bool isclear2{false};
  if (IsAce(str) || IsFaceCard(str) || IsNumberCard(str)) {
    isclear2 = true;
  }
  return isclear2;
}

bool AllArgumentsValid(const std::vector<std::string>& arguments) {
  bool isclear3 = false;
  for (int count = 1; count < arguments.size(); count++) {
    if (IsCardName(arguments.at(count))) {
      isclear3 = true;
    } else {
      std::cout << "error: unkown card '" << arguments.at(count) << "'\n";
      isclear3 = false;
    }
  }
  return isclear3;
}

int CardPoints(const std::string& card_name) {
  int points = 0;
  if (IsFaceCard(card_name)) {
    points += 10;
  } else if (IsNumberCard(card_name)) {
    points += std::stoi(card_name);
  }
  return points;
}

bool HandContainsAce(const std::vector<std::string>& arguments) {
  bool idk2 = false;
  for (const std::string& idk : arguments) {
    if (IsAce(idk)) {
      idk2 = IsAce(idk);
    }
  }
  return idk2;
}

bool IsBust(int score) { return score > 21; }
int HandScore(const std::vector<std::string>& arguments) {
  int score = 0;
  for (const std::string& run : arguments) {
    score += CardPoints(run);
  }
  if (HandContainsAce(arguments)) {
    for (const std::string& run2 : arguments) {
      if (IsAce(run2)) {
        if (score + 11 > 21) {
          score += 1;
        } else {
          score += 11;
        }
      }
    }
  }
  return score;
}
void PrintScore(int score) {
  if (IsBust(score)) {
    std::cout << "Score is " << score << ", BUST\n";
  } else {
    std::cout << "Score is " << score << "\n";
  }
}

int main(int argc, char* argv[]) {
  std::vector<std::string> arguments(argv, argv + argc);
  if (arguments.size() == 1) {
    std::cout << "Score is 0\n";
    return 0;
  }
  if (AllArgumentsValid(arguments)) {
    PrintScore(HandScore(arguments));
  } else {
    return 1;
  }
  return 0;
}
