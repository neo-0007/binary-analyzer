
bool FUN_005b4190(int *param_1,long param_2,int param_3)

{
  ulong uVar1;
  byte bVar2;
  
  if (((param_1 != (int *)0x0) && (*(long *)(param_1 + 2) != 0)) && (0 < *param_1)) {
    uVar1 = 0;
    while( true ) {
      bVar2 = 0xff;
      if ((int)uVar1 < param_3) {
        bVar2 = ~*(byte *)(param_2 + uVar1);
      }
      bVar2 = bVar2 & *(byte *)(*(long *)(param_1 + 2) + uVar1);
      if (uVar1 == *param_1 - 1) break;
      uVar1 = uVar1 + 1;
      if (bVar2 != 0) {
        return false;
      }
    }
    return bVar2 == 0;
  }
  return true;
}

