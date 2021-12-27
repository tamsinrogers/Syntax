/**
 *  Performs a binary search on an array of numbers
 * 
 * Date: 10/07/2021
 * Name: Nicole Matamoros, Tamsin Rogers, Rayna Hata
 */

#include <iostream>
#include <stdio.h>
#include <stdlib.h>

using namespace std;

int binary_search(int param[], int left, int right, int val){
    if(right >= left){      									// make sure the array is not empty
        int middle =left+ (right - left) /2; 					// get the middle value
                                        						// integer division so will get a valid index
        if(param[middle] == val){         						// if it is the middle digit, return that index
            return middle;
        }
        else if (param[middle]<val)         					// If the mid value is greater than the search value, go down right path
        {
            return binary_search(param, middle+1, right, val);  // right path recursive call
        }
        else{                                                   // if not mid and not down right path, must be down left path (if in the array)
            return binary_search(param, left,middle-1,val);     // left path recursive call
        }                                               
       return -1; 												// if you get to here the item is not in the array.
    }
    return -1;  

}

int main(void){
    int arr[10] = {1,2,3,4,5,6,7,8,9,10}; // our array must be sorted from least to greatest 

    int x = 4;
    int y = 9;
    int z = 5;
    int a = 11;

    int x_search = binary_search(arr, arr[0],arr[9] , x);
    int y_search = binary_search(arr, arr[0], arr[9], y);
    int z_search = binary_search(arr, arr[0], arr[9], z);
    int a_search = binary_search(arr, arr[0], arr[9], a);

    cout<< "The array used is: "; 
    for(int i = 0; i < 10; i++){
        cout << arr[i] <<" ";
    }
    cout<< x << " is found at index "<< x_search;
    cout<< "\n"<< y << " is found at index "<< y_search;
    cout<< "\n"<< z << " is found at index "<< z_search;
    cout<< "\n"<< a << " is found at is "<< a_search << ". This means it is not in the array.";

}