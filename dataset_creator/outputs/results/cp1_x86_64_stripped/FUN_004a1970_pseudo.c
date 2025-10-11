
undefined4 FUN_004a1970(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  long lVar3;
  
  lVar3 = FUN_004a1850(param_2,1,0,0);
  uVar2 = 0;
  if (lVar3 != 0) {
    *(undefined4 *)(lVar3 + 4) = param_1;
    iVar1 = FUN_004a15b0(lVar3);
    if (iVar1 == 0) {
      FUN_004a17d0(lVar3);
      return 0;
    }
    uVar2 = 1;
  }
  return uVar2;
}

