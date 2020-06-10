#include <iostream>
#include <string>
#include <vector>

int main()
{
  setbuf(stdout, NULL);    
  
  float sum = 0;
  int i = 0;
  float num;
  float eps = 0.0001;
  
  std::string buffer;
  
  do {
        
        printf("numv[%d] = ", (int) i);       
        scanf("%f", &num);
        
        
        if (abs(num - 10.0) > eps) {          
            if (num < 0) { sum +=num;}
            i++;
        };
       
    } while (abs(num - 10.0) > eps);
  
  
   
    
    
   
    
  
    printf ("summ minus = %f", sum);
  
}
