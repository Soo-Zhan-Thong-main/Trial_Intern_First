#include<iostream>
#include<cctype>
#include<string>
#include<vector>

using namespace std;

int main(){
    
    string sentence;
    cout <<"Write a sentence : ";
    vector<pair<char, int>> vowels = {{'a', 0}, {'e', 0}, {'i', 0}, {'o', 0}, {'u', 0}};
    vector<pair<char, int>> counts;
    vector<pair<char, int>> special;
    string longestsentence;
    string identify;
    
    getline(cin, sentence);
 
    for(int iteration; iteration < sentence.size(); iteration++){
        sentence[iteration] = tolower(sentence[iteration]);
    }
 
    for(int count = 0; count < sentence.size(); count++){
        for(int looper = 0; looper < vowels.size(); looper++){
        if(sentence[count] == vowels[looper].first){
            vowels[looper].second++;            
        }
    }
        if(isalpha(sentence[count]) && sentence[count] != 'a' && sentence[count] != 'e' && sentence[count] != 'i' && sentence[count] != 'o' && sentence[count] != 'u'){
            int trut = 0;
            for(int h = 0; h < counts.size(); h++){
                    if(counts[h].first == sentence[count]){
                        counts[h].second++;
                        trut = 1;
                        break;
                    }
            }
                    if(trut != 1){
                        counts.push_back({sentence[count], 1});
                    }
        }
        if(!isalpha(sentence[count])){
            int trut = 0;
            for(int h = 0; h < special.size(); h++){
                    if(special[h].first == sentence[count]){
                        special[h].second++;
                        trut = 1;
                        break;
                    }
            }
                    if(trut != 1){
                        special.push_back({sentence[count], 1});
                    }
        }

    }

for(int lenght = 0; lenght < sentence.size(); lenght++){

        if(sentence[lenght] != ' '){
            identify += sentence[lenght];
        }else if(sentence[lenght] == ' '){
            if(longestsentence.length() < identify.length()){
                longestsentence = identify;
                identify.clear();
            }
        }
        
}

    cout << "The Vowels :" << endl;
    
    for(int addi = 0; addi < vowels.size(); addi++){
        if(vowels[addi].second > 0)
            cout << vowels[addi].first << " : " << vowels[addi].second << endl;
    }
    
    cout << "\n\n\nThe Consonents :" << endl;
    
    for(int addi = 0; addi < counts.size(); addi++){
            if(counts[addi].second > 0)
            cout << counts[addi].first << " : " << counts[addi].second << endl;
    }
    
    cout << "\n\n\nThe Other Characters :" << endl;
    
    for(int addi = 0; addi < special.size(); addi++){
            if(special[addi].second > 0)
            cout << special[addi].first << " : " << special[addi].second << endl;
    }
    
    cout << "\n\nThe longest sentence :  " << longestsentence << endl;
    
    return 0;
}