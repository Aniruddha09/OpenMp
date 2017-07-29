#include <stdio.h>
#include <omp.h>

int main()
 {

  #pragma omp parallel 
  {

    int tid = omp_get_thread_num();    
    printf("The First OpenMp Program!%d\n",tid);
  }
	return 0;

}
