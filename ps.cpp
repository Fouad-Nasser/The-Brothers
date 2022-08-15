#include<iostream>
#include<string>

using namespace std;

string getLastName(string str){
    int size = str.length();
    string lastName = "";

    for (int i = 0; i < size; i++)
    {
            if (str[i] == ' ')
            {
                lastName = str.substr(i+1,size-1);
                // for (int j = i+1; j < size; j++)
                // {
                //     lastName += str[j];
                // }
                break;
            }
    }
    
    return lastName;
}


int main(){
   string name1, name2;

    getline (cin, name1);
    getline (cin, name2);

    if (getLastName(name1) == getLastName(name2))
    {
       cout << "ARE Brothers" << endl; 
    }
    else
    {
        cout << "NOT" << endl; 
    }
    
    return 0;
}