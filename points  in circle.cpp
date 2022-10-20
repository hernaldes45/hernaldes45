#include <iostream>

#include <math.h>

using namespace std;



int main()

{



    int x, y, r, f, x2, y2, r2;

    cout << "введите значения x : ";

    cin >> x;

    cout << "введите значения y : ";

    cin >> y;

    cout << "введите значение радуса : ";

    cin >> r;



    x2 = pow(x, 2);

    y2 = pow(y, 2);

    r2 = pow(r, 2);



    f = x2 + y2 - r2;



    if (f < 0)

    {

        cout << "Точка лежит внутри круга";

    }

    else if (f == 0)

    {

        cout << "Точка лежит на круге";

    }

    else if (f > 0)

    {

        cout << "Точка лежит вне круга";

    }

}