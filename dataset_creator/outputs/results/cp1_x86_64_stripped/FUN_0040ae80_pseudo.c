
bool FUN_0040ae80(long param_1,undefined8 param_2)

{
  bool bVar1;
  
  bVar1 = *(long *)(param_1 + 0x10) == 0;
  if (bVar1) {
    *(undefined8 *)(param_1 + 0x10) = param_2;
  }
  return bVar1;
}

