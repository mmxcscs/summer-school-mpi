/****************************************************************
 *                                                              *
 * This file has been written as a sample solution to an        *
 * exercise in a course given at the CSCS Summer School.        *
 * The examples are based on the examples in the MPI course of  *
 * the Edinburgh Parallel Computing Centre (EPCC) and           *
 * the High Performance Computing Centre Stuttgart (HLRS).      *
 * It is made freely available with the understanding that      *
 * every copy of this file must include this header and that    *
 * CSCS, HLRS and EPCC take no responsibility for the use       *
 * of the enclosed teaching material.                           *
 *                                                              *
 * Authors: Joel Malard, Alan Simpson,            (EPCC)        *
 *          Rolf Rabenseifner, Traugott Streicher (HLRS)        *
 *          Maxime Martinasso (CSCS)                            *
 *                                                              *
 * Purpose: Measuring bandwidth using a ping-pong               *
 *                                                              *
 * Contents: C-Source                                           *
 *                                                              *
 ****************************************************************/


#include <stdio.h>
#include <mpi.h>

#define PROCESS_A 0
#define PROCESS_B 1
#define PING  17
#define PONG  23

#define NMESSAGES 50
#define INI_SIZE 4
#define FACT_SIZE 64
#define MAX_SIZE 314572800/* 300 Mega */

int main(int argc, char *argv[])
{
    int my_rank;

    int length_of_message;
    double start, finish, time, transfer_time;
    MPI_Status status;
    float buffer[MAX_SIZE];

    MPI_Init(&argc, &argv);

    MPI_Comm_rank(MPI_COMM_WORLD, &my_rank);

    if (my_rank == PROCESS_A) {
        printf("message size\ttransfertime\t\tbandwidth\n");
    }
    length_of_message = INI_SIZE;

    while(length_of_message <= MAX_SIZE) {
        /* Write a loop of NMESSAGES iterations which do a ping pong.
         * Make the size of the message variable and display the bandwidth for each of them.
         * What do you observe? (plot it)
         */

        if (my_rank == PROCESS_A) {
            time = finish - start;

            transfer_time = time / (2 * NMESSAGES);

            printf("%i bytes\t\t%f usec\t\t%f MB/s\n",
                   length_of_message*(int)sizeof(float),
                   transfer_time*1e6,
                   1.0e-6*length_of_message*sizeof(float) / transfer_time);
        }
        length_of_message *= FACT_SIZE;

    }
    MPI_Finalize();
}
