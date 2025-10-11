
undefined8 sm4_ofb_cipher(long param_1,long param_2,long param_3,undefined *param_4)

{
  undefined8 uVar1;
  undefined *puVar2;
  long lVar3;
  long extraout_RDX;
  long lVar4;
  undefined *puVar5;
  long in_FS_OFFSET;
  long lStack_70;
  long local_60;
  long local_58;
  undefined4 local_44;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  puVar2 = param_4;
  lVar4 = param_2;
  puVar5 = param_4;
  local_60 = param_2;
  local_58 = param_3;
  if ((undefined *)0x3fffffffffffffff < param_4) {
    lVar3 = param_3;
    lStack_70 = param_2;
    do {
      local_44 = EVP_CIPHER_CTX_get_num(param_1,lStack_70,lVar3,puVar2);
      lStack_70 = 0x524c81;
      uVar1 = EVP_CIPHER_CTX_get_cipher_data(param_1);
      lVar3 = param_3 - (long)puVar5;
      lVar4 = param_2 - (long)puVar5;
      puVar5 = puVar5 + -0x4000000000000000;
      puVar2 = PTR_ossl_sm4_encrypt_0092df98;
      CRYPTO_ofb128_encrypt
                (param_4 + lVar3,param_4 + lVar4,0x4000000000000000,uVar1,param_1 + 0x28,&local_44);
      EVP_CIPHER_CTX_set_num(param_1,local_44);
      lVar4 = 0x524c81;
      lVar3 = extraout_RDX;
    } while ((undefined *)0x3fffffffffffffff < puVar5);
    puVar5 = (undefined *)((ulong)param_4 & 0x3fffffffffffffff);
    local_60 = ((ulong)(param_4 + -0x4000000000000000) >> 0x3e) + 1 << 0x3e;
    local_58 = param_3 + local_60;
    local_60 = param_2 + local_60;
    param_3 = extraout_RDX;
  }
  if (puVar5 != (undefined *)0x0) {
    local_44 = EVP_CIPHER_CTX_get_num(param_1,lVar4,param_3,puVar2);
    uVar1 = EVP_CIPHER_CTX_get_cipher_data(param_1);
    CRYPTO_ofb128_encrypt
              (local_58,local_60,puVar5,uVar1,param_1 + 0x28,&local_44,PTR_ossl_sm4_encrypt_0092df98
              );
    EVP_CIPHER_CTX_set_num(param_1,local_44);
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail_local();
}

