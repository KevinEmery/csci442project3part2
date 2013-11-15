#include "syslib.h"

int sys_sched(endpoint_t p_endpoint)
{
	message m;
	m.m1_i1 = p_endpoint;
	return(_kernel_call(SYS_SCHED, &m));
}
