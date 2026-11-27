#ifndef MyServerH
#define MyServerH

#include "MatrixServ_s.hh"

class MatrixImpl : public _sk_MatrixModule::_sk_MatrixObj
{
public:
    MatrixImpl(const char *object_name = NULL)
        : _sk_MatrixModule::_sk_MatrixObj(object_name) {}

    CORBA::Float calcDet(CORBA::Float _a11, CORBA::Float _a12, CORBA::Float _a21, CORBA::Float _a22);
    CORBA::Float calcScaledSum(CORBA::Float _a11, CORBA::Float _a12, CORBA::Float _a21, CORBA::Float _a22, CORBA::Float _alpha);
};

#endif
