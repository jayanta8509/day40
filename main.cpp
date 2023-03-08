// Write a Program to Replace substring in a string
#include <iostream>
using namespace std;
void Replace_substring(string a, string b, string c) {
  int x;
  while ((x = a.find(b)) != string::npos) {
    a.replace(x, c.length() - 1, c);
  }
  cout << a;
}

int main() {
  // std::cout << "Hello World!\n";
  string a = "talentbattle";
  string b = "talent";
  string c = "student";
  Replace_substring(a, b, c);
}