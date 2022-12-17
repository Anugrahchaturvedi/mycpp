template <typename t>
class binarytree{
    public:
    t data;
    binarytree * left;
    binarytree * right;
    binarytree(t data){
        this->data=data;
        left=NULL;
        right=NULL;
    }
    ~ binarytree(){
        delete left;
        delete right;
    }
};