
long FUN_0051b900(void)

{
  int iVar1;
  long lVar2;
  
  if (DAT_00941078 == 0) {
    lVar2 = FUN_00521680(5,1,0x10);
    if ((((lVar2 == 0) || (iVar1 = FUN_005217e0(lVar2,0), iVar1 == 0)) ||
        (iVar1 = FUN_00521800(lVar2,8), iVar1 == 0)) ||
       (((iVar1 = FUN_00521840(lVar2,FUN_0051bc30), iVar1 == 0 ||
         (iVar1 = FUN_00521860(lVar2,FUN_0051bbf0), iVar1 == 0)) ||
        (iVar1 = FUN_00521820(lVar2,0x418), iVar1 == 0)))) {
      FUN_005217c0(lVar2);
      lVar2 = 0;
    }
    DAT_00941078 = lVar2;
    return lVar2;
  }
  return DAT_00941078;
}

