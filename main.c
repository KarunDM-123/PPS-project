//calculating student's IQ level based on their test performance in logical test
#include<stdio.h>
float logicalknowledge(float test1, float test2) {
   return test1+test2;}
int main(){
    FILE *fp;
    char user[30];
    char pass[50];
    fp=fopen("test result.txt","w");
    
    printf("USERNAME:\n");
    scanf("%s",user);
    
    float test1,test2;
    printf("Enter test 1 marks:");
    scanf("%f",&test1);
    printf("Enter test 2 marks:");
    scanf("%f",&test2);
    float logicalknowledge;
    logicalknowledge = test1+test2;
    printf("YOUR LOGICAL IQ IS: %.2f\n",logicalknowledge);
    if(logicalknowledge<60)
    {
        printf("You are logical IQ level is:Low \n");
        printf("You have to improve alot.");
    }
    else if(logicalknowledge>=60 && logicalknowledge<=70)
    {
        printf("You are logical IQ level is:Average\n");
        printf("You have the ability to perform well.");
 
    }
    else if(logicalknowledge>70 && logicalknowledge<=80)
    {
        printf("You are logical IQ level is:High\n");
        printf("You can become better with more concentration,you have the talent.");
    }
    else if(logicalknowledge>80 && logicalknowledge<=90)
    {
        printf("You are logical IQ level is: Very high\n");
        printf("With little more hardwork you can achieve the best.");
    }
    
    else if(logicalknowledge>90)
    {
        printf("You are logical IQ level is: Extremely high\n");
        printf("EXCELLENT!!!!!! Keep it up.");
    }
    else
    printf("INVALID ENTRY \n TRY AGAIN");
    fprintf(fp,"Logical test performance\n");
    fprintf(fp,"Try to  better yourself always irrespective of the result\n");
    

    fprintf(fp,"%.2f",logicalknowledge);
    fclose(fp);
    return 0;}
    
    
