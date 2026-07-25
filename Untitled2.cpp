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
	string newname;
	int newscore;
	string namelist[m];
	int scorelist[m];
	string newnamelist[n];
	int newscorelist[n];
    cin >> a;
    if (a == 1) {
	    cout << "Please input student name:";
	    cin >> newname;
	    for (int i = 0; i < n; i++) {
	        if (namelist[i] == newname) {
	            cout << "Student already exists." << endl;
	            return 0;
	        }
	    }
	    cout << "Please input student score:";
	    cin >> newscore;
	    for (int i = 0; i < n; i++) {
		    if (newscore < 0 || newscore > 100) {
		        cout << "wrong" << endl;
		        return 0;
		    }
		}
		for (int i = 0; i < n; i++) {
	    	newnamelist[n] = newname;
	    	newscorelist[n] = newscore;
		}
		cout << "Student added successfully." << endl;
	}
	
	
	
	if (a == 2) {    
		if (n == 0){
	        cout << "No student records." << endl;
	        return 0;
	    }
	    else {
			cout << "========Student List =========" << endl;
		    for (int i = 0; i < n; i++) {
		        cout << i + 1 << ". " << newnamelist[i] << "  " << newscorelist[i] << endl;
		}
	}
	
	
	if (a == 3) {
		string findstd = "AAA";
		cin >> findstd;
		for (int i = 0; i < n; i++) {
			if (namelist[i] == findstd) {
				cout << "Name:" << namelist[i] << endl;
				cout << "Score:" << scorelist[i] << endl;
			}
			else {
				cout << "Student not found." << endl;
			}
		}
	}
	
	
	
	if (a == 4) {
		string findstd = "AAA";
		cin >> findstd;
		for (int i = 0; i < n; i++) {
			if (namelist[i] == findstd) {
				cout << "Current score:" << scorelist[i] << endl;
				cin >> newscore;
				scorelist[i] = newscore;
				cout << "Score modifird succcessfully.";
			}
			else {
				cout << "Student not found." << endl;
			}
		}
	}
	
	
	if (a == 5) {
		string findstd = "AAA";
		cin >> findstd;
		for (int i = 0; i < n; i++) {
			if (namelist[i] == findstd) {
				namelist[i] = namelist[i + 1];
				scorelist[i] = scorelist[i +1];
			}
			else {
				cout << "Student not found." << endl;
			} 
		}
	}
		
	if (a == 6) {
		double avg = 0;
		int highest = 0;
		int lowest = 0;
		int pass = 0;
		int fail = 0;
		for (int i = 0; i < n; i++){
		    if (scorelist[i] > highest){
		        highest = scorelist[i];
		    }
		    if (scorelist[i] < lowest){
		        lowest = scorelist[i];
		    }
		}
	}
	}