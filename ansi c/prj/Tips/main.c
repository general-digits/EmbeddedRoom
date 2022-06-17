#include <stdio.h>
#include <stdlib.h>

void Main__vFunc1(void);
void Main__vFunc2(void);
void Main__vFunc3(void);
void Main__vFunc4(void);
void Main__vFunc5(void);
void Main__vFunc6(void);
void Main__vFunc7(void);
void Main__vFunc8(void);
void Main__vFunc9(void);
void Main__vFunc10(void);

void Main__vFunc1(void)
{
    printf("Hello from function 1 \n");
}
void Main__vFunc2(void)
{
    printf("Hello from function 2\n");
}
void Main__vFunc3(void)
{
    printf("Hello from function 3\n");
}
void Main__vFunc4(void)
{
    printf("Hello from function 4\n");
}
void Main__vFunc5(void)
{
    printf("Hello from function 5\n");
}
void Main__vFunc6(void)
{
    printf("Hello from function 6\n");
}
void Main__vFunc7(void)
{
    printf("Hello from function 7\n");
}
void Main__vFunc8(void)
{
    printf("Hello from function 8\n");
}
void Main__vFunc9(void)
{
    printf("Hello from function 9\n");
}
void Main__vFunc10(void)
{
    printf("Hello from function 10\n");
}

void (* const Main__apFunctionsContainer[])


int main()
{

    unsigned int u8Idx = 0;

    for (u8Idx = 0; u8Idx < 10; u8Idx++)
    {
        Main__apFunctionsContainer[u8Idx]();
    }
    return 0;
}
