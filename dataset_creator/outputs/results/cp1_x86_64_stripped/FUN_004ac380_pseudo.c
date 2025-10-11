
long FUN_004ac380(long param_1,undefined4 *param_2)

{
  int iVar1;
  long lVar2;
  long lVar3;
  
  lVar3 = param_1;
  do {
    lVar2 = param_1;
    iVar1 = FUN_004ab6d0(lVar2,8);
    if (iVar1 == 0) break;
    param_1 = *(long *)(lVar2 + 0x48);
    lVar3 = lVar2;
  } while (*(long *)(lVar2 + 0x48) != 0);
  if (param_2 != (undefined4 *)0x0) {
    *param_2 = *(undefined4 *)(lVar3 + 0x34);
  }
  return lVar3;
}

