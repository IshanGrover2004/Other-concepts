
/*  For reference -->   https://www.codespeedy.com/how-to-dynamically-allocate-a-2d-array-in-cpp/
                        https://youtu.be/LlqgWQgm58g */
                        
//how to create a 2D array dynamically
//Input/Output of dynamic 2d array
//memory free kaise karani hai

#include <iostream>
using namespace std;

int main() {

    int row;
    cin >> row;

    int col;
    cin >> col;

    //creating a 2D array
    int** arr = new int*[row];
    for(int i=0; i<row; i++) {
        arr[i] = new int[col];
    }

    //taking input
    for(int i=0; i<row; i++) {
        for(int j=0; j<col; j++) {
            cin >> arr[i][j];
        }
    }

    //taking output
    cout << endl;
    for(int i=0; i<row; i++) {
        for(int j=0; j<col; j++) {
            cout << arr[i][j] << " ";
        } cout << endl;
    }


    //releasing memory
    for(int i=0; i<row; i++) {
        delete [] arr[i];
    }   

    delete []arr;
    
    return 0;
}