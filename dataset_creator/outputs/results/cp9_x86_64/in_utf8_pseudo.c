
undefined8 in_utf8(ulong param_1,int *param_2)

{
  undefined8 uVar1;
  
  uVar1 = 0xfffffffe;
  if ((param_1 < 0x110000) && (0x7ff < param_1 - 0xd800)) {
    *param_2 = *param_2 + 1;
    uVar1 = 1;
  }
  return uVar1;
}

