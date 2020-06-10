#include <iostream>
#include <string>
#include <vector>

int main()
{
  setbuf(stdout, NULL);    
  
  float sum = 0;
  int i = 0;
  int num;
  
  
  std::string buffer;
  
  do {
        
        printf("numv[%d] = ", (int) i);       
        scanf("%d", &num);
        
        
        if (num != 10) {          
            if (num < 0) { sum +=num;}
            i++;
        };
       
    } while (num != 10);
  
  
   
    
    
   
    
  
    printf ("summ minus = %f", sum);
  
}
