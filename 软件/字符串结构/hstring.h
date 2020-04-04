#ifndef HSTRING_H_
#define HSTRING_H_

typedef struct 
{
    /* data */
    char    * ch;       // ���ǿմ�,�򰴴�������洢��,����Ϊnull
    int     length;     // ����
} HString;

typedef enum
{
    INFEASIBLE = -2,
    OVERFLOW,
    ERROR,
    OK,
} Status;


/* - - - - - - - - ����ԭ�ͼ���˵�� - - - - - - - - */

// ����һ����ֵ���ڴ�����chars�Ĵ�T
Status strAssign (HString * t, char * chars);

//����S��Ԫ�ظ���(���ĳ���)
int strLength (HString s);

//S����T��return����1����С��1
int strCompare (HString s, HString t);

//��S����Ϊ�մ����ͷſռ�
Status clearString (HString * s);

//�����ַ���S���ַ���T
Status concat(HString * t, HString s1, HString s2);

//���ش�s��pos���ַ���ĳ���len���Ӵ�
Status subString(HString * sub, HString s, int pos, int len);

//����s��������t�ĵ�pos���ַ�֮ǰ
Status strInset(HString* t, int pos, HString s);


#endif// HSTRING_H_