
void FUN_00439550(void)

{
  int iVar1;
  long lVar2;
  long lVar3;
  undefined4 *puVar4;
  
  iVar1 = FUN_004389f0();
  if (iVar1 == 0) {
    return;
  }
  lVar2 = FUN_0051a350();
  if (lVar2 == 0) {
    return;
  }
  if (DAT_0093fdb4 == 0) {
    DAT_0093fdb4 = FUN_0051ece0();
  }
  if (DAT_0093fdb0 == 0) {
    FUN_0051dc30(DAT_0093fdb4,&DAT_0093b420);
    DAT_0093fdb0 = 1;
  }
  iVar1 = FUN_0051a780(lVar2,"afalg");
  if ((((iVar1 == 0) || (iVar1 = FUN_0051a7e0(lVar2,"AFALG engine support"), iVar1 == 0)) ||
      (iVar1 = FUN_0051a840(lVar2,&LAB_00439160), iVar1 == 0)) ||
     ((iVar1 = FUN_0051a850(lVar2,FUN_00438750), iVar1 == 0 ||
      (iVar1 = FUN_0051a860(lVar2,&LAB_00439540), iVar1 == 0)))) {
    FUN_00438980(100,0x30d);
  }
  else {
    puVar4 = &DAT_0093b410;
    do {
      lVar3 = FUN_00438770(*puVar4);
      if (lVar3 == 0) {
        FUN_00438980(100,0x318);
        goto LAB_004395ce;
      }
      puVar4 = puVar4 + 1;
    } while (puVar4 != (undefined4 *)&DAT_0093b41c);
    iVar1 = FUN_0051cca0(lVar2,FUN_004388a0);
    if (iVar1 != 0) {
      FUN_0051f000();
      FUN_0051ae30(lVar2);
      FUN_0051a5a0(lVar2);
      FUN_0051f050();
      return;
    }
    FUN_00438980(100,0x31e);
  }
LAB_004395ce:
  FUN_0051a5a0(lVar2);
  return;
}

