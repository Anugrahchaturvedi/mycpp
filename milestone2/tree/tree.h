#include<vector>
using namespace std;
template<typename t>
class treeNodes{
    public:
    t data;
    vector<treeNodes*> children;
    treeNodes(t data){
        this->data=data;
    }
};