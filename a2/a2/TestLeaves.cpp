#include <iostream>
#include "BinarySearchTree1.h"
#include "dsexceptions.h"
using namespace std;
int main( )
{
    BinarySearchTree<int> t1,t2,t3;
    int ans=0;
    int insert_array1[8]={20,15,5,2,10,25,22,26};
    int insert_array2[4]={6,7,8,9};
    int insert_array3[1]={10};
    for (int i=0;i<8;i++)
        t1.insert(insert_array1[i]);
    cout << "Inserting the first test " << endl;
    cout<<endl;
    cout<<" Print the tree by the In-order way"<<endl;
    t1.printTree( );
    cout<<endl;
    cout<<" Counting ... "<<endl;
    cout<<endl;
    cout<<" The number of leaves for the first tree is "<<endl;
    ans=t1.count_leaves();
    cout<<t1.count_leaves()<<endl;
    cout<<endl;
    cout<<endl;
    for (int i=0;i<4;i++)
           t2.insert(insert_array2[i]);
    cout << "Inserting the second test " << endl;
    cout<<endl;
    cout<<" Print the tree by the In-order way"<<endl;
    t2.printTree( );
    cout<<endl;
    cout<<" Counting ... "<<endl;
    cout<<endl;
    cout<<" The number of leaves for the second tree is "<<endl;
    ans=t2.count_leaves();
    cout<<t2.count_leaves()<<endl;
    cout<<endl;
    cout<<endl;
    for (int i=0;i<1;i++)
            t3.insert(insert_array3[i]);
    cout << "Inserting the second test " << endl;
    cout<<endl;
    cout<<" Print the tree by the In-order way"<<endl;
    t3.printTree( );
    cout<<endl;
    cout<<" Counting ... "<<endl;
    cout<<endl;
    cout<<" The number of leaves for the third tree is "<<endl;
    ans=t3.count_leaves();
    cout<<t3.count_leaves()<<endl;
    cout<<endl;
}
