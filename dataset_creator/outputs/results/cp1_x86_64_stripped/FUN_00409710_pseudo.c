
ulong FUN_00409710(long *param_1,undefined8 param_2,long param_3,uint param_4)

{
  long lVar1;
  int iVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  long in_FS_OFFSET;
  ulong local_28;
  long local_20;
  
  uVar3 = (ulong)param_4;
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  if (*(long *)(*param_1 + 0x78) == 0) {
    if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Could not recover jumptable at 0x00409761. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar3 = (**(code **)(*param_1 + 0x28))(param_1,param_2,param_3,param_4);
      return uVar3;
    }
  }
  else {
    local_28 = 0;
    iVar2 = FUN_004096f0();
    lVar5 = (long)iVar2;
    lVar1 = *param_1;
    if (*(code **)(lVar1 + 0xb8) == (code *)0x0) {
      if (param_3 == 0) {
        if (lVar5 == 1) {
          lVar5 = 0;
        }
        uVar3 = (**(code **)(lVar1 + 0xb0))(param_1[0x15],param_2,&local_28,lVar5);
      }
      else {
        uVar4 = lVar5 + uVar3;
        if (lVar5 == 1) {
          uVar4 = uVar3;
        }
        uVar3 = (**(code **)(lVar1 + 0xa8))(param_1[0x15],param_2,&local_28,uVar4,param_3);
      }
    }
    else {
      uVar4 = lVar5 + uVar3;
      if (lVar5 == 1) {
        uVar4 = uVar3;
      }
      iVar2 = (**(code **)(lVar1 + 0xb8))(param_1[0x15],param_2,&local_28,uVar4,param_3);
      uVar3 = 0xffffffff;
      if (iVar2 != 0) {
        uVar3 = local_28 & 0xffffffff;
      }
    }
    if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
      return uVar3;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_00771f60();
}

