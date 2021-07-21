#include <iostream>
using namespace std;
int main()
{
    int n;
    cin>> n;
    int arr[n];
    for(int i=0; i<n;i++)
    {
        cin>>arr[i];
    }
    for(int i=1; i<n; i++)
    {
        int current = arr[i];
        int j=i-1;
        while(arr[j] >current && j >=0)
        {
            arr[j+1]=arr[j];
            j--;
        } 
        arr[j+1]=current;
    }
    for(int i = 0; i <n; i++)
    {
        cout<<arr[i]<<"";

    }cout<<endl;
}

/*
    Insertion Sorting
        time  O(n^2)
    적절한 곳에 삽입 하는 개념  stable   

    Insertion Sort

    insert an element from unsorted
    array to its correct position in sorted array


    #include<iostream>  
    using namespace std;  
    int main ()  
    {    
     int myarray[10] = { 12,4,3,1,15,45,33,21,10,2};   
       
        cout<<"\nInput list is \n";
        for(int i=0;i<10;i++)  
        {  
          cout <<myarray[i]<<"\t";  
        }    
        for(int k=1; k<10; k++)   
        {  
         int temp = myarray[k];  
         int j= k-1;  
        while(j>=0 && temp <= myarray[j])  
        {  
            myarray[j+1] = myarray[j];   
            j = j-1;  
        }  
        myarray[j+1] = temp;  
        }  
        cout<<"\nSorted list is \n";
        for(int i=0;i<10;i++)  
        {  
        cout <<myarray[i]<<"\t";  
        }  
    }

*/
/*
    #include <stdio.h>
    int main(void)
    {
        
    }


*/