
void FUN_006f4a9a(void)

{
  long in_R8;
  long in_R9;
  undefined8 in_SSP;
  
  ShadowStackPush8B(*(ulong *)(in_R8 + -8) & 0xfffffffffffffffe);
  *(undefined8 *)(in_R9 + 0x3a8) = in_SSP;
  return;
}

