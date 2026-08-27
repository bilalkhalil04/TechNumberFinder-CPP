#include<iostream>

using namespace std;



int main() {

   

  int num;

   

  cout << "Enter an even number: ";

  cin >> num;

   

  int numOfDigits = 0;

  int tempNumStore=num;

   

  while (tempNumStore != 0) {

    tempNumStore/=10;

    numOfDigits++;

  }

   

  if (numOfDigits % 2 != 0) {

    cout << "The number of digits is not even" << endl;

    return 1;

  }

   

  int splitPoint = pow(10 , numOfDigits/2);

   

  int res = pow(num % splitPoint + num / splitPoint, 2);

   

  if (res == num) {

    cout << num << " is a tech number" << endl;

  } else {

    cout << num << " is not a tech number" << endl;

  }

   

  cout << res << endl;

   

  return 0;

}