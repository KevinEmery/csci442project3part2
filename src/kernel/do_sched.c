#include "kernel/system.h"
#include <minix/endpoint.h>

int do_sched(struct proc * caller, message *m_ptr)
{
	//m_ptr.m1_i1
	// Look at do_qtab (James wrote this, uses en/dequeue)
	return(OK);
}
