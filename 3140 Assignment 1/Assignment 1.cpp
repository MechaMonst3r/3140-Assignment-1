#include <iostream>
using namespace std;
char randomChar(char letter);

int main()
{
 char userInput;
 char randomLetter;
 bool result;
 int correct;
 int incorrect;

 randomChar(randomLetter);
 cout << randomLetter;


 return 0;
}

char randomChar(char letter)
{
  int n = rand() % 26;
  letter = (char)(n + 65);
  return letter;
}