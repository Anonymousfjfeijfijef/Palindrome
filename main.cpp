// Intializing
#include <iostream>
#include <cstring>
#include <cctype>
using namespace std;

int main() {
  // Setting up strings
  char str[80];
  char str2[80];
  cin.get(str, 80);
  cin.get(); 
  int count = 0;
  // Filtering invalid characters
  for (int i = 0; str[i] != '\0'; i++) {
    if (isalpha(str[i])) {
      str[i] = tolower(str[i]);
      str2[count] = str[i];
      count += 1;
    }
  }
  str2[count] = '\0';
  char str3[count + 1];
  // Flipping string
  for (int i = 0; i < count; i++) {
    str3[i] = str2[count-1-i];
  }
  str3[count] = '\0';
  // Comparing 2 strings to see if they are the same
  if (strcmp(str2, str3) == 0) {
    cout << "Palindrome" << endl;
  }
  else {
    cout << "Not a Palindrome" << endl;
  }
  return 0;
}
