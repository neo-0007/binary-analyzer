
void __init_sched_fifo_prio(void)

{
  __sched_fifo_max_prio = sched_get_priority_max(1);
  __sched_fifo_min_prio = sched_get_priority_min(1);
  return;
}

