
void EVP_CIPHER_is_a(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  if (*(long *)(param_1 + 0x78) != 0) {
    evp_is_a(*(long *)(param_1 + 0x78),*(undefined4 *)(param_1 + 0x60),0,param_2);
    return;
  }
  uVar1 = EVP_CIPHER_get0_name();
  evp_is_a(0,0,uVar1,param_2);
  return;
}

