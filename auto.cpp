/*
 * auto.cpp
 *
 *  Created on: 2016年6月3日
 *      Author: John
 */
#include <map>
#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
    map<int, int> mi = { { 1, 1 }, { 2, 3 } };
    for (auto it = mi.begin(); it != mi.end(); it++) {
        cout << "first:" << it->first << ",end" << it->second << endl;
    }

    for(auto it : mi){
        cout << "first:" << it.first << ",end" << it.second << endl;
    }

    decltype(mi) mj;
    cout<<"mj.size()="<<mj.size()<<endl;
    return 0;
}

