
undefined8 FUN_004396e0(undefined1 *param_1,int param_2)

{
  uint uVar1;
  undefined8 uVar2;
  undefined1 *puVar3;
  long in_FS_OFFSET;
  undefined1 local_34 [4];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (7 < param_2) {
    do {
      do {
        uVar1 = FUN_005b0f20(param_1,0);
        if (((uVar1 & 0x40) == 0) || ((uVar1 & 0x7c00) != 0)) goto LAB_00439790;
      } while ((uVar1 & 0x1f) == 0);
      if ((uVar1 & 0x1f) != 8) goto LAB_00439790;
      param_2 = param_2 + -8;
      param_1 = param_1 + 8;
    } while (7 < param_2);
  }
  puVar3 = param_1;
  while( true ) {
    do {
      if ((param_2 + (int)param_1) - (int)puVar3 < 1) {
        FUN_004227b0(local_34,4);
        uVar2 = 1;
        goto LAB_00439792;
      }
      uVar1 = FUN_005b0f20(local_34,3);
      if (((uVar1 & 0x40) == 0) || ((uVar1 & 0x7c00) != 0)) goto LAB_00439790;
    } while ((uVar1 & 0x1f) == 0);
    if ((uVar1 & 0x1f) != 1) break;
    *puVar3 = local_34[0];
    puVar3 = puVar3 + 1;
  }
LAB_00439790:
  uVar2 = 0;
LAB_00439792:
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    FUN_00771f60();
  }
  return uVar2;
}

