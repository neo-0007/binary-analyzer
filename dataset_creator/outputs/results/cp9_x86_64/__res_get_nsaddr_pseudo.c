
long __res_get_nsaddr(long param_1,uint param_2)

{
  long lVar1;
  ulong uVar2;
  
  if (*(uint *)(param_1 + 0x10) <= param_2) {
                    /* WARNING: Subroutine does not return */
    __assert_fail("n < statp->nscount","res_get_nsaddr.c",0x1a,"__res_get_nsaddr");
  }
  uVar2 = (ulong)param_2;
  if ((*(short *)(uVar2 * 0x10 + 0x14 + param_1) == 0) &&
     (lVar1 = *(long *)(param_1 + 0x218 + uVar2 * 8), lVar1 != 0)) {
    return lVar1;
  }
  return param_1 + 0x14 + uVar2 * 0x10;
}

