
#ifndef __QUEUE__

#define __QUEUE__



#define SIZE 50
#define WARPS 7


typedef struct Job_t
{
	unsigned wid;
	unsigned n_threads;
	unsigned base_sp;
    unsigned func_ptr;
    unsigned * x;
    unsigned * y;
    unsigned * z;

} Job;

typedef struct Queue_t
{
    unsigned start_i;
    unsigned end_i;
    unsigned num_j;
    unsigned total_warps;
    unsigned active_warps;
    struct Job_t jobs[SIZE];

} Queue;

Queue q;

void queue_initialize(void);

void queue_enqueue(Job *);

void queue_dequeue(Job *);

int queue_isFull(void);
int queue_isEmpty(void);
int queue_availableWarps();


void func();

#endif