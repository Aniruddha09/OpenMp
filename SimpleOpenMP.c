#include <stdio.h>
#include <omp.h>

int main()
 {

  #pragma omp parallel 
  {
    
    printf("The First OpenMp Program!\n");
  }
	return 0;

}
