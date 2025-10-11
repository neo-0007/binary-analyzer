
void FUN_00690770(long *param_1,int param_2)

{
  uint uVar1;
  
  uVar1 = 0x40;
  if ((param_2 != 8) && (uVar1 = 2, param_2 != 10)) {
    uVar1 = (uint)(param_2 == 0x10) << 3;
  }
  *(uint *)((long)param_1 + *(long *)(*param_1 + -0x18) + 0x18) =
       *(uint *)((long)param_1 + *(long *)(*param_1 + -0x18) + 0x18) & 0xffffffb5 | uVar1;
  return;
}

