#include <stdio.h>
#include <string.h>
struct StructureExample
 {
    int intValue;
    char strValue[20];
};


union UnionExample
 {
    int intValue;
    char strValue[20];
};

int main()
 {

    struct StructureExample structVar;
    union UnionExample unionVar;

    structVar.intValue = 10;
    strcpy(structVar.strValue, "Structure");


    unionVar.intValue = 20;
    strcpy(unionVar.strValue, "Union");

    printf("Structure value: %d\n", structVar.intValue);
    printf("Structure string: %s\n", structVar.strValue);

    
    printf("Union value: %d\n", unionVar.intValue);
    printf("Union string: %s\n", unionVar.strValue);

    printf("\nSize of Structure: %lu bytes\n", sizeof(structVar));
    printf("Size of Union: %lu bytes\n", sizeof(unionVar));

    return 0;
}
