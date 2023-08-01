#include <iostream>
#include <math.h>

int* transform(int num) {
   /* The first int is used to state which variable type it is, 
   the second int is used to state the length of the array in an int format */
   int* array = new int[(int) ceil(log2(num)) + 1]; 
   int number = num; 
   int count = 0;

   /* For int iteration = ceiling(log2(num)) (Essentially the ceiling of log(a)(b), which is how many a's 
   would make b) till it reaches bigger or equal to 0, take 1 away*/
   for (int i = (int) ceil(log2(num)); i >= 0; i--) {
   /* If the given number is greater or equal to power(2 by iteration), make the array count equal to 1, then take it away
   else, make it 0 (stating it cant have 2 to the power of iteration). Then increase the count so it moves to the next integer of the array */
      if (num >= pow(2,i)) {
         array[count] = 1;
         num -= pow(2,i);
      } else {
         array[count] = 0;
      }
      count++;
   }
   /* For integer i = 0, until i is smaller or equal to the ceiling of a given number (e.g. given 75, log2(75) = 6.22, with ceil
   = 7), print array[i]. CANT USE NUM BECAUSE IT WAS ALTERED IN THE IF STATEMENT. */
   for (int i = 0; i <= (int) ceil(log2(number)); i++) {
      std::cout << array[i];
   }
   std::cout << std::endl;
   return array;
}
int main() {
   transform(3);
   transform(4);
   transform(8);
   transform(9);
   transform(13);
   transform(16);
   transform(33);
   }