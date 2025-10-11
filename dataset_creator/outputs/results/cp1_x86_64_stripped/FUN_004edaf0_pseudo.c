
int FUN_004edaf0(long param_1)

{
  int iVar1;
  long lVar2;
  
  iVar1 = 0;
  lVar2 = FUN_004b2a70(*(undefined8 *)(param_1 + 0x58));
  if (lVar2 != 0) {
    iVar1 = FUN_004f1750(*(undefined8 *)(param_1 + 0x18),*(undefined8 *)(param_1 + 0x20),
                         *(undefined8 *)(param_1 + 0x28),0,0,lVar2);
    FUN_004b2b50(lVar2);
    if (iVar1 == 1) {
      *(long *)(param_1 + 0x68) = *(long *)(param_1 + 0x68) + 1;
      return 1;
    }
  }
  return iVar1;
}

