#include <iostream>
#include <string>
using namespace std;

int add_student(string newname, string* namelist, int n, int newscore, int* scorelist);
void showAllStudents(int n, string* namelist, int* scorelist);
void findandshowstudent(int n,string findname, string* namelist, int* scorelist);
void Modifyscore (int n,string findname, string* namelist, int* scorelist, int revisedscore); 
int deleteStudent(int n,string findname, string* namelist, int* scorelist) ;
void showStatistics(int n, string* namelist, int* scorelist) ;

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
	int a= 1;
	int n = 0;
	int m = 10000;
	int flag = 0;
	string newname;
	int newscore;
	string namelist[m];
	int scorelist[m];
	string findname = "AAA";
	int revisedscore = 0;
	while (a != 0) {
		cin >> a;
		if (a == 1) {
	    	n = add_student(newname, namelist, n, newscore, scorelist);
		}
		else if (a == 2) {
			showAllStudents(n,namelist, scorelist);
		}
		else if (a == 3) {
			findandshowstudent(n, findname, namelist, scorelist);
		}
		else if (a == 4) {
			Modifyscore(n,findname,namelist,scorelist,revisedscore);
		}
		else if (a == 5) {
			n = deleteStudent(n,findname,namelist,scorelist);
		}
		else if (a == 6) {
			showStatistics(n,namelist,scorelist);
		}
	}
	if (a == 0) {
		cout << "Goodbye" << endl;
		exit(0);
	}
    
}

int add_student(string newname, string* namelist, int n, int newscore, int* scorelist){
	cout << "Please input student name:";
	cin >> newname;
	for (int i = 0; i < n; i++) {
		if (namelist[i] == newname) {
			cout << "Student already exists." << endl;
			return n;
		}
	}
	cout << "Please input student score:";
	cin >> newscore;
	if (newscore < 0 || newscore > 100) {
		cout << "wrong" << endl;
		return n;
	}
	namelist[n] = newname;
	scorelist[n] = newscore;
	n = n + 1;
	cout << "Student added successfully." << endl;
	return n;
}

void showAllStudents(int n, string* namelist, int* scorelist) {
	if ( n != 0) {
		for (int i = 0; i < n; i++) {
			cout << i + 1 << "."  <<namelist[i] << " " <<scorelist[i] << endl;
		}
	}
	else {
		cout << "No student records" << endl;
	}
}

void findandshowstudent(int n,string findname, string* namelist, int* scorelist) {
	cin >> findname;
	for (int i = 0; i < n; i++) {
			if (findname == namelist[i]) {
			cout << i + 1 << "."  <<namelist[i] << " " <<scorelist[i] << endl;
			}
			else {
				cout << "studnt not found." << endl;
			}
		}
}



void Modifyscore (int n,string findname, string* namelist, int* scorelist, int revisedscore) {
	cin >> findname ;
	int flag = 0;
	for (int i=0; i<n; i++) {
		if (namelist[i] == findname) {
			flag = 1;
			cout << "Current score:" << scorelist[i] <<endl;
			cin >> revisedscore;
			if (revisedscore<0 || revisedscore >100) {
				cout << "wrong" <<endl;
			}
			else {
				scorelist[i] = revisedscore;
				cout << "Score modified successfully." << endl;
			}
		}
	}
	if (flag == 0) {
		cout << "Student not found"<<endl;
	}
}



int deleteStudent(int n,string findname, string* namelist, int* scorelist) {
	cin >> findname ;
	int flag = 0;
	for (int i=0; i<n; i++) {
		if (namelist[i] == findname) {
			flag = 1;
			int k = i; 
			while (k >= i && k < n) {
				namelist[k] = namelist[k + 1];
				scorelist[k] = scorelist[k + 1];
				k = k + 1;
			}
			cout << "Student deleted successfully" << endl;
			n = n - 1;
			return n;
		}
	}
	if (flag == 0) {
	cout << "Student not found"<<endl;
	}
}



void showStatistics(int n, string* namelist, int* scorelist) {
	 if (n == 0)  {
        cout << "No student records." << endl;
        return;
    }
    int sum = 0;
    int maxscore = scorelist[0];
    int minscore = scorelist[0];
    int pass = 0, fail = 0;
    for (int i = 0; i < n; i++) {
        sum += scorelist[i];
        if (scorelist[i] > maxscore)
            maxscore = scorelist[i];
        if (scorelist[i] < minscore)
            minscore = scorelist[i];
        if (scorelist[i] >= 60)
            pass++;
        else
            fail++;
    }
    double average = 1.0 * sum / n;
    cout << "========== Statistics ==========" << endl;
    cout << "Student count: " << n << endl;
    cout << "Average score: " << average << endl;
    cout << "Highest score: " << maxscore << endl;
    cout << "Lowest score: " << minscore << endl;
    cout << "Pass count: " << pass << endl;
    cout << "Fail count: " << fail << endl;
}