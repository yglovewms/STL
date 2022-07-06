#include <iostream>
#include <vector>
#include <map>
//#include "hello.proto"
int main() {
//    std::vector<int> vec;
//    vec.push_back(1);
//    for (int i : vec) {
//        std::cout<<i <<std::endl;
//    }
//    std::cout << "Hello, World!" << std::endl;
//    return 0;
    std::map<std::string, int> map;
    map.insert(std::make_pair("aaa", 10));
    for (auto it = map.begin(); it!=map.end(); it++) {
        std::cout <<"key" <<it->first << " val" <<it->second <<std::endl;
    }
    unsigned long i = map.erase("aaa");
    std::cout << i <<std::endl;


    return 0;
}
