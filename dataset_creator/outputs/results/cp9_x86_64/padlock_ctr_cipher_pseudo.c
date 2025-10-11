
bool padlock_ctr_cipher(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  int iVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long in_FS_OFFSET;
  int local_44;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  lVar3 = EVP_CIPHER_CTX_get_cipher_data();
  iVar1 = EVP_CIPHER_CTX_get_cipher_data(param_1);
  iVar2 = EVP_CIPHER_CTX_get_num(param_1);
  if (-1 < iVar2) {
    local_44 = iVar2;
    uVar4 = EVP_CIPHER_CTX_buf_noconst(param_1);
    uVar5 = EVP_CIPHER_CTX_iv_noconst(param_1);
    CRYPTO_ctr128_encrypt_ctr32
              (param_3,param_2,param_4,lVar3 + (ulong)(-iVar1 & 0xf),uVar5,uVar4,&local_44);
    EVP_CIPHER_CTX_set_num(param_1,local_44);
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return -1 < iVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail_local();
}

