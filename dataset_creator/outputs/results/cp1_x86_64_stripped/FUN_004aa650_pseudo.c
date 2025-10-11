
ulong FUN_004aa650(long param_1,int param_2,long param_3,long param_4)

{
  long *plVar1;
  long lVar2;
  undefined8 uVar3;
  ulong uVar4;
  
  if (param_1 == 0) {
    return 0xffffffffffffffff;
  }
  plVar1 = (long *)FUN_004ab640();
  if (plVar1 == (long *)0x0) {
    uVar4 = 0xffffffffffffffff;
  }
  else {
    if (param_2 == 0x50) {
      if (-1 < param_3) {
        *(int *)(plVar1 + 1) = (int)param_3;
        return 1;
      }
    }
    else {
      if (param_2 == 0x51) {
        return (ulong)*(uint *)(plVar1 + 1);
      }
      if (param_2 == 0x4f) {
        FUN_0041ad60(*plVar1,"../crypto/bio/bf_prefix.c",0xa1);
        if (param_4 != 0) {
          lVar2 = FUN_0041c2c0(param_4,"../crypto/bio/bf_prefix.c",0xa6);
          *plVar1 = lVar2;
          return (ulong)(lVar2 != 0);
        }
        *plVar1 = 0;
        return 1;
      }
      if ((param_2 == 1) || (param_2 == 0x80)) {
        *(undefined4 *)((long)plVar1 + 0xc) = 1;
        lVar2 = FUN_004ac470(param_1);
      }
      else {
        lVar2 = FUN_004ac470(param_1);
      }
      if (lVar2 != 0) {
        uVar3 = FUN_004ac470(param_1);
        uVar4 = FUN_004abd40(uVar3,param_2,param_3,param_4);
        return uVar4;
      }
    }
    uVar4 = 0;
  }
  return uVar4;
}

