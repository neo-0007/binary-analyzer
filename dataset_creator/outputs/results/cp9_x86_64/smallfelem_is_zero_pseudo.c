
long smallfelem_is_zero(ulong *param_1)

{
  ulong uVar1;
  ulong uVar2;
  
  uVar1 = (*param_1 | param_1[1] | param_1[2] | param_1[3]) - 1;
  uVar1 = uVar1 << 0x20 & uVar1;
  uVar1 = uVar1 << 0x10 & uVar1;
  uVar1 = uVar1 << 8 & uVar1;
  uVar1 = uVar1 << 4 & uVar1;
  uVar1 = uVar1 * 4 & uVar1;
  uVar2 = (~*param_1 | param_1[1] ^ 0xffffffff | param_1[2] | param_1[3] ^ 0xffffffff00000001) - 1;
  uVar2 = uVar2 & uVar2 << 0x20;
  uVar2 = uVar2 << 0x10 & uVar2;
  uVar2 = uVar2 << 8 & uVar2;
  uVar2 = uVar2 << 4 & uVar2;
  uVar2 = uVar2 * 4 & uVar2;
  return (long)(uVar2 * 2 & uVar2 | uVar1 * 2 & uVar1) >> 0x3f;
}

