typedef enum {
    CURRENT_OP_SUM,
    CURRENT_OP_SUB,
    CURRENT_OP_MUL,
    CURRENT_OP_DIV
} CurrentOperation;

typedef enum {
    #if 0
    OPERATION_ARGUMENTS_QUANTITY_ONE,
    // add back when it is needed
    #endif
    OPERATION_ARGUMENTS_QUANTITY_TWO,
    OPERATION_ARGUMENTS_QUANTITY_MANY
} OperationArgumentsQuantity;

CurrentOperation defineOperation(char *in);
/* uses the insert defined key-value table */

OperationArgumentsQuantity getOperationArgumentsQuantity(CurrentOperation op);
/* uses the insert defined table */

