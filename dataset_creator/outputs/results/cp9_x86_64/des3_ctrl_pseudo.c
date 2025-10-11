
undefined4 des3_ctrl(undefined8 param_1,int param_2,undefined8 param_3,DES_cblock *param_4)

{
  int iVar1;
  int iVar2;
  
  if (param_2 != 6) {
    return 0xffffffff;
  }
  iVar1 = EVP_CIPHER_CTX_get_key_length();
  if ((-1 < iVar1) && (iVar2 = RAND_priv_bytes(param_4,iVar1), 0 < iVar2)) {
    DES_set_odd_parity(param_4);
    if (0xf < iVar1) {
      DES_set_odd_parity(param_4 + 1);
    }
    if (iVar1 < 0x18) {
      return 1;
    }
    DES_set_odd_parity(param_4 + 2);
    return 1;
  }
  return 0;
}

