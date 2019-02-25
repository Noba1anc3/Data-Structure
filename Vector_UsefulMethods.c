#include <vector>

vector<char> input;

cin>>n;
input.resize(n);//将vector的size调整为n的大小

input.push_back(ch);//将ch推入input

input.size();//求当前input内元素数量

vector<char>::iterator ite = input.begin();//迭代器，用于循环

sort(vec.begin(), vec.end()); // #include <algorithm> 后使用， 排序

vec.erase( unique(vec.begin(), vec.end()), vec.end() );  // 去重
