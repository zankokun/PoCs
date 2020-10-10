#include <stdio.h>
#include <functional>

template<typename T>
struct SubsciptionId{
    int id;
};


template<typename T>
class SubscribtionEnabled{
    public:
    SubsciptionId<T> Subcribe(std::function<void()>){};

    void UnSubscribe(SubsciptionId<T>);
    private:
    //std::vector<>
};

class First: public SubscribtionEnabled<First> {

};

class Second: public SubscribtionEnabled<Second> {

};

class Three : public SubscribtionEnabled<Three> {

};

int main(){
    First f;
    Second s;
    Three t;
    auto subid1 = f.Subcribe([](){});
    auto subid2 = s.Subcribe([](){});
    auto subid3 = t.Subcribe([](){});
 
    //s.UnSubscribe(subid); <-- error here

    return 0;
}
