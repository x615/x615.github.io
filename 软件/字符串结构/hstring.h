#ifndef HSTRING_H_
#define HSTRING_H_

typedef struct 
{
    /* data */
    char    * ch;       // 若非空串,则按串长分配存储区,否则为null
    int     length;     // 串长
} HString;

typedef enum
{
    INFEASIBLE = -2,
    OVERFLOW,
    ERROR,
    OK,
} Status;


/* - - - - - - - - 函数原型及其说明 - - - - - - - - */

// 生成一个其值等于串常量chars的串T
Status strAssign (HString * t, char * chars);

//返回S的元素个数(串的长度)
int strLength (HString s);

//S大于T则return大于1否则小于1
int strCompare (HString s, HString t);

//将S清理为空串并释放空间
Status clearString (HString * s);

//连接字符串S和字符串T
Status concat(HString * t, HString s1, HString s2);

//返回串s第pos个字符起的长度len的子串
Status subString(HString * sub, HString s, int pos, int len);

//将串s插入至串t的第pos个字符之前
Status strInset(HString* t, int pos, HString s);


#endif// HSTRING_H_