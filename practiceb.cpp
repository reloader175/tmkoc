#include<iostream>
using namespace std;
int main(){
    int i,m,n;
    cout<< "entre the number of process";
    cin>>n;
    int arrival[n]; 
    int execution[n];
    int waiting[n];
    int turnaround[n];

    for(i=0;i<n;i++){
        cout<< "entre the arrival time of process "<<i+1<<":";
        cin>>arrival[i];
        cout<< "entre the execution time of process "<<i+1<<":";
        cin>>execution[i];

    }
    int currenttime = 0 ;
    for(int i= 0;i<n;i++){
        if(currenttime < arrival[i]){
            currenttime = arrival[i];
        }
        currenttime += execution[i];
        waiting[i] = currenttime - arrival[i] - execution[i];


        
    }
    for(int i= 0;i<n;i++){
        turnaround[i] = waiting[i] + execution[i];
    }
    cout<<"process\tarrivaltime\texecutiontime\twaitingtime\tturnaroundtime\n"; 
    for(int i= 0;i<n;i++){
        cout<<i+1<<"\t"<<arrival[i]<<"\t"<<execution[i]<<"\t"<<waiting[i]<<"\t"<<turnaround[i]<<"\n";
    }

return 0;



}