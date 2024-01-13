#include <iostream>
#include <string>
using namespace std;
int main() {
  string line;
  cout << "Enter a line of text: ";
  getline(std::cin, line);

  string token;

  for (size_t i = 0; i < line.length(); i++) {
    if (line[i] != ' ') {
      token += line[i];  // Add non-space characters to the current token
    }
    else {
      if (!token.empty()) {
        cout << token << " ";  // Display the completed token
        token.clear();  // Clear the current token for the next word
      }
    }
  }

  if (!token.empty()) {
    cout << token << " ";  // Display the last token if it's not empty
  }

  cout <<endl;

  return 0;
}
