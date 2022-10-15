#include <iostream>
#include "BinarySearchTree2.h"
#include "dsexceptions.h"
using namespace std;
int main( )
{
    BinarySearchTree<int> t1,t2,t3,t4;
    int insert_array1[12]={20,15,5,2,10,7,8,25,22,26,28,30};
    int insert_array2[4]={5,6,7,8};
    int insert_array3[10]={9,7,8,4,3,2,10,12,11,13};
    int insert_array4[1]={100};
    int num;
    cout << "Inserting array (1)... " << endl;
    for( int i=0;i<12;i++ )
        t1.insert(insert_array1[i]);
    cout<<endl;
    cout<<" Counting ... "<<endl;
    cout<<endl;
    cout<<" Enter a number that you want to test in the BST {20,15,5,2,10,7,8,25,22,26,28,30}"<<endl;
    cin>>num;
    cout<<t1.countDeep(num);
    cout<<endl;
    cout<<endl;
    cout << "Inserting array (2)... " << endl;
    for( int i=0;i<4;i++ )
        t2.insert(insert_array2[i]);
    cout<<endl;
    cout<<" Counting ... "<<endl;
    cout<<endl;
    cout<<" Enter a number that you want to test in the BST {5,6,7,8}"<<endl;
    cin>>num;
    cout<<t2.countDeep(num);
    cout<<endl;
    cout<<endl;
    cout << "Inserting array (3)... " << endl;
    for( int i=0;i<10;i++ )
        t3.insert(insert_array3[i]);
    cout<<endl;
    cout<<" Counting ... "<<endl;
    cout<<endl;
    cout<<" Enter a number that you want to test in the BST {9,7,8,4,3,2,10,12,11,13}"<<endl;
    cin>>num;
    cout<<t3.countDeep(num);
    cout<<endl;
    cout<<endl;
    cout << "Inserting array (4)... " << endl;
    for( int i=0;i<1;i++ )
        t4.insert(insert_array4[i]);
    cout<<endl;
    cout<<" Counting ... "<<endl;
    cout<<endl;
    cout<<" Enter a number that you want to find in the BST {100}"<<endl;
    cin>>num;
    cout<<t4.countDeep(num)<<endl;
    
}



