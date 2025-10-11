
bool FUN_004a8bf0(long *param_1,long param_2)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  long in_FS_OFFSET;
  bool bVar5;
  undefined8 local_30;
  undefined8 local_28;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  *param_1 = 0;
  local_30 = 0;
  local_28 = 0;
  if ((param_2 == 0) || (iVar1 = FUN_0040ab70(param_2,&DAT_007d039e), iVar1 != 0)) {
    bVar5 = true;
  }
  else {
    iVar1 = FUN_004a8ad0(&local_30,param_2);
    if (iVar1 != 0) {
      uVar2 = FUN_004a8740();
      lVar3 = FUN_004a2560(local_30,uVar2,&local_28);
      if (lVar3 != 0) {
        lVar3 = FUN_004a87c0();
        uVar2 = local_28;
        *param_1 = lVar3;
        if (lVar3 != 0) {
          uVar4 = FUN_004239c0(0x38f);
          FUN_004a8880(*param_1,uVar4,0x10,uVar2);
          local_28 = 0;
        }
      }
    }
    FUN_004a2270(local_28);
    FUN_004a87e0(local_30);
    bVar5 = *param_1 != 0;
  }
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    FUN_00771f60();
  }
  return bVar5;
}

