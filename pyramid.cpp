//
// Created by LittleRandom on 2/22/2020.
//

#include "pyramid.h"
#include <iostream>
#include <vector>

using namespace std;

void pyramid::printLine() {

    for (auto iter = dataStructure.end() - 1; iter != dataStructure.begin() + 1; iter--) {
        if(*iter != 0)cout << (*iter) << " ";
    }
    cout << "1";
}

void pyramid::printPyramid(){
    // Loop to increment the lines and to also print new lines;
    vector<long long int> pyramidLine2;
    int numPascalLines = 0;
    while(numPascalLines<num) {
        pyramidLine2.push_back(0);
        auto iter2 = pyramidLine2.begin();
        iter2++;
        for(auto iter = dataStructure.begin(); iter+1 != dataStructure.end(); iter++){
            if(iter2 != pyramidLine2.end()) *iter2 = *(iter) + *(iter + 1);
            else pyramidLine2.push_back(*(iter) + *(iter + 1));
            iter2++;
        }
        dataStructure = pyramidLine2;
        if(numPascalLines >0) this->printLine();
        cout << endl;
        numPascalLines++;
    }

    //
}


