#include "calcBase.hpp"
#include "calcElm.hpp"

class add: public calcBase{
    public:
        add(){
            add::setup(sum, backSum);
        }
};

class mul: public calcBase{
    public:
        mul(){
            mul::setup(mult, backMul);
        }
};
