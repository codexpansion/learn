#include <iostream>
#include <string>
#include <vector>

int main()
{
  setbuf(stdout, NULL);    
    
    
  std::string buffer;
  std::vector<float> numsv;
  do {
        float num;
        printf("numv[%d] = ", (int) numsv.size());
        std::getline(std::cin, buffer);
        if (buffer.size() > 0) {   
            num = std::stof(buffer);
            if (buffer == "10") {break;}
            numsv.push_back(num);
        }
    } while (true);
  
  
   
    
    float sum = 0;
   for (long unsigned int i = 0; i < numsv.size(); i++) {
    if (numsv[i] < 0) { sum +=numsv[i];}
    } 
    
  
    printf ("summ minus = %f", sum);
  
}
