#include <cstdlib>
#include <ctime>
#include <iostream>
using namespace std;
int main() {
  srand((unsigned) time(0));
  int randomNumber;
  for (int index = 0; index < 5; index++) {
    randomNumber = (rand() % 100) + 1;
    cout << randomNumber << endl;
  }
}