
void FUN_007909a0(undefined8 *param_1)

{
  ulong uVar1;
  undefined8 unaff_RBX;
  ulong unaff_RBP;
  undefined8 unaff_R12;
  undefined8 unaff_R13;
  undefined8 unaff_R14;
  undefined8 unaff_R15;
  long in_FS_OFFSET;
  undefined8 in_SSP;
  ulong unaff_retaddr;
  
  *param_1 = unaff_RBX;
  uVar1 = unaff_RBP ^ *(ulong *)(in_FS_OFFSET + 0x30);
  param_1[1] = uVar1 << 0x11 | uVar1 >> 0x2f;
  param_1[2] = unaff_R12;
  param_1[3] = unaff_R13;
  param_1[4] = unaff_R14;
  param_1[5] = unaff_R15;
  uVar1 = (ulong)&stack0x00000008 ^ *(ulong *)(in_FS_OFFSET + 0x30);
  param_1[6] = uVar1 << 0x11 | uVar1 >> 0x2f;
  uVar1 = unaff_retaddr ^ *(ulong *)(in_FS_OFFSET + 0x30);
  param_1[7] = uVar1 << 0x11 | uVar1 >> 0x2f;
  param_1[0xb] = in_SSP;
  FUN_00790a10();
  return;
}

