/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
#include<string.h>

using namespace std;

int main()
{
    string Strings[] = {"abc", "abb", "cbb", "def", "fgh", "bgh", "jkl", "feh", "klm", "uiv", "jkl", "fed", "bbc", "abc", "cbb", "abb", "fgh", "hgf"};
    string Queries[] = {"bcd", "cbb", "fgh", "jkl", "fed"};
    
    int getArray1Length = sizeof(Strings) / sizeof(string);
    int getArray2Length = sizeof(Queries) / sizeof(string);
    string arr[getArray2Length]={};
    int count=0;
    
    for(int i=0; i< getArray2Length; i++)
    {  
        for(int j=0; j< getArray1Length; j++) {
            
            if(Queries[i] == Strings[j]) {
                count ++;
            }
            arr[i]  = Queries[i];
        }
        cout<<"\narr: "<<arr[i]<<"\t"<<"count: "<<count <<"\n";
        count=0;
    }
    
    return 0;
}
