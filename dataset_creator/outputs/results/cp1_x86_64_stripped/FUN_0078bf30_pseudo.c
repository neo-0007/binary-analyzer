
byte FUN_0078bf30(long param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  byte bVar2;
  
  if (param_1 == 0) {
    return 0;
  }
  bVar2 = 0;
  do {
    while ((*(byte *)(param_1 + 0x31d) & 0x20) == 0) {
      iVar1 = FUN_0078b640(param_1,param_2,param_3);
      param_1 = *(long *)(param_1 + 0x18);
      bVar2 = bVar2 | iVar1 != 0;
      if (param_1 == 0) {
        return bVar2;
      }
    }
    param_1 = *(long *)(param_1 + 0x18);
  } while (param_1 != 0);
  return bVar2;
}

