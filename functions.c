#include <stddef.h>
#include "functions.h"
#include <math.h>

double sum(double x[], size_t len) {
    double result = 0.0f;
    for(size_t i = 0; i < len; i++) {
        result += x[i];
    }
    return result;
}

double sub(double a, double b) {
    return a - b;
}

double mul(double x[], size_t len) {
    double result = 1.0f;
    for(size_t i = 0; i < len; i++) {
        result *= x[i];
    }
    return result;
}

ResultNeedingSuccessCheck divide(double a, double b) {
    double divResult = a / b;
    OperationStatus status = OP_STATUS_SUCCESS;
    if(divResult == HUGE_VAL ||
            divResult == - HUGE_VAL ||
            isnan(divResult)) {
        status = OP_STATUS_ERROR;
    }
    ResultNeedingSuccessCheck result = {status, divResult};
    return result;
}


