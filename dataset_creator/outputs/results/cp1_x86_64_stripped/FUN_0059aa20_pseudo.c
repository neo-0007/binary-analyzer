
undefined8 FUN_0059aa20(undefined4 *param_1,undefined4 param_2)

{
  int iVar1;
  
  iVar1 = FUN_0059a9b0(param_2);
  if (iVar1 != -1) {
    *param_1 = param_2;
    return 1;
  }
  FUN_0051f420();
  FUN_0051f540("../crypto/x509/v3_purp.c",0x65,"X509_PURPOSE_set");
  FUN_0051f8f0(0x22,0x92,0);
  return 0;
}

