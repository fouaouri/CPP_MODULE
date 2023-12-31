#include <iostream>
#include <stdexcept>
using namespace  std;
void    except()
{
    throw 500;
}
void    except1()
{
    throw 200;
}
    int main(){
    int i =60;
        cout << "Start" << endl;    
        try {       cout << "Inside try block." << endl; 
        if (i == 60)
            except();
        else if(i == 100)
            except1();  
        cout << "This will not execute.";     }
        catch(int j) {
        cout << "Caught an exception -- value is: ";       
        cout << j << endl;     }    
        cout << "End";    
        return 0;  
}