#include <iostream>

extern int palindrome_sum(int integers[], int length);
extern int sum_integers(int integers[], int length);
bool is_array_palindrome(int integers[], int length);

int main() {
  int palindromeArray[5] = {1, 2, 3, 2, 1};

  std::cout << palindrome_sum(palindromeArray, 5) << "\n";

  if (is_array_palindrome(palindromeArray, 5) == 1) {
    std::cout << sum_integers(palindromeArray, 5) << "\n";
  } else {
    std::cout << "-2";
  }
}