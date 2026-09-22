#include <stdio.h>
int main()
{
    float cp;
    /*cp = cost price*/
    printf("the value of cp : ");
    scanf("%f", &cp);

    float sp;
    /*sp = selling price */
    printf("the value of sp : ");
    scanf("%f", &sp);
    if (sp >= cp)
    {
        float profit = ((sp - cp) / cp) * 100 ;
        printf("profit %f", profit);
    }

        else if(cp>=sp)
        {
            float loss ; 
            loss= ((cp - sp) / cp) * 100 ;
            printf(" loss %f",loss);
        }    

    return 0;
}