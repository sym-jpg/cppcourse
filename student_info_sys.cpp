#include <iostream>
#include <string>
using namespace std;

int main () {
    cout << "========Student Score System =========" << endl;
    cout << "1. Add Student" << endl;
    cout << "2. Show All Students" << endl;
    cout << "3. Find Student" << endl;
    cout << "4. Modify Score" << endl;
    cout << "5. Delete Student" << endl;
    cout << "6. Show Statistics" << endl;
    cout << "0. Exit" << endl;
    cout << "Please enter your choice:";   
	int a= 0; 
	int n = 0;
	int m = 0;
	string name[m];
	int score [m];
	string newName[n];
	int newScore[n];
    cin >> a;
    if (a == 1) {
	    string newname;
	    int newscore;
	    cout << "Please input student name:";
	    cin >> newname;
	    for (int i = 0; i < n; i++) {
	        if (name[i] == newname) {
	            cout << "Student already exists." << endl;
	            return 0;
	        }
	    }
	    cout << "Please input student score:";
	    cin >> newscore;
		 if (newscore < 0 || newscore > 100) {
		     cout << "wrong" << endl;
	        return 0;
	    }
		
		for (int i = 0; i < n; i++) {
	    	newName[n] = newname;
	    	newScore[n] = newscore;
	    cout << "Student added successfully." << endl;
	    
	if (n == 0){
        cout << "No student records." << endl;
        return 0;
    }
    cout << "========Student List =========" << endl;
    for (int i = 0; i < n; i++) {
        cout << i + 1 << ". " << newName[i] << "  " << newScore[i] << endl;
    }
}
	}



