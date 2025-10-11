
undefined4 enlarge_userbuf(uint *param_1,long param_2,int param_3)

{
  long lVar1;
  long lVar2;
  void *__src;
  void *__dest;
  long lVar3;
  
  __src = *(void **)(param_1 + 0xe);
  lVar1 = *(long *)(param_1 + 0x10);
  if (param_2 <= lVar1 - (long)__src) {
    return 0;
  }
  lVar2 = *(long *)(param_1 + 8);
  lVar3 = *(long *)(param_1 + 0xc);
  if ((*param_1 & 1) == 0) {
    __dest = malloc(param_2 + 100U);
    if (__dest != (void *)0x0) {
      if (__src != (void *)0x0) {
        memcpy(__dest,__src,lVar1 - (long)__src);
        free(__src);
        param_1[0xe] = 0;
        param_1[0xf] = 0;
      }
      lVar3 = lVar3 - lVar2;
      _IO_setb(param_1,__dest,(long)__dest + param_2 + 100U,1);
      if (param_3 == 0) {
        *(long *)(param_1 + 6) = (long)__dest + (*(long *)(param_1 + 6) - (long)__src);
        *(long *)(param_1 + 2) = (*(long *)(param_1 + 2) - (long)__src) + (long)__dest;
        *(long *)(param_1 + 4) = (*(long *)(param_1 + 4) - (long)__src) + (long)__dest;
        *(undefined8 *)(param_1 + 0xc) = *(undefined8 *)(param_1 + 0x10);
        *(void **)(param_1 + 8) = __dest;
        *(long *)(param_1 + 10) = (long)__dest + (*(long *)(param_1 + 10) - (long)__src);
        if (lVar3 <= param_2) {
          memset((void *)((long)__dest + lVar3),0,param_2 - lVar3);
          return 0;
        }
      }
      else {
        *(void **)(param_1 + 6) = __dest;
        *(long *)(param_1 + 8) = (long)__dest + (*(long *)(param_1 + 8) - (long)__src);
        *(long *)(param_1 + 10) = (long)__dest + (*(long *)(param_1 + 10) - (long)__src);
        *(long *)(param_1 + 0xc) = (long)__dest + (*(long *)(param_1 + 0xc) - (long)__src);
        *(long *)(param_1 + 2) = (long)__dest + (*(long *)(param_1 + 2) - (long)__src);
        *(undefined8 *)(param_1 + 4) = *(undefined8 *)(param_1 + 0x10);
        if (lVar3 <= param_2) {
          memset((void *)((long)__dest + lVar3),0,param_2 - lVar3);
          return 0;
        }
      }
                    /* WARNING: Subroutine does not return */
      __assert_fail("offset >= oldend","strops.c",0xde,"enlarge_userbuf");
    }
  }
  return 1;
}

