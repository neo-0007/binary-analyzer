
long FUN_0061e4b0(undefined8 param_1,int *param_2)

{
  long lVar1;
  
  if (param_2 == (int *)0x0) {
    lVar1 = 0;
  }
  else {
    lVar1 = 0;
    if (0 < *param_2) {
      lVar1 = FUN_0041ad90((long)(*param_2 + 1),"../crypto/x509/v3_ia5.c",0x22);
      if (lVar1 == 0) {
        FUN_0051f420();
        FUN_0051f540("../crypto/x509/v3_ia5.c",0x23,"i2s_ASN1_IA5STRING");
        FUN_0051f8f0(0x22,0xc0100,0);
      }
      else {
        thunk_FUN_00713a50(lVar1,*(undefined8 *)(param_2 + 2),(long)*param_2);
        *(undefined1 *)(lVar1 + *param_2) = 0;
      }
    }
  }
  return lVar1;
}

