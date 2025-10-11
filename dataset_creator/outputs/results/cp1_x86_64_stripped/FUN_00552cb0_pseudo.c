
undefined4 FUN_00552cb0(long param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  int iVar3;
  long in_FS_OFFSET;
  undefined4 local_5c;
  undefined8 local_58;
  uint uStack_50;
  uint uStack_4c;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (*(int *)(param_1 + 0x3c) != 0) {
    *(int *)(param_1 + 0x3c) = *(int *)(param_1 + 0x3c) + -1;
    iVar3 = FUN_00552600(param_1,&local_58,param_2);
    if (iVar3 != 0) {
      uVar2 = CONCAT44(uStack_4c,uStack_50);
      uVar1 = *(undefined8 *)(param_1 + 0x20);
      uStack_50 = uStack_50 & 0xffffff7f;
      *(undefined8 *)(param_1 + 0x10) = local_58;
      *(undefined8 *)(param_1 + 0x18) = uVar2;
      uStack_4c = uStack_4c & 0xffffff7f;
      local_5c = param_4;
      iVar3 = FUN_00538a80(uVar1,0,0,0,&local_58,1);
      if (iVar3 != 0) {
        iVar3 = FUN_00535bf0(uVar1,param_3,&local_5c,param_2,local_5c);
        if (iVar3 != 0) {
          *(undefined4 *)(param_1 + 0x38) = 0;
          goto LAB_00552cda;
        }
      }
    }
  }
  param_4 = 0;
LAB_00552cda:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_4;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00771f60();
}

