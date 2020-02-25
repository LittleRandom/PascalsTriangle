//
// Created by LittleRandom on 2/22/2020.
//

#include <vector>

#ifndef PASCALSTRIANGLE_PYRAMID_H
#define PASCALSTRIANGLE_PYRAMID_H

using namespace std;

class pyramid {
private:
    vector<long long int> dataStructure;
    int num;
public:
    void printPyramid();
    void printLine();
    explicit pyramid(int number):num(number+1){
        dataStructure.push_back(0);
        dataStructure.push_back(1);
    };

};


#endif //PASCALSTRIANGLE_PYRAMID_H
