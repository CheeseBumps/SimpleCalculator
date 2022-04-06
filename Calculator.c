#include<stdio.h>
#include<math.h>
void add(float num1,float num2,int count){
    printf("How many digits do you want to add?\n");
    scanf(" %d",&count);
    for (int i = 0; i < count; i++)
    {
        printf("Enter num %d: ",i+1);
        scanf(" %f",&num1);
        num2=num1+num2;

    }
    printf("The sum is: %0.2f",num2);
    
}

void subtract(float num1,float num2,int count){
    printf("How many digits do you want to subtract?\n");
    scanf(" %d",&count);
    for (int i = 0; i < count; i++)
    {
        printf("Enter num %d: ",i+1);
        scanf(" %f",&num1);
        num2=num2-num1;

    }
    printf("The difference is: %0.2f",num2);


}

void multiply(float num1,float num2,int count){
    num1,num2=1;
    printf("How many digits do you want to multiply?\n");
    scanf(" %d",&count);
    for (int i = 0; i < count; i++)
    {
        printf("Enter num %d: ",i+1);
        scanf(" %f",&num1);
        num2=num1*num2;

    }
    printf("The product is: %0.2f",num2);


}

void divide(float num1,float num2,int count){
    printf("Enter numbers in the format: 1st number/2nd number");
    printf("Enter number 1:");
    scanf("%f",&num1);
    printf("Enter number 2:");
    scanf("%f",&num2);
    num2=num1/num2;
    printf("%0.2f",num2);
}

int main(void)
{
    float num1,num2=0;
    int count;
    char reply;
    printf("Do you want to add(a), subtract(s), multiply(m) or divide(d)?\n");
    scanf("%c",&reply);
    switch(reply)
    {
        case 'a':
        add(num1,num2,count);
        break;
        case 's':
        subtract(num1,num2,count);
        break;
        case 'm':
        break;
        case 'd':
        break;

    }   

    return 0;
}