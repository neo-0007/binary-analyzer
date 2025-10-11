
undefined8 FUN_00410ee0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  long in_FS_OFFSET;
  undefined8 local_8b8;
  undefined8 uStack_8b0;
  undefined8 local_8a8;
  undefined8 uStack_8a0;
  undefined8 local_898;
  undefined8 local_888;
  undefined8 uStack_880;
  undefined8 local_878;
  undefined8 uStack_870;
  undefined8 local_868;
  undefined8 local_860;
  undefined8 uStack_858;
  undefined8 local_850;
  undefined8 uStack_848;
  undefined8 local_840;
  undefined1 local_838 [2056];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  iVar2 = FUN_004b7bb0(param_3);
  if (iVar2 < 0x4001) {
    iVar1 = iVar2 + 0xe;
    if (-1 < iVar2 + 7) {
      iVar1 = iVar2 + 7;
    }
    iVar2 = thunk_FUN_004b87e0(param_3,local_838,iVar1 >> 3);
    if (-1 < iVar2) {
      FUN_0041dd10(&local_8b8,param_2,local_838,(long)(iVar1 >> 3));
      local_868 = local_898;
      local_888 = local_8b8;
      uStack_880 = uStack_8b0;
      local_878 = local_8a8;
      uStack_870 = uStack_8a0;
      FUN_0041e470(&local_8b8);
      local_860 = local_8b8;
      uStack_858 = uStack_8b0;
      local_840 = local_898;
      local_850 = local_8a8;
      uStack_848 = uStack_8a0;
      uVar3 = FUN_00410cf0(param_1,&local_888);
      goto LAB_00410f1c;
    }
  }
  uVar3 = 0;
LAB_00410f1c:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00771f60();
}

