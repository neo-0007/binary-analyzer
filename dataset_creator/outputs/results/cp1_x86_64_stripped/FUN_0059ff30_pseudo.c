
undefined4 * FUN_0059ff30(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)FUN_0041aec0(0x10,"../crypto/x509/x509_lu.c",0x1c0);
  if (puVar1 == (undefined4 *)0x0) {
    FUN_0051f420();
    FUN_0051f540("../crypto/x509/x509_lu.c",0x1c3,"X509_OBJECT_new");
    FUN_0051f8f0(0xb,0xc0100,0);
  }
  else {
    *puVar1 = 0;
  }
  return puVar1;
}

