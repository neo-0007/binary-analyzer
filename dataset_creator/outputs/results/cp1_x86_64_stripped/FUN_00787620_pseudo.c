
void FUN_00787620(long *param_1)

{
  int iVar1;
  ulong uVar2;
  ulong uVar3;
  long in_FS_OFFSET;
  
  uVar3 = param_1[0x8e] + *param_1 & -DAT_0093eb18;
  uVar2 = param_1[0x8e] + *param_1 + param_1[0x8f] & -DAT_0093eb18;
  if (uVar3 != uVar2) {
    iVar1 = FUN_0076f0b0(uVar3,uVar2 - uVar3,1);
    if (iVar1 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_0078db10(*(undefined4 *)(in_FS_OFFSET + -0x58),param_1[1],0,
                   "cannot apply additional memory protection after relocation");
    }
  }
  return;
}

