#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;

int main(){
    cout << "Press Enter 3 times to reveal your future.";
    int i = 0 ;
    while(i<4){
        cin.get();
        i++;
    }
    srand(time(0));
    int grade = rand()%9;
    string grade1;
    if(grade == 0) grade1 = "A";
    else if(grade == 1) grade1 = "B+"; 
    else if(grade == 2) grade1 = "B"; 
    else if(grade == 3) grade1 = "C+"; 
    else if(grade == 4) grade1 = "C+"; 
    else if(grade == 5) grade1 = "D+"; 
    else if(grade == 6) grade1 = "D"; 
    else if(grade == 7) grade1 = "F"; 
    else grade1 = "W";

    cout << "You will get "<< grade1 << " in this 261102.";
}
