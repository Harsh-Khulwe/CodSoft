#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    string name;
    
    cout<<"Enter the name of file: ";
    cin>>name;

    ifstream fin(name);

    char ch;
    int count = 1;

    fin.seekg(0, ios::beg);
 
    while(fin)
    {
        fin.get(ch);
        
        if(ch==' '||ch=='\n')
            count++;
    } 
 
    cout<<"Total no. of words in the file are: "<<count;

    fin.close();
 
    return 0;
}
