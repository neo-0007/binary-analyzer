
int des_ede3_wrap_cipher(long param_1,uchar *param_2,uchar *param_3,ulong param_4)

{
  uchar *puVar1;
  size_t siz;
  int iVar2;
  int iVar3;
  long lVar4;
  uchar *puVar5;
  long in_FS_OFFSET;
  uchar local_68 [8];
  uchar local_60 [8];
  undefined8 local_58 [3];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if ((param_4 >> 0x3e != 0) || ((param_4 & 7) != 0)) goto LAB_005236c0;
  iVar2 = ossl_is_partially_overlapping(param_2,param_3,param_4 & 0xffffffff);
  if (iVar2 != 0) {
    ERR_new();
    ERR_set_debug("../crypto/evp/e_des3.c",0x18e,"des_ede3_wrap_cipher");
    ERR_set_error(6,0xa2,0);
    iVar2 = 0;
    goto LAB_0052349e;
  }
  iVar3 = EVP_CIPHER_CTX_is_encrypting(param_1);
  iVar2 = (int)param_4;
  if (iVar3 != 0) {
    if (param_2 == (uchar *)0x0) {
LAB_0052349b:
      iVar2 = iVar2 + 0x10;
    }
    else {
      puVar1 = param_2 + 8;
      memmove(puVar1,param_3,param_4);
      lVar4 = ossl_sha1(param_3,param_4,local_58);
      if (lVar4 != 0) {
        *(undefined8 *)(param_2 + param_4 + 8) = local_58[0];
        OPENSSL_cleanse(local_58,0x14);
        iVar3 = RAND_bytes((uchar *)(param_1 + 0x28),8);
        if (0 < iVar3) {
          *(undefined8 *)param_2 = *(undefined8 *)(param_1 + 0x28);
          des_ede_cbc_cipher(param_1,puVar1,puVar1,param_4 + 8);
          BUF_reverse(param_2,(uchar *)0x0,param_4 + 0x10);
          *(undefined8 *)(param_1 + 0x28) = 0x521e8792ca2dd4a;
          des_ede_cbc_cipher(param_1,param_2,param_2,param_4 + 0x10);
          goto LAB_0052349b;
        }
      }
LAB_005236c0:
      iVar2 = -1;
    }
    goto LAB_0052349e;
  }
  if (param_4 < 0x18) goto LAB_005236c0;
  if (param_2 == (uchar *)0x0) {
LAB_0052360b:
    iVar2 = iVar2 + -0x10;
    goto LAB_0052349e;
  }
  puVar1 = (uchar *)(param_1 + 0x28);
  *(undefined8 *)(param_1 + 0x28) = 0x521e8792ca2dd4a;
  des_ede_cbc_cipher(param_1,local_68,param_3,8);
  if (param_2 == param_3) {
    param_3 = param_2 + -8;
    memmove(param_2,param_2 + 8,param_4 - 8);
    puVar5 = param_2;
  }
  else {
    puVar5 = param_3 + 8;
  }
  siz = param_4 - 0x10;
  des_ede_cbc_cipher(param_1,param_2,puVar5,siz);
  des_ede_cbc_cipher(param_1,local_60,param_3 + (param_4 - 8),8);
  BUF_reverse(local_68,(uchar *)0x0,8);
  BUF_reverse(param_2,(uchar *)0x0,siz);
  BUF_reverse(puVar1,local_60,8);
  des_ede_cbc_cipher(param_1,param_2,param_2,siz);
  des_ede_cbc_cipher(param_1,local_68,local_68,8);
  lVar4 = ossl_sha1(param_2,siz,local_58);
  if (lVar4 == 0) {
LAB_00523650:
    OPENSSL_cleanse(local_68,8);
    OPENSSL_cleanse(local_58,0x14);
    OPENSSL_cleanse(local_60,8);
    OPENSSL_cleanse(puVar1,8);
  }
  else {
    iVar3 = CRYPTO_memcmp(local_58,local_68,8);
    if (iVar3 != 0) goto LAB_00523650;
    OPENSSL_cleanse(local_68,8);
    OPENSSL_cleanse(local_58,0x14);
    OPENSSL_cleanse(local_60,8);
    OPENSSL_cleanse(puVar1,8);
    if (iVar2 != 0xf) goto LAB_0052360b;
  }
  OPENSSL_cleanse(param_2,siz);
  iVar2 = -1;
LAB_0052349e:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return iVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail_local();
}

