
void FUN_00680510(void)

{
  uint uVar1;
  long in_RCX;
  
  uVar1 = *(uint *)(in_RCX + 0x18);
  *(uint *)(in_RCX + 0x18) = uVar1 & 0xffffbfb5 | 0x208;
  FUN_00680210();
  *(uint *)(in_RCX + 0x18) = uVar1;
  return;
}

