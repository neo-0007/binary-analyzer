
undefined8 rc2_ctrl(undefined8 param_1,int param_2,int param_3,undefined4 *param_4)

{
  int iVar1;
  undefined8 uVar2;
  undefined4 *puVar3;
  int *piVar4;
  
  if (param_2 == 2) {
    puVar3 = (undefined4 *)EVP_CIPHER_CTX_get_cipher_data();
    *param_4 = *puVar3;
    return 1;
  }
  if (param_2 == 3) {
    uVar2 = 0;
    if (0 < param_3) {
      piVar4 = (int *)EVP_CIPHER_CTX_get_cipher_data();
      *piVar4 = param_3;
      uVar2 = 1;
    }
  }
  else {
    uVar2 = 0xffffffff;
    if (param_2 == 0) {
      iVar1 = EVP_CIPHER_CTX_get_key_length();
      piVar4 = (int *)EVP_CIPHER_CTX_get_cipher_data(param_1);
      *piVar4 = iVar1 << 3;
      return 1;
    }
  }
  return uVar2;
}

