
undefined ** FUN_00428db0(void)

{
  int iVar1;
  long lVar2;
  undefined **ppuVar3;
  
  iVar1 = FUN_00422340(&DAT_0093fd50,FUN_004283b0);
  if (((iVar1 != 0) && (DAT_0093fd48 != 0)) && (iVar1 = FUN_004222c0(DAT_0093fd60), iVar1 != 0)) {
    ppuVar3 = DAT_0093fd58;
    lVar2 = DAT_0093fd70;
    if ((DAT_0093fd58 == (undefined **)0x0) &&
       ((lVar2 = FUN_0051d730(), lVar2 == 0 ||
        (ppuVar3 = (undefined **)FUN_0051d760(lVar2), ppuVar3 == (undefined **)0x0)))) {
      FUN_0051a270(lVar2);
      DAT_0093fd58 = &PTR_FUN_0093b200;
      ppuVar3 = DAT_0093fd58;
      lVar2 = DAT_0093fd70;
    }
    DAT_0093fd70 = lVar2;
    DAT_0093fd58 = ppuVar3;
    ppuVar3 = DAT_0093fd58;
    FUN_004222e0(DAT_0093fd60);
    return ppuVar3;
  }
  return (undefined **)0x0;
}

