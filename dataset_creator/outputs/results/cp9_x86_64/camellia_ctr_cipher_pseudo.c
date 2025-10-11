
undefined8
camellia_ctr_cipher(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  int iVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 extraout_RDX;
  long in_FS_OFFSET;
  int local_44;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  iVar2 = EVP_CIPHER_CTX_get_num();
  lVar3 = EVP_CIPHER_CTX_get_cipher_data(param_1);
  if (iVar2 < 0) {
    uVar4 = 0;
  }
  else {
    lVar1 = *(long *)(lVar3 + 0x120);
    local_44 = iVar2;
    if (lVar1 == 0) {
      uVar4 = *(undefined8 *)(lVar3 + 0x118);
      uVar5 = EVP_CIPHER_CTX_buf_noconst(param_1);
      CRYPTO_ctr128_encrypt(param_3,param_2,param_4,lVar3,param_1 + 0x28,uVar5,&local_44);
    }
    else {
      uVar4 = EVP_CIPHER_CTX_buf_noconst(param_1);
      CRYPTO_ctr128_encrypt_ctr32
                (param_3,param_2,param_4,lVar3,param_1 + 0x28,uVar4,&local_44,lVar1);
      uVar4 = extraout_RDX;
    }
    EVP_CIPHER_CTX_set_num(param_1,local_44,uVar4);
    uVar4 = 1;
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail_local();
}

