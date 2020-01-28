#include<iostream>
#include <string>
using namespace std;

int main()
    {
	int count[5] = {0,0,0,0,0}; //Declare array count for counting A,B,C,D,F and initialize all element = 0
	int i = 0;
	int a = 0;int b = 0;int c = 0;int d = 0;int f = 0;
	cout << "Please input grade of each student (A-F) or input 0 to exit.";
	cout << "\n";
	do{
		string grade;
		cout << "Student [" << i+1 << "]: ";
		cin >> grade; //The loop must be terminated when grade = '0'
		if(grade == "A")
		{ 
			count[0]++;
		}else if(grade == "B") 
		{
			count[1]++;
		}	
		else if(grade == "C")
		{
			count[2]++;
		}
		else if(grade == "D")
		{
			count[3]++;
		}
		else if(grade == "F")
		{
			count[4]++;
		}
		else if(grade == "0")
		{
			break;
		}
		else
		{
			cout << "Wrong input. Please input again." << "\n";
			continue;
		}
		i++;
	}while(true);
	
	
	cout << "In total " << i << " students." << "\n";
	cout << "A = " << count[0] <<", ";
	cout << "B = " << count[1] <<", ";
	cout << "C = " << count[2] <<", ";
	cout << "D = " << count[3] <<", ";
	cout << "F = " << count[4];	
	//	and so on ... for grade = C, D, F	
	return 0;
	}
