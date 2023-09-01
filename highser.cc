#include<stdio.h>
void byteoeder()
{
    union
    {
        short value;
        char union_bytes[ sizeof( short ) ];
    }test;
    test.value = 0x102;
    if((test.union_bytes[0] == 1) && (test.union_bytes[ 1 ] == 2))
    {
        printf("big endian\n");
    }
    else if((test.union_bytes[ 0 ] == 2) && (test.union_bytes[ 1 ] == 1))
    {
        printf("little endian\n");
    }
    else{
        printf("unknow..\n");
    }
}
/* 
判断机器是小端字节序还是大端字节序
比如数字1234567890 
大端序就是1234567890
小端序为9078563412
Liunx高性能服务器第70页
*/