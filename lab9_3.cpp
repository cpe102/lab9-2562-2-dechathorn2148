//cout << "Number of data = ";
//cout << "Mean = ";
//cout << "Standard deviation = ";
#include <iostream>
#include <fstream>
#include <string>
#include <cstdlib>
#include <cmath>
using namespace std;

int main()
{
	int count = 0;
	float sum = 0;
    float y = 0;
	string textline;
	ifstream source("C:\\Users\\lab314-16\\Desktop\\Lab9\\lab9-2562-2-dechathorn2148\\score.txt");
	while (getline(source,textline))
	{
		cout << textline << "\n";
		sum += atof(textline.c_str());
        y += pow(atof(textline.c_str()),2);
		count++;
	}
	cout << "Number of data = " << count << "\n";
	cout << "Mean = " << sum/count << "\n";
	cout << "Standard deviation = " << sqrt(y/count-pow(sum/count,2));
}
