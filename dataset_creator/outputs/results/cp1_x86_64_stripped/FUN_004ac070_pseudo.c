
undefined8 FUN_004ac070(undefined8 param_1,long param_2,uint param_3)

{
  undefined4 uVar1;
  long lVar2;
  undefined8 uVar3;
  long in_FS_OFFSET;
  int local_24;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  lVar2 = FUN_004abd40(param_1,0x69,0,&local_24);
  if ((lVar2 < 1) || (0x3ff < local_24)) {
    lVar2 = FUN_007607a0(0);
    uVar3 = 0;
    param_2 = param_2 - lVar2;
    if (-1 < param_2) {
      if (param_2 == 0) {
        if (1000 < param_3) {
          param_3 = 1000;
        }
      }
      else if ((ulong)(param_2 * 1000) < (ulong)param_3) {
        param_3 = (int)param_2 * 1000;
      }
      FUN_0076ef70(param_3 * 1000);
      uVar3 = 1;
    }
  }
  else {
    uVar1 = FUN_004ab6d0(param_1,1);
    uVar3 = FUN_004af4f0(local_24,uVar1,param_2);
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00771f60();
}

