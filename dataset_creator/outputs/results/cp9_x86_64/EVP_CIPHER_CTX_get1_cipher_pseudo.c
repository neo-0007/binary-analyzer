
undefined8 EVP_CIPHER_CTX_get1_cipher(undefined8 *param_1)

{
  undefined8 uVar1;
  int iVar2;
  
  if (param_1 != (undefined8 *)0x0) {
    uVar1 = *param_1;
    iVar2 = EVP_CIPHER_up_ref(uVar1);
    if (iVar2 != 0) {
      return uVar1;
    }
  }
  return 0;
}

