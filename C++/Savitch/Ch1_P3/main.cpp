/* 
 * File:   main.cpp
 * Author: Tsz, Kwan
 * Add two simple text in prob2
 * Created on June 24, 2014, 11:50 AM
 */

//System Library
#include <iostream>
using namespace std;

//User Library

//Global Constant

//Function Prototypes

//Execution Begins here
int main(int argc, char** argv) {
    //Declare Variables
    int number_of_pods, peas_per_pod, total_peas;
    //simple text
    cout<<"Hello\n";
    //input no of pods
    cout<<"Press return after entering a number.\n";
    cout<<"Enter the number of pods:\n";
    cin>>number_of_pods;
    //input peas per pod
    cout<<"Enter the number of peas in a pod:\n";
    cin>>peas_per_pod;
    //Calculation
    total_peas = number_of_pods/peas_per_pod;
    //Output Here
    cout<<"If you have "<<number_of_pods<<" pea pods\n";
    cout<<"and "<<peas_per_pod<<" peas in each pod, then\n";
    cout<<"you have "<<total_peas<<" peas in all the pods.\n ";
    //Bye
    cout<<"Good-bye\n";
    //Exit stage right       
    return 0;
}
