
uint FUN_007aba10(undefined8 *param_1,undefined8 param_2)

{
  int iVar1;
  uint uVar2;
  ulong uVar3;
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
  iVar1 = FUN_0076d7d0(param_2,auStack_a8);
  if (iVar1 == 0) {
    if ((local_90 & 0xf000) == 0x4000) {
      *param_1 = 0;
      uVar2 = 1;
    }
    else if ((local_90 & 0xf000) == 0x8000) {
      *param_1 = local_78;
      param_1[2] = local_50;
      param_1[3] = uStack_48;
      param_1[1] = local_a0;
      uVar2 = 1;
      param_1[4] = local_40;
      param_1[5] = uStack_38;
    }
    else {
      *param_1 = 0xffffffffffffffff;
      uVar2 = 1;
    }
  }
  else if (*(uint *)(in_FS_OFFSET + -0x58) < 0x29) {
    uVar3 = 0x10000302006 >> ((byte)*(uint *)(in_FS_OFFSET + -0x58) & 0x3f);
    uVar2 = (uint)uVar3 & 1;
    if ((uVar3 & 1) != 0) {
      *param_1 = 0;
    }
  }
  else {
    uVar2 = 0;
  }
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00771f60();
}

