#include <cmath>
#include <iostream>

long long transform(long long number) {
  long long shiftedLeft = number * 2;
  int length = 0;
  long long temp = shiftedLeft;
  long long sum = 0;

  while (temp > 0) {
    temp /= 10;
    length++;
  }

  int* array = new int[length];

for (int i = 0; i < length; i++) {
  long long digit = shiftedLeft % 10;
  sum += digit * pow(2, i);
  shiftedLeft /= 10;
}


  delete[] array;

  return sum;
}

int main() {
  std::cout << transform(111011101011LL) << std::endl;
  return 0;
}
