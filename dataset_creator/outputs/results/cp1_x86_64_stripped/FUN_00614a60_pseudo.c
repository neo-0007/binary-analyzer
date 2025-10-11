
undefined8 FUN_00614a60(int *param_1,int param_2,int param_3,int param_4,int param_5,int param_6)

{
  int iVar1;
  long lVar2;
  
  if (*param_1 == -1) {
    iVar1 = param_1[0x7e];
    lVar2 = (long)iVar1;
    if (iVar1 == 0x14) goto LAB_00614b30;
    param_1[0x7e] = iVar1 + 1;
    param_1[lVar2 * 6 + 6] = param_2;
    param_1[lVar2 * 6 + 7] = param_3;
  }
  else {
    if (param_6 == 0) {
      FUN_0051f420();
      FUN_0051f540("../crypto/asn1/asn1_gen.c",0x1d4,"append_exp");
      FUN_0051f8f0(0xd,0xb3,0);
      return 0;
    }
    iVar1 = param_1[0x7e];
    lVar2 = (long)iVar1;
    if (iVar1 == 0x14) {
LAB_00614b30:
      FUN_0051f420();
      FUN_0051f540("../crypto/asn1/asn1_gen.c",0x1d9,"append_exp");
      FUN_0051f8f0(0xd,0xae,0);
      return 0;
    }
    param_1[0x7e] = iVar1 + 1;
    param_1[lVar2 * 6 + 6] = *param_1;
    param_1[lVar2 * 6 + 7] = param_1[1];
    param_1[0] = -1;
    param_1[1] = -1;
  }
  param_1[lVar2 * 6 + 8] = param_4;
  param_1[lVar2 * 6 + 9] = param_5;
  return 1;
}

