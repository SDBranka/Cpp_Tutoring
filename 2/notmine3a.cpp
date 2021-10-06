#include <iostream>

using namespace std;

int main()
{
  double start = 0;
  double stop  = 0;
  double count = 0;
  double forstuff = 0;
  
  cout << "Please enter a value to start counting at: ";
  cin >> start;
  
  cout << "Please enter a value to stop counting at: ";
  cin >> stop;
  
  cout << "Please enter a value to count up/down with: ";
  cin >> count;
  cout << endl;
  
  if(count >= 0)
  {
    if(count <= 0 && start >= 0 && stop >= 0)
    {
      for(forstuff = start; forstuff == stop; forstuff = forstuff + count)
      {
        cout << 
      }
    }
    else
    {
      cout << "Invalid counting number.";
      cout << endl;
    }
  }
  else
  {
    cout << "Invalid counting number.";
    cout << endl;
  }
  
  cout << endl;
  
  return 0;
}
