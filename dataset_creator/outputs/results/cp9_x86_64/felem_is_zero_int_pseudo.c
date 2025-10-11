
uint felem_is_zero_int(void)

{
  uint uVar1;
  
  uVar1 = felem_is_zero();
  return uVar1 & 1;
}

