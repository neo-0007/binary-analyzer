
long * _dl_resize_dtv(long param_1,long param_2)

{
  long lVar1;
  long *__dest;
  size_t sVar2;
  
  sVar2 = (param_2 + 0x10) * 0x10;
  lVar1 = *(long *)(param_1 + -0x10);
  if (param_1 == 0x9388b0) {
    __dest = (long *)malloc(sVar2);
    if (__dest == (long *)0x0) goto LAB_007803fd;
    sVar2 = (lVar1 + 2) * 0x10;
    memcpy(__dest,_dl_static_dtv,sVar2);
  }
  else {
    __dest = (long *)realloc((void *)(param_1 + -0x10),sVar2);
    if (__dest == (long *)0x0) {
LAB_007803fd:
                    /* WARNING: Subroutine does not return */
      _dl_fatal_printf("cannot allocate memory for thread-local data: ABORT\n");
    }
    sVar2 = (lVar1 + 2) * 0x10;
  }
  *__dest = param_2 + 0xe;
  memset((void *)((long)__dest + sVar2),0,((param_2 + 0xe) - lVar1) * 0x10);
  return __dest + 2;
}

