
long * FUN_006c3dd0(long *param_1,ulong param_2,undefined4 param_3)

{
  char cVar1;
  long lVar2;
  
  lVar2 = FUN_006c3c40(param_3);
  if ((lVar2 != 0) && (cVar1 = FUN_006c3d30(param_1), cVar1 == '\0')) {
    lVar2 = FUN_006fd380(param_2 & 0xffffffff,lVar2);
    *param_1 = lVar2;
    if (lVar2 != 0) {
      *(undefined1 *)(param_1 + 1) = 1;
      if ((int)param_2 != 0) {
        return param_1;
      }
      FUN_006fe7c0(lVar2,0,2,0);
      return param_1;
    }
  }
  return (long *)0x0;
}

