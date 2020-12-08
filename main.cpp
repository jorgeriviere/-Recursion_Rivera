//Tower of Hinoi
//This math puzzle has three rods and n disks 
//The object is to move the entire stack to another rod with three rules 1. Only one disk can be moved at a time. 2. You must move the upper disk from one of the stacks and placing it on top of another stack, a disk can only be moved if it is the uppermost disk on a stack. 3. No disk can be placed on top of a smaller disk
#include <iostream> 
using namespace std; 
  
void towerOfHanoi(int n, char from_rod, 
                    char to_rod, char aux_rod)  
{  
    if (n == 1)  ///tower
    {  
        cout << "Move disk 1 from rod " << from_rod <<" to rod " << to_rod<<endl;  
        return;  
    }  
    towerOfHanoi(n - 1, from_rod, aux_rod, to_rod);  
    cout << "Move disk " << n << " from rod " << from_rod <<" to rod " << to_rod << endl;  
    towerOfHanoi(n - 1, aux_rod, to_rod, from_rod);  
} //factorial  
   int factorialR(int n){

   if (n <= 1)
        return 1;         
   else 
       return n*factorialR(n-1);
                          } 
//*******************************************
/////Recursion is used to reduce a complex problem using "simpler-to-solve-Problem". The simpler-to-solve problem is called base case. After a recursive calls the stop when the base case is reached. Basically, the functions call on itself x number of times, doing the same action until told to stop. 
int main()  
{  
  cout<<"Tower of Hanoi being carried out\n";
    int n = 3; // Number of disks  
    towerOfHanoi(n, 'A', 'C', 'B'); // Three letters, one for each rod
//Recursion
  cout<<"\n\nFactorial Example\n";
    int fnum; ///enter 4
   cout<<"Enter a number: ";
   cin>>fnum;
   cout<<"Factorial of entered number: "<<factorialR(fnum);
   return 0;
}  
  