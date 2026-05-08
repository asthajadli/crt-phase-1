#include <iostream>
using namespace std;


class area{
    int length;
    int width;
    public:
    area(int l, int w){
        length = l;
        width = w;
    }
    friend void show_area(area b);

};

void show_area(area b){
    cout << "area is: " << b.length * b.width << endl;

}


int main(){
    area a1(10, 5);
    show_area(a1);
    
    
    return 0;


}

