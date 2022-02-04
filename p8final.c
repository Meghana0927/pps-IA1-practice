#include <stdio.h>
struct _complex
{
float real,imaginary;
};
typedef struct _complex Complex;
int get_n()
{
  int n;
  printf("Enter the number: \n");
  scanf("%d",&n);
  return n;
}
Complex input_complex()
{
  Complex c;
  printf("Enter the real part:");
  scanf("%f",&c.real);
  printf("Enter the imaginary part:");
  scanf("%f",&c.imaginary);
  return c;
}
void input_n_complex(int n, Complex c[n])
{
  int i;
  for(i =0;i<n;i++)
	c[i]=input_complex();
}
Complex add(Complex a, Complex b)
{
	Complex c;
	c.real=a.real+b.real;
	c.imaginary=a.imaginary+b.imaginary;
	return c;
}
Complex add_n_complex(int n, Complex c[n])
{
	Complex result;
  int i;
	for(i=0;i<n;i++)
	result=add(result,c[i]);
	return result;
}
void output(int n, Complex c[n], Complex result)
{
  int j;
	for (j=0;j<n-1;j++)
	printf("(%f + %fi) + \n",c[j].real,c[j].imaginary);
	printf("(%f + %fi) =\n",c[n-1].real,c[n-1].imaginary);
	printf("(%f + %fi)\n",result.real,result.imaginary);
}
int main()
{
	int n=get_n();
	Complex c[n];
	input_n_complex(n,c);
	Complex result = add_n_complex(n,c);
	output(n,c,result);
}