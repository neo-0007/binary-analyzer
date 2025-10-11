
undefined8 FUN_00523f90(undefined4 param_1,undefined8 param_2,long param_3,long param_4)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  long in_FS_OFFSET;
  undefined1 auStack_d8 [80];
  long local_88 [11];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  uVar2 = thunk_FUN_00540f20(*(undefined8 *)(param_3 + 0x20));
  if (param_4 == 0) {
    lVar3 = FUN_0042c570();
LAB_00523fd7:
    if ((lVar3 != 0) && (*(int *)(*(long *)(param_3 + 0x30) + 8) == 2)) {
      *(long *)(param_3 + 0x20) = lVar3;
      if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
        uVar2 = FUN_00521e40(param_1,param_2,param_3);
        return uVar2;
      }
      goto LAB_00524075;
    }
  }
  else {
    iVar1 = FUN_0042c3e0(uVar2);
    if (param_4 - 1U < (ulong)(long)iVar1) {
      iVar1 = FUN_0042c490(uVar2,auStack_d8,local_88);
      if (iVar1 != 0) {
        lVar3 = local_88[param_4 - 1U];
        goto LAB_00523fd7;
      }
    }
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return 0;
  }
LAB_00524075:
                    /* WARNING: Subroutine does not return */
  FUN_00771f60();
}

