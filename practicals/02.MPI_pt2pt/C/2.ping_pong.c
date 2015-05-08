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
 * Purpose: A ping-pong                                         *
 *                                                              *
 * Contents: C-Source                                           *
 *                                                              *
 ****************************************************************/

#include <stdio.h>
#include <mpi.h>

#define PROCESS_A 0
#define PROCESS_B 1
#define PING  17 //message tag
#define PONG  23 //message tag
#define NMESSAGES 50
#define SIZE  1

/* This code times the average time it takes for 2 processes to exchange a message */

int main(int argc, char *argv[])
{
    int my_rank;

    float buffer[SIZE];

    double start, finish, time;

    MPI_Status status;


    MPI_Init(&argc, &argv);

    MPI_Comm_rank(MPI_COMM_WORLD, &my_rank);

    start = MPI_Wtime();

    /* write a loop of number_of_messages iterations. Within the loop, process A sends a message
     * (ping) to process B. After receiving the message, process B sends a message (pong) to process A
     */

    finish = MPI_Wtime();

    if (my_rank == PROCESS_A) {
        time = finish - start;
        printf("Time for one messsage: %f micro seconds.\n",
               (float)(time / (2 * number_of_messages) * 1e6));
    }

    MPI_Finalize();
}
