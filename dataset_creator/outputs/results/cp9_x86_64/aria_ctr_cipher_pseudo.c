
bool aria_ctr_cipher(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long in_FS_OFFSET;
  int local_44;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  iVar1 = EVP_CIPHER_CTX_get_num();
  uVar2 = EVP_CIPHER_CTX_get_cipher_data(param_1);
  if (-1 < iVar1) {
    local_44 = iVar1;
    uVar3 = EVP_CIPHER_CTX_buf_noconst(param_1);
    CRYPTO_ctr128_encrypt
              (param_3,param_2,param_4,uVar2,param_1 + 0x28,uVar3,&local_44,
               PTR_ossl_aria_encrypt_0092dfa8);
    EVP_CIPHER_CTX_set_num(param_1,local_44);
  }
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail_local();
  }
  return -1 < iVar1;
}

