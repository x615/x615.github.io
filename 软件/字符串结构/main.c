#include <stdio.h>
#include "hstring.h"

void main()
{
    HString str1, str2;
    str1.ch = NULL;
    str2.ch = NULL;
    strAssign(&str1, "hello");
    strAssign(&str2, "world");
    strInset(&str2, 1, str1);

    printf("%s\n", str1.ch);
    printf("%s\n", str2.ch);

    clearString(&str1);
    clearString(&str2);

}
