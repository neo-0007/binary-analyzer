
ulong FUN_006d3fc0(undefined8 param_1,undefined8 param_2,long *param_3,undefined8 param_4,
                  uint param_5)

{
  int iVar1;
  ulong uVar2;
  long *plVar3;
  long *plVar4;
  long in_FS_OFFSET;
  bool bVar5;
  undefined8 local_58 [3];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_006d5320();
  LOCK();
  bVar5 = DAT_009460b0 == 0;
  if (bVar5) {
    DAT_009460b0 = 1;
  }
  UNLOCK();
  if (!bVar5) {
    FUN_00709590(&DAT_009460b0);
  }
  uVar2 = FUN_006ddd30(param_1,param_2,param_3,param_4,param_5);
  if ((int)uVar2 == 2) {
    if (DAT_009460b8 == 0) {
      LOCK();
      UNLOCK();
      uVar2 = 1;
    }
    else {
      local_58[0] = param_2;
      plVar3 = (long *)FUN_0076f840(local_58,&DAT_009460c0,FUN_006d30c0);
      if (plVar3 != (long *)0x0) {
        plVar3 = *(long **)(*plVar3 + 8);
      }
      local_58[0] = param_1;
      plVar4 = (long *)FUN_0076f840(local_58,&DAT_009460c0,FUN_006d30c0);
      if (plVar4 != (long *)0x0) {
        plVar4 = *(long **)(*plVar4 + 8);
      }
      if (((param_5 & 1) == 0) ||
         (((iVar1 = thunk_FUN_00712780(param_1,param_2), iVar1 != 0 &&
           ((plVar4 == (long *)0x0 || (iVar1 = thunk_FUN_00712780(plVar4,param_2), iVar1 != 0)))) &&
          ((plVar3 == (long *)0x0 ||
           ((iVar1 = thunk_FUN_00712780(param_1,plVar3), iVar1 != 0 &&
            ((plVar4 == (long *)0x0 || (iVar1 = thunk_FUN_00712780(plVar4,plVar3), iVar1 != 0)))))))
          ))) {
        uVar2 = FUN_006d3110(param_1,plVar4,param_2,plVar3,param_3,param_4);
        iVar1 = DAT_009460b0;
        LOCK();
        DAT_009460b0 = 0;
        UNLOCK();
        if (1 < iVar1) {
          FUN_00709660(&DAT_009460b0);
          uVar2 = uVar2 & 0xffffffff;
        }
        if ((int)uVar2 == 0) {
          uVar2 = (ulong)(*param_3 == 0);
        }
        goto LAB_006d4035;
      }
      LOCK();
      UNLOCK();
      uVar2 = 0xffffffff;
    }
  }
  else {
    LOCK();
    UNLOCK();
  }
  bVar5 = 1 < DAT_009460b0;
  DAT_009460b0 = 0;
  if (bVar5) {
    DAT_009460b0 = 0;
    FUN_00709660(&DAT_009460b0);
    uVar2 = uVar2 & 0xffffffff;
  }
LAB_006d4035:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00771f60();
}

