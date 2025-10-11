
undefined8 FUN_005bdd20(long param_1)

{
  int iVar1;
  long lVar2;
  
  iVar1 = FUN_006f2830();
  if (iVar1 == 0) {
    lVar2 = FUN_0041ad90(0x8000,"../crypto/async/arch/async_posix.c",0x29);
    *(long *)(param_1 + 0x10) = lVar2;
    if (lVar2 != 0) {
      *(undefined8 *)(param_1 + 0x20) = 0x8000;
      *(undefined8 *)(param_1 + 8) = 0;
      FUN_006f2940(param_1,FUN_004a9650,0);
      return 1;
    }
  }
  else {
    *(undefined8 *)(param_1 + 0x10) = 0;
  }
  return 0;
}

