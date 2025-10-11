
undefined8
FUN_0042b1b0(undefined8 *param_1,long *param_2,long *param_3,undefined4 *param_4,undefined4 *param_5
            )

{
  undefined4 uVar1;
  long lVar2;
  undefined8 uVar3;
  long in_FS_OFFSET;
  undefined1 auStack_58 [24];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_004331f0(auStack_58);
  if (param_1 != (undefined8 *)0x0) {
    lVar2 = FUN_004a8b30(*param_1);
    *param_2 = lVar2;
    if (lVar2 != 0) {
      lVar2 = FUN_004a8b30(param_1[4]);
      *param_3 = lVar2;
      if (lVar2 != 0) {
        if (param_1[2] == 0) {
          uVar1 = FUN_004333a0(auStack_58);
          lVar2 = param_1[3];
          *param_4 = uVar1;
        }
        else {
          uVar1 = FUN_0049fa00();
          lVar2 = param_1[3];
          *param_4 = uVar1;
        }
        if (lVar2 == 0) {
          uVar1 = FUN_004333c0(auStack_58);
          *param_5 = uVar1;
          uVar3 = 1;
        }
        else {
          uVar1 = FUN_0049fa00();
          *param_5 = uVar1;
          uVar3 = 1;
        }
        goto LAB_0042b242;
      }
    }
  }
  uVar3 = 0;
LAB_0042b242:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    FUN_00771f60();
  }
  return uVar3;
}

