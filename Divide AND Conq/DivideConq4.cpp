///////////////////////
//  n-QUEEN PROBLEM  //
///////////////////////

// #include<iostream>
// #include<vector>
// using namespace std;

// void printSolution(vector<vector<char> > &board, int n){
//     for(int i=0; i<n; i++){
//         for(int j=0; j<n; j++){
//          cout<<board[i][j]<<" ";   
//         }
//         cout<<endl;
//     }
//     cout<<endl<<endl;
// }

// bool isSafe(int row, int col, vector<vector<char> > &board, int n){
//     int i = row;
//     int j = col;

//     while(j>=0){
//         if(board[i][j-1]=='Q'){
//             return false;
//         }
//         j--;
//     }

//     // upper left diagonal
//     i = row;
//     j = col;
//     while(i>=0 && j>=0){
//         if(board[i][j]=='Q'){
//             return false;
//         }
//         i--;
//         j--;
//     }
//     // upper left diagonal

//     i = row;
//     j = col;
//     while(i<n && j>=0){
//         if(board[i][j]=='Q'){
//             return false;
//         }
//         i++;
//         j--;
//     }
//     return true;
// }

// void solve(vector<vector<char> > &board, int col, int n){
//     if(col>=n){
//         printSolution(board,n);
//         return;
//     }

//     for(int row=0; row<n; row++){
//         if(isSafe(row,col,board,n)){
//             board[row][col] = 'Q';
//             solve(board, col+1, n);
//             board[row][col] = '-';
//         }
//     }
// }
// int main(){
//     int n = 4;
//     vector<vector<char> > board(n, vector<char>(n,'-'));
//     int col = 0;
//     solve(board, col, n);
//     return 0;
// }




/////////////////////////
// USING UNORDERED MAP //
/////////////////////////

#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;

unordered_map<int,bool> rowCheck;
unordered_map<int,bool> upperLeftDiagnolCheck;
unordered_map<int,bool> bottomLeftDiagnolCheck;

void printSolution(vector<vector<char> > &board, int n){
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
         cout<<board[i][j]<<" ";   
        }
        cout<<endl;
    }
    cout<<endl<<endl;
}

bool isSafe(int row, int col, vector<vector<char> > &board, int n){

    if(rowCheck[row] == true )
        return false;
            
    if(upperLeftDiagnolCheck[n-1+col-row] == true)
        return false;
            
    if(bottomLeftDiagnolCheck[row+col] == true)
        return false;

    return true;
}

void solve(vector<vector<char> > &board, int col, int n){
    if(col>=n){
        printSolution(board,n);
        return;
    }

    for(int row=0; row<n; row++){
        if(isSafe(row,col,board,n)){
            board[row][col] = 'Q';
            rowCheck[row] = true;
            upperLeftDiagnolCheck[n-1+col-row] = true;
            bottomLeftDiagnolCheck[row+col] = true;

            solve(board, col+1, n);
            
            board[row][col] = '-';
            rowCheck[row] = false;
            upperLeftDiagnolCheck[n-1+col-row] = false;
            bottomLeftDiagnolCheck[row+col] = false;
        }
    }
}
int main(){
    int n = 4;
    vector<vector<char> > board(n, vector<char>(n,'-'));
    int col = 0;
    solve(board, col, n);
    return 0;
}
