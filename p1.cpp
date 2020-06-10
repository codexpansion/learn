#include <iostream>
#include <string>

int main()
{
    setbuf(stdout, NULL);    
    
  int size;
  float num;
  
  
  printf ("Array size:");
  scanf("%d", &size);
  
  float *nums = new float[size]; 
    for (int i = 0; i < size; i++) {
        printf ("el[%d]=", i);
        scanf("%f", &num);
        nums[i] = num;
        
    }
    
    
    float sum = 0;
   for (int i = 0; i < size; i++) {
    sum +=nums[i];
    } 
    float avr = sum / size;
  
    printf ("average = %f", avr);
  
}
