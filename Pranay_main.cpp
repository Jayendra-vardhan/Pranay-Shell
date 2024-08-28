#include <iostream>
using namespace std;
int main() {
  // Flush after every std::cout / std:cerr
  cout << unitbuf;
  cerr << unitbuf;
  bool repl = true;
  do{
  cout << "$ ";
  std::string input;
  getline(cin, input);
  if(input == "Exit"|| input == "exit"){
    break;
  }
  cout << input << ": command not found\n";

  }while(repl);
}
