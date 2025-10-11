
int aes_siv_dupctx(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  int iVar2;
  
  uVar1 = param_1[1];
  *param_2 = *param_1;
  param_2[1] = uVar1;
  uVar1 = param_1[3];
  param_2[2] = param_1[2];
  param_2[3] = uVar1;
  uVar1 = param_1[5];
  param_2[4] = param_1[4];
  param_2[5] = uVar1;
  uVar1 = param_1[7];
  param_2[6] = param_1[6];
  param_2[7] = uVar1;
  uVar1 = param_1[9];
  param_2[8] = param_1[8];
  param_2[9] = uVar1;
  uVar1 = param_1[0xb];
  param_2[10] = param_1[10];
  param_2[0xb] = uVar1;
  uVar1 = param_1[0xd];
  param_2[0xc] = param_1[0xc];
  param_2[0xd] = uVar1;
  uVar1 = param_1[0xe];
  param_2[7] = 0;
  param_2[0xe] = uVar1;
  param_2[9] = 0;
  param_2[8] = 0;
  iVar2 = ossl_siv128_copy_ctx(param_2 + 3,param_1 + 3);
  if (iVar2 != 0) {
    if (param_2[0xc] != 0) {
      EVP_CIPHER_up_ref();
    }
    iVar2 = 1;
    if (param_2[0xb] != 0) {
      EVP_CIPHER_up_ref();
    }
  }
  return iVar2;
}

