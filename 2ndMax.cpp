#include<bits/stdc++.h>
using namespace std;



int maxval(vector<long long int> boxes,long long int truck,vector<long long int>unitsboxes){
    
    long long int maxofall=INT_MIN;
    long long int maxvalue=0;

    long long int size=boxes.size(); 
    long long int cap=0;
    int capacity=0;
    for(long long int i=0;i<size;i++){

        capacity+=boxes[i];
        if(capacity<=truck){
            maxvalue+=boxes[i]*unitsboxes[i];
            if(maxofall<maxvalue){
                maxvalue=maxofall;
            }
        }

    }

    return maxvalue;

}