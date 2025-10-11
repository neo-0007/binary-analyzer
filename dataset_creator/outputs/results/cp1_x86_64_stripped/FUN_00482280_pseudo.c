
undefined8 FUN_00482280(long param_1,long param_2,undefined8 param_3)

{
  int iVar1;
  undefined8 uVar2;
  
  iVar1 = FUN_0043b840();
  if ((iVar1 != 0) && (param_1 != 0)) {
    if (param_2 == 0) {
      if (*(long *)(param_1 + 0x10) != 0) goto LAB_004822cd;
      FUN_0051f420();
      FUN_0051f540("../providers/implementations/signature/sm2_sig.c",0x8f,"sm2sig_signature_init");
      FUN_0051f8f0(0x39,0x72,0);
    }
    else {
      iVar1 = FUN_004ed9e0(param_2);
      if (iVar1 != 0) {
        FUN_004ed620(*(undefined8 *)(param_1 + 0x10));
        *(long *)(param_1 + 0x10) = param_2;
LAB_004822cd:
        uVar2 = FUN_00481e70(param_1,param_3);
        return uVar2;
      }
    }
  }
  return 0;
}

