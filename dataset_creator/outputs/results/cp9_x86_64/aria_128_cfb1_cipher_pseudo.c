
undefined8 aria_128_cfb1_cipher(EVP_CIPHER_CTX *param_1,long param_2,long param_3,ulong param_4)

{
  undefined4 uVar1;
  int iVar2;
  undefined8 uVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  long in_FS_OFFSET;
  undefined4 local_44;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_4 >> 0x3b == 0) {
    uVar7 = param_4;
    if (param_4 == 0) goto LAB_0051e63d;
  }
  else {
    uVar7 = 0x800000000000000;
  }
  do {
    local_44 = EVP_CIPHER_CTX_get_num(param_1);
    uVar1 = EVP_CIPHER_CTX_is_encrypting(param_1);
    uVar3 = EVP_CIPHER_CTX_get_cipher_data(param_1);
    iVar2 = EVP_CIPHER_CTX_test_flags(param_1,0x2000);
    uVar4 = uVar7 * 8;
    if (iVar2 != 0) {
      uVar4 = uVar7;
    }
    param_4 = param_4 - uVar7;
    lVar6 = param_3 + uVar7;
    lVar5 = param_2 + uVar7;
    CRYPTO_cfb128_1_encrypt
              (param_3,param_2,uVar4,uVar3,param_1->iv,&local_44,uVar1,
               PTR_ossl_aria_encrypt_0092dfa8);
    EVP_CIPHER_CTX_set_num(param_1,local_44);
    if (param_4 < uVar7) {
      uVar7 = param_4;
    }
  } while ((param_4 != 0) && (param_2 = lVar5, param_3 = lVar6, uVar7 <= param_4));
LAB_0051e63d:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail_local();
}

