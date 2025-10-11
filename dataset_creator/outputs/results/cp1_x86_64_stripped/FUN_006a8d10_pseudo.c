
void FUN_006a8d10(void)

{
  uint uVar1;
  long in_RCX;
  
  uVar1 = *(uint *)(in_RCX + 0x18);
  *(uint *)(in_RCX + 0x18) = uVar1 & 0xffffbfb5 | 0x208;
  FUN_006a8a00();
  *(uint *)(in_RCX + 0x18) = uVar1;
  return;
}

