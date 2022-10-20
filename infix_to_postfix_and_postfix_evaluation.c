/*
  Here, rather than doing infix to postfix conversion alone , we are also doing the
  postfix evaluation that is required with the conversion.
  Here, the data structure used is structure(struct).
*/

#include <stdio.h>
#include <string.h>
#include<ctype.h>
#define MAXSIZE 20
struct lifo
{
	char stack[MAXSIZE];
	int top;
};
typedef struct lifo STACK;
STACK s;

void push(char x)
{
	s.top = s.top + 1;
	s.stack[s.top] = x;
}

char pop()
{
	s.top = s.top - 1;
	return (s.stack[s.top+1]);
}

int precedence(char x)
{
	if (x == '('||x == ')')
	{
		return 0;
	}
	else if (x == '+' || x == '-')
	{
	    return 3;
	}
	else if (x == '*' || x == '/')
	{
		return 5;
	}
	else if (x == '^')
	{
		return 7;
	}
	else
	{
	    return -1;
	}
}

void infixtopostfix(char infix[20],char postfix[20]) 
{
	int i,j=0;
	char symbol;
	push('#');
	for (i=0;i<strlen(infix);i++) 
	{
		symbol=infix[i];
		if (isalpha(symbol))
		{
			postfix[j]=symbol;
			j++;
	    }
	    else 
	    {
			if (symbol=='(')
			{
				push(symbol);
			} 
			else if(symbol == ')')
			{
				while (s.stack[s.top]!='(')
				{
					postfix[j]=pop();
					j++;
				}
				pop();
			} 
			else 
			{
				if (precedence(s.stack[s.top])<precedence(symbol))
				{
					push(symbol);
				} 
				else
				{
					while(precedence(s.stack[s.top])>=precedence(symbol))
					{
						postfix[j]=pop();
						j++;
					}
					push(symbol);
				}
				//end for else
			}
		}
		//end for else
	}
	//end for for
	while (s.stack[s.top]!='#')
	{
		postfix[j]=pop();
		j++;
	}
	postfix[j]='\0';
}

int operation(int a,int b,char x)
{
    if(x == '+')
    {
        return a+b;
    }
    else if(x == '-')
    {
        return a-b;
    }
    else if(x == '*')
    {
        return a*b;
    }
    else if(x == '/')
    {
        return a/b;
    }
    else if(x == '^')
    {
        return a^b;
    }
    else
    {
        return 0;
    }
}
int main() 
{
    int i,x,y,z,n;
    char symbol;
    s.top = -1;
	char infix[20],postfix[20];
	printf("Enter the infix expression: ");
	scanf("%s",infix);
	infixtopostfix(infix,postfix);
	printf("The postfix expression is: ");
	puts((postfix));
    for(i=0;i<strlen(postfix);i++)
    {
        symbol = postfix[i];
        if(isalpha(symbol))
        {
          if (symbol >= 'a' && symbol <= 'z' || symbol >= 'A' && symbol <= 'Z')
		  {
			printf("Enter the value of %c :",symbol);
			scanf("%d",&n);
			push(n);
		  }
		  else
		  {
		    push(symbol);
		  }
        }
		else if(symbol == '+'||symbol == '-'||symbol == '*'||symbol == '/'||symbol =='^')
		{
		    y = pop();
		    x = pop();
			z = operation(x,y,symbol);
			push(z);
		}
	}
	printf("The evaluation output is :%d",s.stack[s.top]);
	return 0;
}