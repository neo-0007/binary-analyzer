
uint smallfelem_is_zero_int(void)

{
  uint uVar1;
  
  uVar1 = smallfelem_is_zero();
  return uVar1 & 1;
}

