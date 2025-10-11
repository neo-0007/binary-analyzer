
void FUN_004cda00(int param_1)

{
  int iVar1;
  long *plVar2;
  bool bVar3;
  
  FUN_004cd950();
  iVar1 = FUN_00436480(DAT_00940ff0);
  iVar1 = iVar1 + -1;
  if (-1 < iVar1) {
    do {
      plVar2 = (long *)FUN_004364a0(DAT_00940ff0,iVar1);
      if ((((int)plVar2[4] < 1) && (*plVar2 != 0)) || (param_1 != 0)) {
        FUN_00435ec0(DAT_00940ff0,iVar1);
        FUN_004daaa0(*plVar2);
        FUN_0041ad60(plVar2[1],"../crypto/conf/conf_mod.c",0x1bf);
        FUN_0041ad60(plVar2,"../crypto/conf/conf_mod.c",0x1c0);
      }
      bVar3 = iVar1 != 0;
      iVar1 = iVar1 + -1;
    } while (bVar3);
  }
  iVar1 = FUN_00436480(DAT_00940ff0);
  if (iVar1 == 0) {
    FUN_004360b0(DAT_00940ff0);
    DAT_00940ff0 = 0;
    return;
  }
  return;
}

