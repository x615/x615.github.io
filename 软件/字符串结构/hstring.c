#include "hstring.h"
#include <stdlib.h>
#include <stdio.h>


Status strAssign (HString * t, char * chars)
{
    int i = 0;
    // 释放t原有的空间
    if(t ->ch)
        free(t ->ch);
    // 求chars长度
    while (0 != chars[i])
    {
        i++;
    }
    if(!i)
    {
        t ->ch = NULL;
        t ->length = 0;
    }
    else
    {
        t ->length = i + 1;
        if(!(t ->ch = (char *)malloc(t->length*sizeof(char))))
            exit(OVERFLOW);
        for(int i = 0; i < t ->length; i++)
        {
            t ->ch[i] = chars[i];
        }    
    }
    return OK;
}// strAssign

int strLength (HString s)
{
    return s.length - 1;
}// strLength

int strCompare (HString s, HString t)
{
    for(int i = 0; i < s.length - 1  && i < t.length - 1; i++)
    {
        if(s.ch[i] - t.ch[i])
            return s.ch[i] - t.ch[i];
    }
    return s.length - t.length;
}// strCompare

Status clearString (HString * s)
{
    if(s ->ch)
    {
        free(s ->ch);
        s ->ch = NULL;
    }
    s->length = 0;
    return OK;
}// clearString

// t用来返回s1, s2来接出来的新串
Status concat(HString * t, HString s1, HString s2)
{
    // 释放旧空间
    if(t ->ch)
        free(t ->ch);

    if(!(t ->ch = (char *)malloc(sizeof(char) * (s1.length + s2.length - 1))))
        exit(OVERFLOW);

    for(int i = 0; i < s1.length - 1; i++)
        t ->ch[i] = s1.ch[i];
    
    t ->length = s1.length + s2.length - 1;
    for(int i = 0; i < s2.length; i++)
        t ->ch[s1.length + i - 1] = s2.ch[i];
    return OK;
} //concat

//sub用来返回串s的第pos个字符起长度为len的子串
//1 <= pos <=strLength(s)且0 <= len <=strLength(s) - pos - 1
Status subString(HString * sub, HString s, int pos, int len)
{
    if(pos < 1 || pos > s.length - 1 || len < 0 || len > s.length - pos)
        return ERROR;
    if(sub ->ch)
        free(sub ->ch); // 释放旧空间
    if(!len)
    {
        //空子串
        sub ->ch = NULL;
        sub ->length = 0;
    }
    else
    {
        if(!(sub ->ch = (char *)malloc(sizeof(char) * (len + 1))))
            exit(OVERFLOW);
        for(int i = 0; i < len; i++)
        {
            sub ->ch[i] = s.ch[pos + i - 1];
            sub->ch[i + 1] = '\0';
        }
        sub ->length = len;
    }
    return OK;
}// subString

Status strInset(HString* t, int pos, HString s)
{
    if (pos < 1 || pos > t->length)
    {
        return ERROR;
    }
    if (s.length)
    {
        if (!(t->ch = (char*)realloc(t->ch, sizeof(char)*(t->length + s.length - 1))))
        {
            exit(OVERFLOW);
        }
        for (int i = t->length - 1; i > pos - 2; i--)
        {
            t->ch[i + s.length - 1] = t->ch[i];
        }
        for (int i = pos - 1; i < pos + s.length - 2; i++)
        {
            t->ch[i] = s.ch[i - (pos - 1)];
        }
        t->length = t->length + s.length - 1;
    }
    return OK;
}

