
undefined8 FUN_007abb30(undefined8 *param_1,long param_2)

{
  undefined4 uVar1;
  int iVar2;
  undefined8 uVar3;
  long in_FS_OFFSET;
  undefined1 auStack_a8 [8];
  undefined8 local_a0;
  uint local_90;
  undefined8 local_78;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined8 uStack_38;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_2 != 0) {
    uVar1 = FUN_00702290(param_2);
    iVar2 = FUN_0076d7f0(uVar1,auStack_a8);
    uVar3 = 0;
    if (iVar2 != 0) goto LAB_007abb73;
    if ((local_90 & 0xf000) != 0x4000) {
      if ((local_90 & 0xf000) == 0x8000) {
        *param_1 = local_78;
        param_1[2] = local_50;
        param_1[3] = uStack_48;
        param_1[1] = local_a0;
        uVar3 = 1;
        param_1[4] = local_40;
        param_1[5] = uStack_38;
      }
      else {
        *param_1 = 0xffffffffffffffff;
        uVar3 = 1;
      }
      goto LAB_007abb73;
    }
  }
  *param_1 = 0;
  uVar3 = 1;
LAB_007abb73:
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00771f60();
}

