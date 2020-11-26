/**
读取一段输入流， EOF结尾
报告平均每个单词的字母数
不要把空白统计为单词的字母
标题符号也不应该统计， 可以使用ctype.h 系列中的ispunct函数
**/

#include <stdio.h>
#include <ctype.h>

int main(void)
{
    int ch;
    int word_num=0;
    float letter_count=0;
    int in_word=0;

    while((ch=getchar()) != EOF)
    {
        if (isalpha(ch))
        {
            if(in_word==0)
            {
                in_word=1;
                word_num++;
            }
            letter_count++;
        }else
        {
            if(in_word==1)
            {
                in_word=0;
            }
        }
    }
    printf("%f-%d\n", letter_count, word_num);
    printf("%f", letter_count/word_num);
}
