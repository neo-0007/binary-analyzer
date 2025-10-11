
undefined4 *
FUN_005ac100(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)FUN_0041ad90(0x28,"../crypto/x509/x_crl.c",0x1e5);
  if (puVar1 == (undefined4 *)0x0) {
    FUN_0051f420();
    FUN_0051f540("../crypto/x509/x_crl.c",0x1e8,"X509_CRL_METHOD_new");
    FUN_0051f8f0(0xb,0xc0100,0);
  }
  else {
    *(undefined8 *)(puVar1 + 2) = param_1;
    *(undefined8 *)(puVar1 + 4) = param_2;
    *(undefined8 *)(puVar1 + 6) = param_3;
    *(undefined8 *)(puVar1 + 8) = param_4;
    *puVar1 = 1;
  }
  return puVar1;
}

