
undefined4 FUN_00537bb0(long *param_1,long *param_2)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  
  if ((param_2 == (long *)0x0) || (lVar2 = *param_2, lVar2 == 0)) {
    FUN_0051f420();
    FUN_0051f540("../crypto/evp/evp_enc.c",0x56f,"EVP_CIPHER_CTX_copy");
    FUN_0051f8f0(6,0x6f,0);
    return 0;
  }
  if (*(long *)(lVar2 + 0x78) != 0) {
    if (*(long *)(lVar2 + 200) == 0) {
      FUN_0051f420();
      uVar3 = 0x577;
    }
    else {
      FUN_00537a80();
      lVar2 = param_2[1];
      *param_1 = *param_2;
      param_1[1] = lVar2;
      lVar2 = param_2[3];
      param_1[2] = param_2[2];
      param_1[3] = lVar2;
      lVar2 = param_2[5];
      param_1[4] = param_2[4];
      param_1[5] = lVar2;
      lVar2 = param_2[7];
      param_1[6] = param_2[6];
      param_1[7] = lVar2;
      lVar2 = param_2[9];
      param_1[8] = param_2[8];
      param_1[9] = lVar2;
      lVar2 = param_2[0xb];
      param_1[10] = param_2[10];
      param_1[0xb] = lVar2;
      lVar2 = param_2[0xd];
      param_1[0xc] = param_2[0xc];
      param_1[0xd] = lVar2;
      lVar2 = param_2[0xf];
      param_1[0xe] = param_2[0xe];
      param_1[0xf] = lVar2;
      lVar2 = param_2[0x11];
      param_1[0x10] = param_2[0x10];
      param_1[0x11] = lVar2;
      lVar2 = param_2[0x13];
      param_1[0x12] = param_2[0x12];
      param_1[0x13] = lVar2;
      lVar2 = param_2[0x15];
      param_1[0x14] = param_2[0x14];
      param_1[0x15] = lVar2;
      lVar2 = param_2[0x16];
      param_1[0x15] = 0;
      param_1[0x16] = lVar2;
      if ((param_2[0x16] != 0) && (iVar1 = FUN_005379a0(), iVar1 == 0)) {
        param_1[0x16] = 0;
        return 0;
      }
      lVar2 = (**(code **)(*param_2 + 200))(param_2[0x15]);
      param_1[0x15] = lVar2;
      if (lVar2 != 0) {
        return 1;
      }
      FUN_0051f420();
      uVar3 = 0x587;
    }
    FUN_0051f540("../crypto/evp/evp_enc.c",uVar3,"EVP_CIPHER_CTX_copy");
    FUN_0051f8f0(6,0xbe,0);
    return 0;
  }
  if ((param_2[1] != 0) && (iVar1 = FUN_0051a180(), iVar1 == 0)) {
    FUN_0051f420();
    FUN_0051f540("../crypto/evp/evp_enc.c",0x593,"EVP_CIPHER_CTX_copy");
    FUN_0051f8f0(6,0x80026,0);
    return 0;
  }
  FUN_00537a80(param_1);
  lVar2 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = lVar2;
  lVar2 = param_2[3];
  param_1[2] = param_2[2];
  param_1[3] = lVar2;
  lVar2 = param_2[5];
  param_1[4] = param_2[4];
  param_1[5] = lVar2;
  lVar2 = param_2[7];
  param_1[6] = param_2[6];
  param_1[7] = lVar2;
  lVar2 = param_2[9];
  param_1[8] = param_2[8];
  param_1[9] = lVar2;
  lVar2 = param_2[0xb];
  param_1[10] = param_2[10];
  param_1[0xb] = lVar2;
  lVar2 = param_2[0xd];
  param_1[0xc] = param_2[0xc];
  param_1[0xd] = lVar2;
  lVar2 = param_2[0xf];
  param_1[0xe] = param_2[0xe];
  param_1[0xf] = lVar2;
  lVar2 = param_2[0x11];
  param_1[0x10] = param_2[0x10];
  param_1[0x11] = lVar2;
  lVar2 = param_2[0x13];
  param_1[0x12] = param_2[0x12];
  param_1[0x13] = lVar2;
  lVar2 = param_2[0x15];
  param_1[0x14] = param_2[0x14];
  param_1[0x15] = lVar2;
  param_1[0x16] = param_2[0x16];
  lVar2 = *param_2;
  if ((param_2[0xf] != 0) && (*(int *)(lVar2 + 0x38) != 0)) {
    lVar2 = FUN_0041ad90((long)*(int *)(lVar2 + 0x38),"../crypto/evp/evp_enc.c",0x59c);
    param_1[0xf] = lVar2;
    if (lVar2 == 0) {
      *param_1 = 0;
      FUN_0051f420(0);
      FUN_0051f540("../crypto/evp/evp_enc.c",0x59f,"EVP_CIPHER_CTX_copy");
      FUN_0051f8f0(6,0xc0100,0);
      return 0;
    }
    thunk_FUN_00713a50(lVar2,param_2[0xf],(long)*(int *)(*param_2 + 0x38));
    lVar2 = *param_2;
  }
  if (((*(byte *)(lVar2 + 0x11) & 4) != 0) &&
     (iVar1 = (**(code **)(lVar2 + 0x50))(param_2,8,0,param_1), iVar1 == 0)) {
    *param_1 = 0;
    FUN_0051f420();
    FUN_0051f540("../crypto/evp/evp_enc.c",0x5a8,"EVP_CIPHER_CTX_copy");
    FUN_0051f8f0(6,0x86,0);
    return 0;
  }
  return 1;
}

