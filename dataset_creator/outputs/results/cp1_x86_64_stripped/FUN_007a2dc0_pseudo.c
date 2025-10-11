
bool FUN_007a2dc0(long *param_1)

{
  long *plVar1;
  ulong uVar2;
  long *plVar3;
  ulong uVar4;
  long in_FS_OFFSET;
  bool bVar5;
  
  uVar2 = param_1[1];
  plVar1 = param_1 + 2;
  uVar4 = uVar2 * 2;
  if ((long *)*param_1 != plVar1) {
    FUN_007104f0();
    uVar2 = param_1[1];
  }
  if (uVar4 < uVar2) {
    *(undefined4 *)(in_FS_OFFSET + -0x58) = 0xc;
    param_1[1] = 0x400;
    *param_1 = (long)plVar1;
    return false;
  }
  plVar3 = (long *)FUN_007101b0(uVar4);
  bVar5 = plVar3 == (long *)0x0;
  if (bVar5) {
    uVar4 = 0x400;
    plVar3 = plVar1;
  }
  param_1[1] = uVar4;
  *param_1 = (long)plVar3;
  return !bVar5;
}

