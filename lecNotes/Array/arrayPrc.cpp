#include <iostream>
using namespace std;
int main(void)
{
     // array practice (first time)
     //  store same type of datatype , memeory wastage
     //  two types , (a)1-D Array (b)2-D Array

     //  (a)1-D Array,

     //  Q1) printing all elements
     //  int array[]={10,-2,45,56,-3,0};
     //  cout<<"Printing Program of Array"<<endl;
     //  for(int i=0;i<sizeof(array)/sizeof(array[0]);i++)
     //  {
     //      cout<<array[i]<<" ";
     //  }

     //  Q2)Linear Search in an Array
     // first by function
     int array[] = {20, 30, 50, -2, 60};
     int flag;
     cin >> flag;
     int size = sizeof(array) / sizeof(array[0]);
     // bool linearSearch(int c[],int v,int p);
     // if(linearSearch(array,size,flag))
     // {
     //      cout<<"Present";
     // }
     // else{
     //      cout<<"Not Present";
     // }
     // in program itself
     // bool ans = false;
     // for (int i = 0; i < size; i++)
     // {
     //      if (array[i] == flag)
     //      {
     //           // cout<<"Mil gaya bhai"<< endl;
     //           ans = true;
     //           break;
     //      }
     // }
     // if (ans)
     // {
     //      cout << "Mil Gaya";
     // }
     // else
     // {
     //      cout << "Nahi Mils";
     // }

     //Q3) Maximum Number in an Array
      

     return 0;
}

bool linearSearch(int a[], int size, int flag)
{
     for (int i = 0; i < size; i++)
     {
          if (a[i] == flag)
          {
               return true;
               break;
          }
     }
     return false;
}

// bool linearSearch(int b[],int size,int flag)
// {
//      for(int i=0;i<size;i++)
//      {
//           if(b[i]!=flag)
//           {
//                return false;
//           }
//      }
//      return true;
// }