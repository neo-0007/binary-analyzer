
undefined8 FUN_0059e930(long *param_1,undefined8 param_2,undefined4 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  if (*param_1 == 0) {
    lVar2 = FUN_00436410();
    *param_1 = lVar2;
    if (lVar2 == 0) {
      FUN_0051f420(0,param_2,param_3);
      FUN_0051f540("../crypto/x509/x509_cmp.c",0xbb,"ossl_x509_add_cert_new");
      FUN_0051f8f0(0xb,0xc0100,0);
      return 0;
    }
  }
  uVar1 = FUN_0059e7e0();
  return uVar1;
}

