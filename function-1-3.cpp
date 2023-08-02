#include <iostream>

void count_digits(int array[4][4]) {
  int zer = 0;
  int one = 0;
  int two = 0;
  int thr = 0;
  int fou = 0;
  int fiv = 0;
  int six = 0;
  int sev = 0;
  int eig = 0;
  int nin = 0;

  for (int i = 0; i < 4; i++) {
    for (int j = 0; j < 4; j++) {
      switch (array[i][j]) {
        case 0:
          zer++;
          break;
        case 1:
          one++;
          break;
        case 2:
          two++;
          break;
        case 3:
          thr++;
          break;
        case 4:
          fou++;
          break;
        case 5:
          fiv++;
          break;
        case 6:
          six++;
          break;
        case 7:
          sev++;
          break;
        case 8:
          eig++;
          break;
        case 9:
          nin++;
          break;
      }
    }
  }
  std::cout << "0:" << zer << ";1:" << one << ";2:" << two << ";3:" << thr
            << ";4:" << fou << ";5:" << fiv << ";6:" << six << ";7:" << sev
            << ";8:" << eig << ";9:" << nin << ";" << std::endl;
}