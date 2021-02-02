#include <iostream>
using namespace std;
int main() {
  
  int fnum, fdenom, snum, sdenom, lnum, ldenom, buf;
  char dumbdumb;
  
  cout << "Please enter the first fraction." << endl;
  cin >> fnum >> dumbdumb >> fdenom;
  
  cout << "Please enter the second fraction." << endl;
  cin >> snum >> dumbdumb >> sdenom;
  
  if (fdenom!=sdenom){
      if(fdenom > sdenom){
        if(fdenom % sdenom == 0){
          buf = fdenom / sdenom;
          sdenom *= buf;
          snum *= buf;
        }
        else{
          snum *= fdenom;
          fnum *= sdenom;
          sdenom *= fdenom;
          fdenom = sdenom;
        }        
      }
 
  if(sdenom > fdenom){
          if(sdenom % fdenom == 0){
            buf = sdenom / fdenom;
            fdenom *= buf;
            fnum *= buf;
          }
          else{
            fnum *= sdenom;
            snum *= fdenom;
            fdenom *= sdenom;
            sdenom = fdenom;
          }        
        }

  } 

  lnum = fnum + snum;
  ldenom = fdenom;

  cout << "Result: " << lnum << dumbdumb << ldenom << endl;


  return 0;
  
}