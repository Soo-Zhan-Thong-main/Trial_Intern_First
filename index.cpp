#include<iostream>
#include<string>
#include<vector>


using namespace std;

void bubblesort(vector<int> arr, string organise){
    int max = arr.size();
    if(organise == "asc"){
        for(int ascen = 0; ascen < max; ascen++){
            for(int ascen2 = 0; ascen2 < max; ascen2++){
                if(arr[ascen] < arr[ascen2]){
                    int y = arr[ascen];
                    arr[ascen] = arr[ascen2];
                    arr[ascen2] = y;
                }
            }
        }
        for(int go = 0; go < max; go++){
            cout << arr[go] << "   ";
        }
    }else if(organise == "desc"){
        for(int ascen = 0; ascen < max; ascen++){
            for(int ascen2 = 0; ascen2 < max; ascen2++){
                if(arr[ascen] > arr[ascen2]){
                    int y = arr[ascen];
                    arr[ascen] = arr[ascen2];
                    arr[ascen2] = y;
                }
            }
        }
        for(int go = 0; go < max; go++){
            cout << arr[go] << "   ";
        }
    }else{
        cout<<"Input invalid" << endl;
    }
}

void searching(vector<int> arr, int x){
    int max = arr.size();
    
    cout << "\nPosition :   ";
    for(int h = 0; h<max; h++){
        if(x == arr[h]){
            cout << h+1 << "   ";
        }
    }
}

int main(){
    
    string order;
    vector<int> numbers;
    int y;
    
    cout<<"Number of inputs (number)?" << endl;
    cin >> y;
    
    for(int incre = 0; incre < y; incre++){
        cout << "Please enter the number (" << incre+1 << "): " << endl;
        int j;
        cin >> j;
        
        numbers.push_back(j);
    }
    
    cout << "\nThe numbers you have input are :  ";
    for(int incre = 0; incre < y; incre++){
        cout << numbers[incre] << "   ";
    }
    
    cout<<"\n\nPlease enter 'asc' for ascending order or 'desc' for descending order." << endl;
    cin>>order;
    
    bubblesort(numbers, order);
    
    char searcher;
    cout << "\n\nDo you want to proceed to search for your value? If yes, press 'y'." << endl;
    cin>>searcher;
    
    if(searcher == 'y'){
        int srch;
        cout <<"\nPlease enter the search value : ";
        cin >> srch;
        searching(numbers , srch);
    }else{
        cout << "\nThank you" << endl;
    }
    
    return 0;
}