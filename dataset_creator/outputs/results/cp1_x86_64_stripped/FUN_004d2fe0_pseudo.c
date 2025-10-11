
long FUN_004d2fe0(long param_1)

{
  long lVar1;
  int iVar2;
  long lVar3;
  
  lVar3 = FUN_004d5e70();
  if (lVar3 != 0) {
    lVar1 = *(long *)(param_1 + 0x10);
    iVar2 = FUN_00542210(lVar3 + 8,param_1 + 8);
    if (iVar2 == 0) {
      FUN_004d5b70(lVar3);
      return 0;
    }
    if (lVar1 == 0) {
      *(undefined4 *)(lVar3 + 0x68) = *(undefined4 *)(param_1 + 0x68);
    }
    *(long *)(lVar3 + 200) = *(long *)(lVar3 + 200) + 1;
  }
  return lVar3;
}

