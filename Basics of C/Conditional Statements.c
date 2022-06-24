//if....else...else if
if (boolean-expression)
{
  
}
else if (boolean-expression)
{
  
}
else
{
  
}
//////////////////////////////////////////

//switch
int x = GetInt(); //input a number manually
switch(x)
{
  case 1:
    printf("one\n");
    break;
  case 2:
    printf("two\n");
    break;
  default:
    printf("sorry\n");
    break;
}
//the upper one is different from the down one
switch(x)
{
  case 1:
    printf("one\n");
  case 2:
    printf("two\n");
  default:
    printf("sorry\n");
}
////////////////////////////////////////////

//cute trick
int x;
if (boolean-expression)
{
  x = 5
}
else
{
  x = 6
}
// which equals
int x = (boolean-expression) ? 5 : 6;
