
undefined8 FUN_0058efc0(undefined8 param_1,undefined8 param_2,long *param_3)

{
  long lVar1;
  undefined8 local_10;
  
  local_10 = param_1;
  lVar1 = FUN_0058ef20(0,&local_10,param_2);
  if (lVar1 != 0) {
    *param_3 = (long)**(int **)(lVar1 + 0x18);
    FUN_0058efa0(lVar1);
    return 1;
  }
  FUN_0051f420();
  FUN_0051f540("../crypto/sm2/sm2_crypt.c",0x4e,"ossl_sm2_plaintext_size");
  FUN_0051f8f0(0x35,0x68,0);
  return 0;
}

