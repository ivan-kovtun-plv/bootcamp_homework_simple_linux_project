#include <string.h>
#include "DefineOperation.h"

#define STRING_QUANTITY 8
#define OPERATIONS_QUANTITY 4

typedef struct {
    char *str;
    CurrentOperation operation;
} StrToOperationPair;

static const StrToOperationPair table[STRING_QUANTITY] = {
    {"sum", CURRENT_OP_SUM},
    {"+",   CURRENT_OP_SUM},
    {"sub", CURRENT_OP_SUB},
    {"-",   CURRENT_OP_SUB},
    {"mul", CURRENT_OP_MUL},
    {"div", CURRENT_OP_DIV}
};

CurrentOperation defineOperation(char *in) {
    for(int i = 0; i < STRING_QUANTITY; i++) {
        if(!strcmp(in, table[i].str)) {
            return table[i].operation;
        }
    }
    return CURRENT_OP_SUM; // just a hang for error cases
}

static const OperationArgumentsQuantity argQuantitiesTable[OPERATIONS_QUANTITY] = {
    [CURRENT_OP_SUM] = OPERATION_ARGUMENTS_QUANTITY_MANY,
    [CURRENT_OP_SUB] = OPERATION_ARGUMENTS_QUANTITY_TWO,
    [CURRENT_OP_MUL] = OPERATION_ARGUMENTS_QUANTITY_MANY,
    [CURRENT_OP_DIV] = OPERATION_ARGUMENTS_QUANTITY_TWO,
};

OperationArgumentsQuantity getOperationArgumentsQuantity(CurrentOperation op) {
    return argQuantitiesTable[op];
}


