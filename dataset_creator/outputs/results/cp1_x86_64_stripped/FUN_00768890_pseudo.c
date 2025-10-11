
int * FUN_00768890(char *param_1)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  ulong uVar4;
  long in_FS_OFFSET;
  undefined1 auStack_b8 [24];
  uint local_a0;
  ulong local_80;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  if (*param_1 == '\0') {
    piVar3 = (int *)0x0;
    *(undefined4 *)(in_FS_OFFSET + -0x58) = 2;
  }
  else {
    iVar1 = FUN_0076e620(param_1,0x90800);
    if (iVar1 < 0) {
      piVar3 = (int *)0x0;
    }
    else {
      iVar2 = FUN_0076d7f0(iVar1,auStack_b8);
      if (-1 < iVar2) {
        if ((local_a0 & 0xf000) == 0x4000) {
          uVar4 = local_80;
          if (local_80 < 0x8000) {
            uVar4 = 0x8000;
          }
          if (0x100000 < uVar4) {
            uVar4 = 0x100000;
          }
          piVar3 = (int *)FUN_007101b0(uVar4 + 0x30);
          if (piVar3 == (int *)0x0) {
            FUN_0076e4b0(iVar1);
          }
          else {
            *piVar3 = iVar1;
            piVar3[1] = 0;
            *(ulong *)(piVar3 + 2) = uVar4;
            piVar3[4] = 0;
            piVar3[5] = 0;
            piVar3[6] = 0;
            piVar3[7] = 0;
            piVar3[8] = 0;
            piVar3[9] = 0;
            piVar3[10] = 0;
          }
          goto LAB_00768953;
        }
        *(undefined4 *)(in_FS_OFFSET + -0x58) = 0x14;
      }
      piVar3 = (int *)0x0;
      FUN_0076e4b0(iVar1);
    }
  }
LAB_00768953:
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return piVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00771f60();
}

