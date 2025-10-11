
undefined8 FUN_007756c0(undefined8 param_1,long *param_2)

{
  undefined8 uVar1;
  long lVar2;
  long in_FS_OFFSET;
  long local_28;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  lVar2 = DAT_0094abd8;
  if (DAT_0094abd8 == 0) {
    lVar2 = FUN_007abe10(&DAT_0094abd8,FUN_00775490,&LAB_00775470,0);
    if (lVar2 != 0) goto LAB_007756ea;
    lVar2 = FUN_007128a0(param_1);
    if (lVar2 != 0) {
      *param_2 = lVar2;
      uVar1 = 0;
      goto LAB_0077571b;
    }
  }
  else {
LAB_007756ea:
    local_28 = 0;
    uVar1 = (*(code *)((*(ulong *)(lVar2 + 0x10) >> 0x11 | *(ulong *)(lVar2 + 0x10) << 0x2f) ^
                      *(ulong *)(in_FS_OFFSET + 0x30)))(param_1,&local_28,0);
    if ((int)uVar1 == 0) {
      *param_2 = local_28;
      goto LAB_0077571b;
    }
    if ((int)uVar1 != -100) {
      uVar1 = 0xffffff97;
      goto LAB_0077571b;
    }
  }
  uVar1 = 0xfffffff6;
LAB_0077571b:
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00771f60();
}

