#include <stdio.h>
#include <functional>

template<typename T>
struct SubsciptionId{
    int id;
};


template<typename T>
class SubscribtionEnabled{
    public:
    SubsciptionId<T> Subcribe(std::function<void(void)>);

    void UnSubscribe(SubsciptionId<T>);
    private:
    //std::vector<>
};

class First: public SubscribtionEnabled<First> {

};

class Second: public SubscribtionEnabled<Second> {

};


int main(){
    First f;
    Second s;
    auto subid = f.Subcribe([](){});
    //s.UnSubscribe(subid); <-- error here

    return 0;
}