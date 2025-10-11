
bool FUN_004eed80(long param_1)

{
  byte *pbVar1;
  
  if ((*(undefined8 **)(param_1 + 0x18) != (undefined8 *)0x0) &&
     (pbVar1 = (byte *)**(undefined8 **)(param_1 + 0x18), pbVar1 != (byte *)0x0)) {
    return (*pbVar1 & 4) == 0;
  }
  return false;
}

