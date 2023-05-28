#include <iostream>
#include <iomanip>
#include <cstring>
#define SIZE 100

using namespace std;

int main(){

  char *pntrA, *pntrB, i, temp;
  
  char a[1000]; // declaring char array of size 1000

  cout << "Input String: ";
  
  cin >> a; // accept user's input of string values
  
  int size = strlen(a); // size of a

  pntrA = &a[0]; 

  cout << "Orginal: ";

  for (int i=0; i < size - 1; i++, pntrA++) {
    cout << setw(3) << *pntrA << endl;
  }

  cout << setw(3) << *pntrA << endl;
  cout << endl;

  pntrA = &a[0];
  pntrB = &a[size-1];

  cout << "Reverse: ";

  for (int i=0; i<size/2; i++) {
    temp = *pntrA;
    *pntrA = *pntrB;
    *pntrB = temp;
    pntrA++;
    pntrB--;
  }

  pntrA = &a[0];

  for(int i = 0; i<size-1; i++, pntrA++) {
    cout << setw(3) << *pntrA << " ";
  }

  cout << setw(3) << *pntrA << endl;
  return 0;
}