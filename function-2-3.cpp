#include <iostream>
int palindrome_sum(int integers[], int length) {
      int sum1 =0;
      for (int i = 0; i < length; i++) {
         sum1 += integers[i];
      }
      return sum1;
    }

bool is_array_palindrome(int integers[], int length) {
    for (int i = 0; i < length / 2; i++) { 
        if (integers[i] != integers[length - 1 - i]) {
            return false;
        }
    }
    return true;
}

int sum_integers(int integers[], int length) {
   bool status = true;
   int sum = 0;
   for (int i = 0; i < length / 2; i++) { 
        if (integers[i] != integers[length - 1 - i]) {
            return false;
        }
   }

    if (status == true) {
      for (int i = 0; i < length; i++) {
         sum += integers[i];
      }
    }
    return sum;
}
