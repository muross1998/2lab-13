#include <vcl.h>
#pragma hdrstop

#include "MyServer.h"

// Клас Матриця (варіант 9, табл. 14.1)
class Matrix
{
public:
    float a[2][2];

    Matrix(float a11, float a12, float a21, float a22)
    {
        a[0][0] = a11; a[0][1] = a12;
        a[1][0] = a21; a[1][1] = a22;
    }

    float determinant() const
    {
        return a[0][0] * a[1][1] - a[0][1] * a[1][0];
    }

    float scaledSum(float alpha) const
    {
        float sum = 0;
        for (int i = 0; i < 2; i++)
            for (int j = 0; j < 2; j++)
                sum += a[i][j] * alpha;
        return sum;
    }
};

CORBA::Float MatrixImpl::calcDet(CORBA::Float _a11, CORBA::Float _a12, CORBA::Float _a21, CORBA::Float _a22)
{
    Matrix M(_a11, _a12, _a21, _a22);
    return M.determinant();
}

CORBA::Float MatrixImpl::calcScaledSum(CORBA::Float _a11, CORBA::Float _a12, CORBA::Float _a21, CORBA::Float _a22, CORBA::Float _alpha)
{
    Matrix M(_a11, _a12, _a21, _a22);
    return M.scaledSum(_alpha);
}
