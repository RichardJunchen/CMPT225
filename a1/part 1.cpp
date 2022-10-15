#include <iostream>
#include "vector.h"
#include "list.h"
using namespace std;
double elapsed_time( clock_t start, clock_t finish)
{
    return (finish - start)/(double)(CLOCKS_PER_SEC/1000);
}
int main(int argc, char * const argv[])
{
    cout<<" [ Name : Junchen Li ]"<<endl;
    cout<<" [Student ID : 301385486] "<<endl;
    cout<<" [ Login in ID : junchenl] "<<endl;
    cout<<" Program : [part 1 ] "<<endl;
    cout<<" Type of Elements : [double] "<<endl;
    cout<<" Number of Elements : [10000] "<<endl;
    cout<<" Time units : milliseconds "<<endl;
    float time_vector_insertion,time_list_insertion,time_vector_visit,time_list_visit=0;
    clock_t start, finish ;                     // timing for inserting of vector
    start = clock();
    Vector<double> vector_array;
    for (int i=0;i<10000;i++)
    {
        vector_array.push_back(i*2.1);
    }
    finish = clock();
    time_vector_insertion = elapsed_time(start,finish);
    start = clock();                            // timing for inserting of list
    List<double> list_array;
    for (int i=0;i<10000;i++)
    {
        list_array.push_back(i*2.1);
    }
    finish = clock();
    time_list_insertion = elapsed_time(start,finish);
    start = clock();                            // timing for visiting of vector
    vector_array.visitAll();
    finish = clock();
    time_vector_visit = elapsed_time(start,finish);
    start = clock();                            // timing for visiting of list
    list_array.vistiAll();
    finish = clock();
    time_list_visit = elapsed_time(start,finish);
    cout<<" Time for Vector Insertion : [ "<<time_vector_insertion<<" ] "<<endl;
    cout<<" Time for List Insertion : [ "<<time_list_insertion<<" ] "<<endl;
    cout<<" Time for Vector Visiting : [ "<<time_vector_visit<<" ] "<<endl;
    cout<<" Time for List Visiting : [ "<<time_list_visit<<" ] "<<endl;

}
