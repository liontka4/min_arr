#include <stdio.h>

int min(int arr[],int len)
{
	int temp = arr[0];
	
    for(int i = 1;i<len;i++)
    {
        if(arr[i] < temp)
            temp = arr[i];
    }
    return temp;
}

int main(int argc, char **argv)
{
int n = 5;
int arr[n];
int res;
for (int i =0; i < n; i++) {
scanf ("%d", &arr[i]);}
res = min(arr, n);
printf("%d\n", res);


    return 0;
}
