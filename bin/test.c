#include <stdio.h>
#include <stdint.h>
#include <string.h>
#include "jstypes.h"
#include "vm/String.h"
#include "Value.h"

#define JS_SWEPT_CODE_PATTERN 0xA3

template<int N> 
    struct print_size_as_warning
    { 
        char operator()() { return N + 256; } //deliberately causing overflow
    };

int main() {
    int32_t foo1;
    char str1[10];
    sprintf(str1, "%d", sizeof(foo1));
    printf("int32_t: ");
    printf("%s\n", str1);

    uint32_t foo2;
    char str2[10];
    sprintf(str2, "%d", sizeof(foo2));
    printf("uint32_t: ");
    printf("%s\n", str2);

    JSString* foo6;
    char str6[10];
    sprintf(str6, "%d", sizeof(foo6));
    printf("JSString*: ");
    printf("%s\n", str6);

    JS::Symbol* foo8;
    char str8[10];
    sprintf(str8, "%d", sizeof(foo8));
    printf("JSSymbol*: ");
    printf("%s\n", str8);

    JSObject* foo9;
    char str9[10];
    sprintf(str9, "%d", sizeof(foo9));
    printf("JSObject*: ");
    printf("%s\n", str9);

    js::gc::Cell* foo10;
    char str10[10];
    sprintf(str10, "%d", sizeof(foo10));
    printf("js::gc::Cell*: ");
    printf("%s\n", str10);

    void* foo3;
    char str3[10];
    sprintf(str3, "%d", sizeof(foo3));
    printf("void*: ");
    printf("%s\n", str3);

    JSWhyMagic foo11;
    char str11[10];
    sprintf(str11, "%d", sizeof(foo11));
    printf("JSWhyMagic: ");
    printf("%s\n", str11);

    size_t foo4;
    char str4[10];
    sprintf(str4, "%d", sizeof(foo4));
    printf("size_t: ");
    printf("%s\n", str4);

    uintptr_t foo5;
    char str5[10];
    sprintf(str5, "%d", sizeof(foo5));
    printf("uintptr_t: ");
    printf("%s\n", str5);

    JS::Value foo12;
    char str12[10];
    sprintf(str12, "%d", sizeof(foo12));
    printf("Value: ");
    printf("%s\n", str12);

   
}
