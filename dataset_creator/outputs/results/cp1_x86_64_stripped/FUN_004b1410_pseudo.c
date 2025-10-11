
undefined4 FUN_004b1410(int *param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  if (param_1 == (int *)0x0) {
    return 1;
  }
  LOCK();
  iVar1 = *param_1;
  *param_1 = *param_1 + -1;
  UNLOCK();
  if ((iVar1 != 1) && (0 < iVar1 + -1)) {
    return 1;
  }
  uVar2 = FUN_004ab560(*(undefined8 *)(param_1 + 4));
  FUN_00422300(*(undefined8 *)(param_1 + 2));
  FUN_0041ad60(param_1,"../crypto/bio/ossl_core_bio.c",0x34);
  return uVar2;
}

