
ulong FUN_006d5550(undefined8 param_1,byte param_2)

{
  ulong uVar1;
  
  uVar1 = (ulong)param_2;
  if ((char)param_2 < '\0') {
    uVar1 = 0xffffffff;
  }
  return uVar1;
}

