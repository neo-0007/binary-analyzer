
undefined4 FUN_00775590(undefined8 param_1,long *param_2)

{
  uint uVar1;
  int iVar2;
  long lVar3;
  undefined4 uVar4;
  long in_FS_OFFSET;
  long local_28;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  uVar1 = FUN_00775790();
  if (uVar1 == 4) {
LAB_00775640:
    uVar4 = 0xfffffff6;
  }
  else {
    if (uVar1 < 5) {
      if (uVar1 == 0) {
        lVar3 = FUN_007128a0(param_1);
        if (lVar3 != 0) {
          *param_2 = lVar3;
          uVar4 = 0;
          goto LAB_007755d6;
        }
        goto LAB_00775640;
      }
      if (1 < uVar1 - 2) goto LAB_00775603;
    }
    else {
      uVar4 = 0xfffffff5;
      if (uVar1 == 5) goto LAB_007755d6;
LAB_00775603:
      lVar3 = DAT_0094abd8;
      if ((DAT_0094abd8 != 0) ||
         (lVar3 = FUN_007abe10(&DAT_0094abd8,FUN_00775490,&LAB_00775470,0), lVar3 != 0)) {
        local_28 = 0;
        iVar2 = (*(code *)((*(ulong *)(lVar3 + 8) >> 0x11 | *(ulong *)(lVar3 + 8) << 0x2f) ^
                          *(ulong *)(in_FS_OFFSET + 0x30)))(param_1,&local_28,0);
        if (iVar2 == 0) {
          *param_2 = local_28;
          uVar4 = 0;
          goto LAB_007755d6;
        }
        if (iVar2 == -100) goto LAB_00775640;
      }
    }
    uVar4 = 0xffffff97;
  }
LAB_007755d6:
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    FUN_00771f60();
  }
  return uVar4;
}

