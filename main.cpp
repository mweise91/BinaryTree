#include <iostream>
#include "binary_tree_node.h"

using namespace std;
using namespace main_savitch_10;

int main() {
    binary_tree_node<int> b1;
    binary_tree_node<int> b2;
    binary_tree_node<int> b3;
    binary_tree_node<int> b4;
    binary_tree_node<int> b5;
    binary_tree_node<int> b6;
    binary_tree_node<int> b7;
    binary_tree_node<int> b8;

    b1.set_data(1);
    b2.set_data(2);
    b3.set_data(3);
    b4.set_data(4);
    b5.set_data(5);
    b6.set_data(6);
    b7.set_data(7);
    b8.set_data(10);

    b1.set_left(&b2);
    b1.set_right(&b3);

    b2.set_left(&b4);
    b2.set_right(&b5);

    b3.set_left(&b6);
    b3.set_right(&b7);

    b7.set_right(&b8);



    cout << "Tree Structure: " << endl;
    print(&b1, 0);
    cout << endl;
    


    cout << "\n\nSize: " << tree_size(&b1);







}



