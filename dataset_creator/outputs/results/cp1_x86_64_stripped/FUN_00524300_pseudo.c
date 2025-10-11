
undefined8 FUN_00524300(undefined4 param_1,undefined8 param_2,long param_3,long param_4)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  long in_FS_OFFSET;
  long alStack_88 [11];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  uVar2 = thunk_FUN_00540f20(*(undefined8 *)(param_3 + 0x20));
  if (param_4 == 0) {
    lVar3 = FUN_0042c530(uVar2);
LAB_00524388:
    if ((lVar3 != 0) && (*(int *)(*(long *)(param_3 + 0x30) + 8) == 2)) {
      *(long *)(param_3 + 0x20) = lVar3;
      if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
        uVar2 = FUN_00521e40(param_1,param_2,param_3);
        return uVar2;
      }
      goto LAB_005243f9;
    }
  }
  else {
    if (param_4 == 1) {
      lVar3 = FUN_0042c540(uVar2);
      goto LAB_00524388;
    }
    iVar1 = FUN_0042c3e0(uVar2);
    if (param_4 - 2U < (ulong)(long)iVar1) {
      iVar1 = FUN_0042c400(uVar2,alStack_88);
      if (iVar1 != 0) {
        lVar3 = alStack_88[param_4 - 2U];
        goto LAB_00524388;
      }
    }
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return 0;
  }
LAB_005243f9:
                    /* WARNING: Subroutine does not return */
  FUN_00771f60();
}

