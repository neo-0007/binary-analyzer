
undefined8 sm4_cfb128_cipher(long param_1,long param_2,long param_3,ulong param_4)

{
  undefined4 uVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  long in_FS_OFFSET;
  undefined4 local_44;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_4 >> 0x3e == 0) {
    uVar5 = param_4;
    if (param_4 == 0) goto LAB_00524bbd;
  }
  else {
    uVar5 = 0x4000000000000000;
  }
  do {
    param_4 = param_4 - uVar5;
    local_44 = EVP_CIPHER_CTX_get_num(param_1);
    uVar1 = EVP_CIPHER_CTX_is_encrypting(param_1);
    uVar2 = EVP_CIPHER_CTX_get_cipher_data(param_1);
    lVar4 = param_3 + uVar5;
    lVar3 = param_2 + uVar5;
    CRYPTO_cfb128_encrypt
              (param_3,param_2,uVar5,uVar2,param_1 + 0x28,&local_44,uVar1,
               PTR_ossl_sm4_encrypt_0092df98);
    EVP_CIPHER_CTX_set_num(param_1,local_44);
    if (param_4 < uVar5) {
      uVar5 = param_4;
    }
    param_2 = lVar3;
    param_3 = lVar4;
  } while (param_4 != 0);
LAB_00524bbd:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail_local();
}

