
undefined8 FUN_007a1810(uint *param_1)

{
  undefined4 uVar1;
  int iVar2;
  long lVar3;
  undefined8 uVar4;
  long in_FS_OFFSET;
  undefined1 auStack_b8 [24];
  uint local_a0;
  undefined8 local_90;
  long local_80;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  if (-1 < (int)param_1[0x1c]) {
    lVar3 = *(long *)(param_1 + 0x36);
    if (0x827 < lVar3 - 0x93f160U) {
      FUN_00703130();
    }
    iVar2 = (**(code **)(lVar3 + 0x90))(param_1,auStack_b8);
    if (-1 < iVar2) {
      if ((local_a0 & 0xf000) == 0x2000) {
        if (7 < ((uint)((ulong)local_90 >> 0x20) & 0xfffff000 | (uint)((ulong)local_90 >> 8) & 0xfff
                ) - 0x88) {
          uVar1 = *(undefined4 *)(in_FS_OFFSET + -0x58);
          iVar2 = FUN_007ab8f0(param_1[0x1c]);
          *(undefined4 *)(in_FS_OFFSET + -0x58) = uVar1;
          if (iVar2 == 0) goto LAB_007a188c;
        }
        *param_1 = *param_1 | 0x200;
      }
LAB_007a188c:
      if (local_80 - 1U < 0x1fff) {
        lVar3 = FUN_007101b0(local_80);
        goto joined_r0x007a1903;
      }
    }
  }
  lVar3 = FUN_007101b0(0x2000);
  local_80 = 0x2000;
joined_r0x007a1903:
  if (lVar3 == 0) {
    uVar4 = 0xffffffff;
  }
  else {
    FUN_007069a0(param_1,lVar3,lVar3 + local_80,1);
    uVar4 = 1;
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00771f60();
}

