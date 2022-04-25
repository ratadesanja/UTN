#include <iostream>
#include <math.h>
#include <vector>
#include <stdlib.h>
#include <time.h>

using namespace std;

void getInput(float& a, float& b)
{
    cout << "Ingrese el valor de A: ";
    cin >> a;
    
    cout << "Ingrese el valor de B: ";
    cin >> b;
    
    cout << endl;
}

float getHipotenuse(float a, float b)
{    
    float hipotenuse = sqrt(pow(a, 2) + pow(b, 2));
    return hipotenuse;
}

void problem_1()
{
    cout << endl << "Problema 1" << endl;
    float a, b;
    getInput(a, b);
    float hipotenuse = getHipotenuse(a, b);
    cout << "La hipotenusa de este triangulo es: " << hipotenuse << endl << endl;
}

void problem_2()
{
    cout << endl << "Problema 2" << endl;
    float a, b;
    getInput(a, b);
    if(a > b)
        cout << a << " es mayor que " << b << endl;
    else
        cout << b << " es mayor que " << a << endl;
}

void problem_3()
{ 
    cout << endl << "Problema 3" << endl;
    float a, b;
    getInput(a, b);

    float hipotenuse = getHipotenuse(a, b);
    float side, surface;
    if(hipotenuse < 100.0f)
        side = hipotenuse;
    else
        side = hipotenuse * 2;
    
    surface = pow(side, 2);
    cout << "La superficie del cuadrado es igual a: " << surface << endl;
}

void problem_4()
{   
    srand (time(NULL));
    cout << endl << "Problema 4" << endl;
    bool looping = true;
    float a, b;

    int triangleCounter = 0;
    int bigHipotenuseCounter = 0;
    int smallHipotenuseCounter = 0;

    vector <float> hipotenuses;

    while(looping)
    {
        //getInput(a, b);
        a = rand() % 230 - 2;
        b = rand() % 230 - 2;

        if(a >= 0 && b >= 0)
        {
            float hipotenuse = getHipotenuse(a, b);
            hipotenuses.push_back(hipotenuse);

            triangleCounter++;
            
            if(hipotenuse > 100.0f)
                bigHipotenuseCounter++;
            else if(hipotenuse <= 100.0f)
                smallHipotenuseCounter++;
                
        }
        else
            looping = false;
    }

    float bigHipotenusePercentage = float(bigHipotenuseCounter / triangleCounter) * 100;
    float smallHipotenusePercentage = (smallHipotenuseCounter / triangleCounter) * 100;
    
    float hipotenuseMedian = 0;

    int i = 0;
    for(i; i < hipotenuses.size(); i++)
    {
        hipotenuseMedian += hipotenuses[i];
        cout << hipotenuses[i] << endl;
    }
    hipotenuseMedian = hipotenuseMedian / i;


    cout << "Cantidad de triángulos con Hipotenusas mayores que 100: " << bigHipotenuseCounter << endl;
    cout << "Porcentaje de Hipotenusas mayores que 100: " << bigHipotenusePercentage << "%" << endl << endl;
    
    cout << "Cantidad de triángulos con Hipotenusas menores o iguales que 100: " << smallHipotenuseCounter << endl;
    cout << "Porcentaje de Hipotenusas mayores menores o iguales que 100: " << smallHipotenusePercentage << "%" << endl << endl;
    
    cout << "Promedio del valor de las Hipotenusas: " << hipotenuseMedian << endl;

}

void problem_5()
{
    int a, b;
    cin>>a;
    cin>>b;

    float resultado = pow(a, b);
    cout << resultado << endl;
    /*
    for(int i = 0; i < b; i++)
    {
        resultado = resultado * a;
        cout << resultado << endl;
    }
    */
}


int main()
{
    system("cls");
    //problem_1();
    //problem_2();
    //problem_3();
    //problem_4();
    problem_5();
    


    return 0;
}