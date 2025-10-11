
undefined4 FUN_0053d1c0(long *param_1,undefined8 *param_2)

{
  int iVar1;
  long lVar2;
  bool bVar3;
  
  bVar3 = false;
  if (param_2[1] == 0) {
    bVar3 = true;
    lVar2 = FUN_0053e7b0(*param_2);
    param_2[1] = lVar2;
    if (lVar2 == 0) {
      FUN_0051f420();
      FUN_0051f540("../crypto/evp/keymgmt_lib.c",0x25,"evp_keymgmt_util_try_import");
      FUN_0051f8f0(6,0xc0100,0);
      return 0;
    }
  }
  if ((*param_1 != 0) &&
     (iVar1 = FUN_0053ead0(*param_2,param_2[1],*(undefined4 *)(param_2 + 2),param_1), iVar1 == 0)) {
    if (!bVar3) {
      return 0;
    }
    FUN_0053e7e0(*param_2,param_2[1]);
    param_2[1] = 0;
    return 0;
  }
  return 1;
}

