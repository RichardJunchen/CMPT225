#include <iostream>
#include "AvlTreeB.h"
using namespace std;

    // Test program
int main( )
{
    AvlTree<int> t1,t2,t3,t4;
    int insert_array1[8]={7,4,2,1,5,10,12,11};
    int insert_array2[9]={7,4,2,1,5,12,9,8,14};
    int insert_array3[2]={100,1};
    int insert_array4[8]={5,2,8,1,3,6,10,7};
    for (int i=0;i<8;i++)
    {
        cout<<" Insetring \" " <<insert_array1[i]<<" \" \t "<<endl;
        t1.insert(insert_array1[i]);
        cout<<endl;
    }
    t1.printTree();
    cout<<endl;
    cout<<" Remove \"10\" from the AVL tree one "<<endl;
    t1.remove(10);
    cout<<endl;
    cout<<" Remove \"5\" from the AVL tree one "<<endl;
    t1.remove(5);
    cout<<endl;
    cout<<endl;
    cout<<endl;
    cout<<" The second test of AVL Tree "<<endl;
    for (int i=0;i<9;i++)
    {
        cout<<" Insetring \" " <<insert_array2[i]<<" \" \t "<<endl;
        t2.insert(insert_array2[i]);
        cout<<endl;
    }
    t2.printTree();
    cout<<" Remove \"14\" from the AVL tree two "<<endl;
    t2.remove(14);
    cout<<endl;
    cout<<" Remove \"12\" from the AVL tree two "<<endl;
    t2.remove(12);
    cout<<" At the point of 9, it check and rebalance then return false to the ancestor "<<endl;
    cout<<endl;
    cout<<endl;
    for (int i=0;i<2;i++)
    {
        cout<<" Insetring \" " <<insert_array3[i]<<" \" \t "<<endl;
        t3.insert(insert_array3[i]);
        cout<<endl;
    }
    t3.printTree();
    cout<<endl;
    cout<<" Remove \"100\" from the AVL tree three "<<endl;
    t3.remove(100);
    cout<<endl;
    cout<<" The forth test of AVL Tree "<<endl;
    for (int i=0;i<8;i++)
    {
        cout<<" Insetring \" " <<insert_array4[i]<<" \" \t "<<endl;
        t4.insert(insert_array4[i]);
        cout<<endl;
    }
    t4.printTree();
    cout<<endl;
    cout<<" Remove \"10\" from the AVL tree three "<<endl;
    t4.remove(10);
    cout<<" Because after a rebalance the height get smaller than the original height so it keep going... "<<endl;
    

}
