
undefined8 FUN_007aafd0(ulong param_1)

{
  int iVar1;
  uint uVar2;
  undefined8 uVar3;
  long in_FS_OFFSET;
  undefined1 auStack_b8 [24];
  uint local_a0;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  iVar1 = FUN_0076d7f0(param_1,auStack_b8);
  if (-1 < iVar1) {
    if ((local_a0 & 0xf000) == 0x4000) {
      uVar2 = FUN_0076e4e0(param_1 & 0xffffffff,3);
      if (uVar2 != 0xffffffff) {
        if ((uVar2 & 3) == 1) {
          *(undefined4 *)(in_FS_OFFSET + -0x58) = 0x16;
          uVar3 = 0;
        }
        else {
          uVar3 = FUN_007689d0(param_1 & 0xffffffff,0,uVar2,auStack_b8);
        }
        goto LAB_007ab03b;
      }
    }
    else {
      *(undefined4 *)(in_FS_OFFSET + -0x58) = 0x14;
    }
  }
  uVar3 = 0;
LAB_007ab03b:
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00771f60();
}

