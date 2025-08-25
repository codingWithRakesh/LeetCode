#include <iostream>
#include <vector>
using namespace std;

int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
    int totGas = 0, totCost = 0;
    int start = 0, currGas = 0;

    for(int i = 0; i < gas.size(); i++){
        totGas += gas[i];
        totCost += cost[i];
        currGas += (gas[i] - cost[i]);

        if(currGas < 0){
            start = i + 1;
            currGas = 0;
        }
    }

    if(totGas < totCost){
        return -1;
    }

    return start;
}

int main(){
    vector<int> gas = {1,2,3,4,5};
    vector<int> cost = {3,4,5,1,2};

    int result = canCompleteCircuit(gas,cost);

    if(result != -1){
        cout << "it possible" << endl;
    }else{
        cout << "not possible" << endl;
    }

    return 0;
}