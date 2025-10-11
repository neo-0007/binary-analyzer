
int pthread_once(pthread_once_t *__once_control,__init_routine *__init_routine)

{
  int iVar1;
  
  if ((*__once_control & 2U) != 0) {
    return 0;
  }
  iVar1 = __pthread_once_slow();
  return iVar1;
}

