
#include <iostream>
#include <stdio.h>
#include <string>
#include <cstring>
#include <cstdlib>
#include <cstdio>
#include <fstream>

using namespace std;
#define MEMORY_SPACE 256
char cmd='0';
string mem[MEMORY_SPACE];



int main(){
    int Total_Command_Count=0;
    string line;
    ifstream myfile ("input.sal");
    cout<< "Welcome to ALI! "<<endl;
    while(cmd !='q'){
        cout<<"\nInput a command: "<<endl;
        cin>> cmd;
        if (cmd=='i'){
            
            cout<<"\nPrinting input.sat comamnds "<<endl;
            if(myfile.is_open()){
                while (getline(myfile,line)){
                    mem[Total_Command_Count]=line;
                    Total_Command_Count++;
                    cout<< line<< '\n';
                }
                myfile.close();
            }else cout<<"Unable to open file"<<endl;

        }else if( cmd=='d'){

        }else if (cmd=='r'){

        }else if (cmd=='s'){

        }else if (cmd =='q'){
            break;  // finish program

        }else if (cmd=='p'){
            for(int i=0;i<Total_Command_Count;i++){
                cout<< mem[i]<<endl;
            }
        }
    }

    return 0;
}