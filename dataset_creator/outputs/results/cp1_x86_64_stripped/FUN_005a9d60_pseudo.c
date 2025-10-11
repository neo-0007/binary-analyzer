
bool FUN_005a9d60(long *param_1,long param_2)

{
  long lVar1;
  
  if ((param_1 != (long *)0x0) && (param_2 != 0)) {
    FUN_004a06b0(*param_1);
    lVar1 = FUN_00424a40(param_2);
    *param_1 = lVar1;
    return lVar1 != 0;
  }
  FUN_0051f420();
  FUN_0051f540("../crypto/x509/x509name.c",0x132,"X509_NAME_ENTRY_set_object");
  FUN_0051f8f0(0xb,0xc0102,0);
  return false;
}

