/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
using namespace std;
void print_space(int count){
    for(int i=0;i<count;i++)
        cout << " ";
    
}

void print_num(int arr[], int &index, int &start, int &end, bool &reverse){
    cout << arr[index] ;
    if(index == end){ //要迴轉
        reverse = true;
        end--;
    }
    if(index == start && reverse){
        reverse = false;
        start ++;
    }
    
    if(reverse)
        index--;
    else
        index++;
    
}

int num_arr[9] = {1,2,3,4,5,6,7,8,9};


int main()
{
    int size = 0;
    cout << "Input Size\n";
    cin >> size;
    
    int space_size = size/2; //初始空白
    bool reverse = false;
    int index = 0;
    int start_index = 0, end_index = 8;
    int print_count = 1;
    for(int i=0;i<size;i++){ //幾層
        
        print_space(space_size);
        
        for(int j=0;j<print_count;j++){
            print_num(num_arr,index,start_index,end_index,reverse);
            if(j!=print_count-1)
                cout << "*";
            j++;
        }
        
        if((i+1)<(size/2+1)){
            space_size--;
            print_count += 2;
        }
        else{
            space_size++;
            print_count -= 2;
        }

        cout << endl;
        
    }

    return 0;
}
