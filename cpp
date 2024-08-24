#include <iosstream> 
#include <csdio>
#include <csdlib>
#include <direct.h>
#include <windows.h>

void createDirectory() {
  string dirName;
  cout << "\n Enter the Directory Name: ";
  cin >> dirName;

  if (_mkdir(dirName.c_str()) == 0 ) {
  cout << "\n Directory ' " << dirName << " ' Successfully created \n";
}
  else {
  cout << "\n Failed to create Directory ' " << dirName << "' \n";
}

system("pause");

}

void changeDirectory() {
  char currentDir[FILENAME_MAX];
  _getcwd (currentDir, size of(currentDir));
  cout << "\n Current Directory" <<currentDir << '\n';

  cout 


    
    
