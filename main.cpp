#include <iostream>
#include "deque.h"

using namespace std;
int main() {

   DEQ<int> a;
    a.Add_Front(1);
    a.Add_Front(2);
    a.Add_Rear(0);
    a.Add_Rear(-1);
    a.Add_Front(3);

    a.Remove_Rear();
    a.Remove_Front();

    cout<<a.View_Rear()->data<<endl;
    cout<<a.View_Front()->data<<endl;

    //cout<<a.View_Rear()->data;

    cout<<a.DEQ_Length()<<endl;






    return 0;
}
