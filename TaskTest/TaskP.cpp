#include <omp.h>
#include <stdio.h>
#include <stdlib.h>
#include <iostream>


int main() {
omp_set_num_threads(2);
#pragma omp parallel
	{
		#pragma omp task
		{
			int tid = omp_get_thread_num();
			printf("Hey there, this is thread %d with task 1! \n", tid);
		}

		#pragma omp task
		{
			int tid = omp_get_thread_num();
			printf("Hey there, this is thread %d with task 2! \n", tid);
		}

		#pragma omp task
		{
			int tid = omp_get_thread_num();
			printf("Hey there, this is thread %d with task 3! \n", tid);
		}
		#pragma omp task
		{
			int tid = omp_get_thread_num();
			printf("Hey there, this is thread %d with task 3! \n", tid);
		}
	}
}
