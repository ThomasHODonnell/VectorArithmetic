//=======/*
 /*
 * This program computes the dimension, magnitude, addition, subtraction, multiplication, dot product, and string representation of two sets of three vectors.
 * Thomas O'Donnell
 * <pre>
 * Date: 4/21/22
 * Course: CSC 1253 Section #002 <br>
 * Programmig Project #: 4 <br>
 * Instructor: Dr. Duncan <br>
 * File: VectorArithmetic.cpp
 * </pre>
**/
#include <iostream>
#include <cmath>
#include <sstream>
#include <iomanip>
using namespace std;

int dim(const double v[]) {
    return v[0];
}

string vtos(const double v[]){
        stringstream sout;
        sout << "<" << v[1];
        for (int i = 2; (i <= dim(v)); i++)
        sout << ", " << v[i];
        sout << ">";
        return sout.str();
    }

double length(const double v[]){
    double sum = 0;
    for (int i = 1; i <= v[0]; i++)
    sum += pow(v[i], 2);
    return sum;
    }

bool equal(const double v1[], const double v2[]){
	for  (int i = 0; i <= dim(v1); i++){
		if (v1[i] != v2[i]) {
			return false;
		}
	}
			return true;
}

double* add(const double v1[], const double v2[]){
     if (v1[0] != v2[0])
     return nullptr;
     double* result = new double[dim(v1) + 1];
     result[0] = dim(v1);
     for (int i = 1; i <= dim(v1) + 1; i++)
     result[i] = v1[i] + v2[i];
     return result;
}

double* sub(const double v1[], const double v2[]){
    if (v1[0] != v2[0])
    return nullptr;
	double* result = new double[dim(v1) + 1];
	result[0] = dim(v1);
	for (int i = 1; i <= dim(v1) + 1; i++)
	result[i] = v1[i] - v2[i];
	return result;
}

double dot(const double v1[], const double v2[]){
   double sum = 0;
    for (int i = 1; i <= dim(v1) ; i++)
    sum += v1[i] * v2[i];
    return sum;
}

	double* mult(const double v[], double n){
   double* result =  new double[dim(v) + 1];
   result[0] = dim(v);
   for ( int i = 1; i <= dim(v) + 1; i++)
       result[i] = n * v[i];
    	return result;
 }


int main()
{
    int dimension1, dimension2;

    cout << "Enter the dimension of three vectors ->";
    	cin >> dimension1;
        double* v1 = new double[dimension1 + 1];

    v1[0] = dimension1;
    cout << "Enter the coordinates of v1 ->";
    for(int i = 1; i <= dimension1; i++)
    		cin >> v1[i];

    double* v2 = new double[dimension1 + 1];
    v2[0] = dimension1;
    cout << "Enter the coordinates of v2 ->";
    for(int i = 1; i <= dimension1; i++)
    cin >> v2[i];

    double* v3 = new double[dimension1 + 1];
    v3[0] = dimension1;
    cout << "Enter the coordinates of v3 ->";
    for(int i = 1; i <= dimension1; i++)
    cin >> v3[i];
    cout << endl;

    cout << "v1 = " << vtos(v1) << endl;
    cout << "v2 = " << vtos(v2) << endl;
    cout << "v3 = " << vtos(v3) << endl << endl;

    cout << "v1 + v2 = " << vtos(add(v1, v2)) << endl;
    cout << "(v2 + v3) * v1 = " << dot((add(v2, v3)), v1) << endl;
    cout << "|v2 - v3| = " << sqrt(length(sub(v2, v3))) << endl;
    cout << "v1 * v2 = " << dot(v1, v2) << " and " << "|v1||v2| = " << sqrt(length(v1) * length(v2)) << endl;

   // delete[] v1; delete[] v2; delete[] v3;

    cout << "Enter the dimension of three additional vectors ->";
    cin >> dimension2;

    double* v4 = new double[dimension2 + 1];
    v4[0] = dimension2;
    cout << "Enter the coordinates of v4 ->";
    for(int i = 1; i <= dimension2; i++)
    	cin >> v4[i];

    double* v5 = new double[dimension2 + 1];
        v5[0] = dimension2;
        cout << "Enter the coordinates of v5 ->";
        for(int i = 1; i <= dimension2; i++)
        	cin >> v5[i];

    double* v6 = new double[dimension2 + 1];
         v6[0] = dimension2;
         cout << "Enter the coordinates of v6 ->";
         for(int i = 1; i <= dimension2; i++)
          	cin >> v6[i];

    cout << "v4 = " << vtos(v4) << endl;
    cout << "v5 = " << vtos(v5) << endl;
    cout << "v6 = " << vtos(v6) << endl << endl;

    cout << "v4*(v5+v6)";
            if (dot(v4,add(v5,v6)) == (dot(v4,v5)) + (dot(v4,v6)))
                cout << " = ";
            else cout << " <> ";
            cout << "v4*v5 + v4*v6" << endl;

            cout << "(v4+v5)/|v4+v5| = " << vtos(mult(add(v4,v5),1/sqrt(length(add(v4,v5))))) << endl;
            cout << "v5/|v5+v6| + v6/|v5+v6| = " << vtos(add(mult(v5,1/sqrt(length(add(v5,v6)))),mult(v6,1/sqrt(length(add(v5,v6))))));
            cout << endl;
            cout << "(v4+v5)/|v4+v5|";
            if (equal(mult(add(v4,v5),1/length(add(v4,v5))),add(mult(v5,1/length(add(v5,v6))),mult(v6,1/length(add(v5,v6))))))
            cout << " = ";
            else cout << " <> ";
            cout << "v5/|v5+v6| + v6/|v5+v6|" << endl;

      //  delete[] v4; delete[] v5; delete[] v6;

        return 0;
}
