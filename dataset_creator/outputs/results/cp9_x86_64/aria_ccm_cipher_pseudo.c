
ulong aria_ccm_cipher(long param_1,undefined8 *param_2,undefined8 *param_3,ulong param_4)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  ulong uVar4;
  long lVar5;
  undefined8 *puVar6;
  void *b;
  long in_FS_OFFSET;
  undefined1 local_58 [24];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  lVar2 = EVP_CIPHER_CTX_get_cipher_data();
  if (*(int *)(lVar2 + 0x118) != 0) {
    if (*(int *)(lVar2 + 0x130) < 0) {
      if ((param_3 == (undefined8 *)0x0) && (uVar4 = 0, param_2 != (undefined8 *)0x0))
      goto LAB_0051f940;
      if (*(int *)(lVar2 + 0x11c) != 0) {
        lVar5 = lVar2 + 0x138;
        if (param_2 == (undefined8 *)0x0) {
          if (param_3 == (undefined8 *)0x0) {
            iVar1 = CRYPTO_ccm128_setiv(lVar5,param_1 + 0x28,(long)(0xf - *(int *)(lVar2 + 0x128)),
                                        param_4);
            if (iVar1 == 0) {
              *(undefined4 *)(lVar2 + 0x124) = 1;
              uVar4 = param_4 & 0xffffffff;
              goto LAB_0051f940;
            }
          }
          else if ((*(int *)(lVar2 + 0x124) != 0) || (param_4 == 0)) {
            CRYPTO_ccm128_aad(lVar5,param_3,param_4);
            uVar4 = param_4 & 0xffffffff;
            goto LAB_0051f940;
          }
        }
        else {
          iVar1 = EVP_CIPHER_CTX_is_encrypting(param_1);
          if ((iVar1 != 0) || (*(int *)(lVar2 + 0x120) != 0)) {
            if (*(int *)(lVar2 + 0x124) == 0) {
              iVar1 = CRYPTO_ccm128_setiv(lVar5,param_1 + 0x28,(long)(0xf - *(int *)(lVar2 + 0x128))
                                          ,param_4);
              if (iVar1 != 0) goto LAB_0051f93b;
              *(undefined4 *)(lVar2 + 0x124) = 1;
            }
            iVar1 = EVP_CIPHER_CTX_is_encrypting(param_1);
            if (iVar1 == 0) {
              if (*(long *)(lVar2 + 0x170) == 0) {
                iVar1 = CRYPTO_ccm128_decrypt(lVar5,param_3,param_2,param_4);
              }
              else {
                iVar1 = CRYPTO_ccm128_decrypt_ccm64();
              }
              if (iVar1 == 0) {
                lVar5 = CRYPTO_ccm128_tag(lVar5,local_58,(long)*(int *)(lVar2 + 300));
                if (lVar5 == 0) goto LAB_0051fa13;
                iVar1 = *(int *)(lVar2 + 300);
                b = (void *)EVP_CIPHER_CTX_buf_noconst(param_1);
                iVar1 = CRYPTO_memcmp(local_58,b,(long)iVar1);
                if ((iVar1 != 0) || (uVar4 = param_4 & 0xffffffff, (int)param_4 == -1))
                goto LAB_0051fa13;
              }
              else {
LAB_0051fa13:
                OPENSSL_cleanse(param_2,param_4);
                uVar4 = 0xffffffff;
              }
              *(undefined4 *)(lVar2 + 0x11c) = 0;
              *(undefined8 *)(lVar2 + 0x120) = 0;
              goto LAB_0051f940;
            }
            if (*(long *)(lVar2 + 0x170) == 0) {
              iVar1 = CRYPTO_ccm128_encrypt();
            }
            else {
              iVar1 = CRYPTO_ccm128_encrypt_ccm64();
            }
            if (iVar1 == 0) {
              *(undefined4 *)(lVar2 + 0x120) = 1;
              goto LAB_0051f80d;
            }
          }
        }
      }
    }
    else {
      lVar5 = EVP_CIPHER_CTX_get_cipher_data(param_1);
      lVar2 = lVar5 + 0x138;
      if ((param_3 == param_2) && ((long)*(int *)(lVar5 + 300) + 8U <= param_4)) {
        iVar1 = EVP_CIPHER_CTX_is_encrypting(param_1);
        if (iVar1 != 0) {
          puVar6 = (undefined8 *)EVP_CIPHER_CTX_buf_noconst(param_1);
          *param_3 = *puVar6;
        }
        *(undefined8 *)(param_1 + 0x2c) = *param_3;
        param_4 = param_4 - (long)(*(int *)(lVar5 + 300) + 8);
        iVar1 = CRYPTO_ccm128_setiv(lVar2,param_1 + 0x28,(long)(0xf - *(int *)(lVar5 + 0x128)),
                                    param_4);
        if (iVar1 == 0) {
          iVar1 = *(int *)(lVar5 + 0x130);
          param_2 = param_2 + 1;
          uVar3 = EVP_CIPHER_CTX_buf_noconst(param_1);
          CRYPTO_ccm128_aad(lVar2,uVar3,(long)iVar1);
          iVar1 = EVP_CIPHER_CTX_is_encrypting(param_1);
          if (iVar1 == 0) {
            if (*(long *)(lVar5 + 0x170) == 0) {
              iVar1 = CRYPTO_ccm128_decrypt();
            }
            else {
              iVar1 = CRYPTO_ccm128_decrypt_ccm64();
            }
            if (iVar1 == 0) {
              lVar2 = CRYPTO_ccm128_tag(lVar2,local_58,(long)*(int *)(lVar5 + 300));
              if ((lVar2 != 0) &&
                 (iVar1 = CRYPTO_memcmp(local_58,(void *)((long)(param_3 + 1) + param_4),
                                        (long)*(int *)(lVar5 + 300)), iVar1 == 0)) {
LAB_0051f80d:
                uVar4 = param_4 & 0xffffffff;
                goto LAB_0051f940;
              }
            }
            OPENSSL_cleanse(param_2,param_4);
          }
          else {
            if (*(long *)(lVar5 + 0x170) == 0) {
              iVar1 = CRYPTO_ccm128_encrypt(lVar2,param_3 + 1,param_2,param_4);
            }
            else {
              iVar1 = CRYPTO_ccm128_encrypt_ccm64();
            }
            if ((iVar1 == 0) &&
               (lVar2 = CRYPTO_ccm128_tag(lVar2,(long)param_2 + param_4,(long)*(int *)(lVar5 + 300))
               , lVar2 != 0)) {
              uVar4 = (ulong)(uint)(*(int *)(lVar5 + 300) + 8 + (int)param_4);
              goto LAB_0051f940;
            }
          }
        }
      }
    }
  }
LAB_0051f93b:
  uVar4 = 0xffffffff;
LAB_0051f940:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail_local();
  }
  return uVar4;
}

