
undefined4 FUN_004a8ad0(long *param_1,long param_2)

{
  int iVar1;
  long lVar2;
  
  if ((param_2 != 0) && (iVar1 = FUN_0040ab70(param_2,&DAT_007d039e), iVar1 == 0)) {
    lVar2 = FUN_004a87c0();
    *param_1 = lVar2;
    if (lVar2 == 0) {
      return 0;
    }
    FUN_004a8970(lVar2,param_2);
  }
  return 1;
}

