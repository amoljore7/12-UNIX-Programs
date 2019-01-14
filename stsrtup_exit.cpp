void fun();
void sun() ;

#pragma startup fun
#pragma startup sun

#pragma exit sun
#pragma exit fun

int main()
{
printf("\nIn main");
return 0;
}

void fun()
{
printf("\nIn fun");
}

void sun()
{
printf("\nIn sun");
}