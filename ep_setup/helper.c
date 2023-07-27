#include "helper.h"

LPWSTR Utf8Text(LPCCH input)
{
    //获取输入字符串大小
    // int bufSize = strlen(input);

    //获取所需缓冲大小
    int cchSize = MultiByteToWideChar(
        CP_UTF8,
        MB_PRECOMPOSED,
        input,
        -1,
        NULL,
        0
    );

    LPWSTR output = (wchar_t*)malloc(cchSize*sizeof(wchar_t));

    MultiByteToWideChar(
        CP_UTF8,
        MB_PRECOMPOSED,
        input,
        -1,
        output,
        cchSize
    );

    return output;
}
