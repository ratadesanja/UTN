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
    cout << endl << "Problema 1 - Hipotenusa de un Triángulo" << endl;
    float a, b;
    getInput(a, b);
    float hipotenuse = getHipotenuse(a, b);
    cout << "La hipotenusa de este triangulo es: " << hipotenuse << endl << endl;
}

void problem_2()
{
    cout << endl << "Problema 2 - Qué número es mayor" << endl;
    float a, b;
    getInput(a, b);
    if(a > b)
        cout << a << " es mayor que " << b << endl;
    else
        cout << b << " es mayor que " << a << endl;
}

void problem_3()
{ 
    cout << endl << "Problema 3 - Superficie de Cuadrado con Hipotenusa" << endl;
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
    cout << endl << "Problema 4 - Hipotenusas de Triángulos" << endl;
    bool looping = true;
    float a, b;

    float triangleCounter = 0;
    float bigHipotenuseCounter = 0;
    float smallHipotenuseCounter = 0;

    vector <float> hipotenuses;

    while(looping)
    {
        float a, b;
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

    
    float bigHipotenusePercentage = bigHipotenuseCounter / triangleCounter * 100;
    float smallHipotenusePercentage = smallHipotenuseCounter / triangleCounter * 100;

    float hipotenuseMedian = 0;

    int i = 0;
    for(i; i < hipotenuses.size(); i++)
    {
        hipotenuseMedian += hipotenuses[i];
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
    cout << endl << "Problema 5 - Potencia con base y exponente" << endl;
    float a, b;
    getInput(a, b);    
    if ((a + b) > 0)
        {
        float resultado = a;
        for(int i = 1; i < b; i++)
            resultado = resultado * a;
   
        cout << resultado << endl;
	}
    else
         cout << "La base o el exponente no deben ser menores a cero!" << endl;
    
}

void problem_6()
{
    cout << endl << "Problema 6 - Factorial de un número" << endl;
    float a;
    cout << "Ingrese el Valor de A: ";
    cin >> a;
    
    if (a >= 0)
    {
        float factorial = 1;
        float result;

        for(int i = 1; i <= a ; i++)
            factorial = i * factorial;

        result = factorial;
        cout << "Resultado: " << result << endl;
    }
}

int main()
{
    //system("cls");
    problem_1();
    problem_2();
    problem_3();
    problem_4();
    problem_5();
    problem_6();
    return 0;
}
