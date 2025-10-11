
ulong aes_ccm_cipher(long param_1,undefined8 *param_2,undefined8 *param_3,ulong param_4)

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
  if (*(int *)(lVar2 + 0xf8) != 0) {
    if (*(int *)(lVar2 + 0x110) < 0) {
      if ((param_3 == (undefined8 *)0x0) && (uVar4 = 0, param_2 != (undefined8 *)0x0))
      goto LAB_00407c30;
      if (*(int *)(lVar2 + 0xfc) != 0) {
        lVar5 = lVar2 + 0x118;
        if (param_2 == (undefined8 *)0x0) {
          if (param_3 == (undefined8 *)0x0) {
            iVar1 = CRYPTO_ccm128_setiv(lVar5,param_1 + 0x28,(long)(0xf - *(int *)(lVar2 + 0x108)),
                                        param_4);
            if (iVar1 == 0) {
              *(undefined4 *)(lVar2 + 0x104) = 1;
              uVar4 = param_4 & 0xffffffff;
              goto LAB_00407c30;
            }
          }
          else if ((*(int *)(lVar2 + 0x104) != 0) || (param_4 == 0)) {
            CRYPTO_ccm128_aad(lVar5,param_3,param_4);
            uVar4 = param_4 & 0xffffffff;
            goto LAB_00407c30;
          }
        }
        else {
          iVar1 = EVP_CIPHER_CTX_is_encrypting(param_1);
          if ((iVar1 != 0) || (*(int *)(lVar2 + 0x100) != 0)) {
            if (*(int *)(lVar2 + 0x104) == 0) {
              iVar1 = CRYPTO_ccm128_setiv(lVar5,param_1 + 0x28,(long)(0xf - *(int *)(lVar2 + 0x108))
                                          ,param_4);
              if (iVar1 != 0) goto LAB_00407c2b;
              *(undefined4 *)(lVar2 + 0x104) = 1;
            }
            iVar1 = EVP_CIPHER_CTX_is_encrypting(param_1);
            if (iVar1 == 0) {
              if (*(long *)(lVar2 + 0x150) == 0) {
                iVar1 = CRYPTO_ccm128_decrypt(lVar5,param_3,param_2,param_4);
              }
              else {
                iVar1 = CRYPTO_ccm128_decrypt_ccm64();
              }
              if (iVar1 == 0) {
                lVar5 = CRYPTO_ccm128_tag(lVar5,local_58,(long)*(int *)(lVar2 + 0x10c));
                if (lVar5 == 0) goto LAB_00407d03;
                iVar1 = *(int *)(lVar2 + 0x10c);
                b = (void *)EVP_CIPHER_CTX_buf_noconst(param_1);
                iVar1 = CRYPTO_memcmp(local_58,b,(long)iVar1);
                if ((iVar1 != 0) || (uVar4 = param_4 & 0xffffffff, (int)param_4 == -1))
                goto LAB_00407d03;
              }
              else {
LAB_00407d03:
                OPENSSL_cleanse(param_2,param_4);
                uVar4 = 0xffffffff;
              }
              *(undefined4 *)(lVar2 + 0xfc) = 0;
              *(undefined8 *)(lVar2 + 0x100) = 0;
              goto LAB_00407c30;
            }
            if (*(long *)(lVar2 + 0x150) == 0) {
              iVar1 = CRYPTO_ccm128_encrypt();
            }
            else {
              iVar1 = CRYPTO_ccm128_encrypt_ccm64();
            }
            if (iVar1 == 0) {
              *(undefined4 *)(lVar2 + 0x100) = 1;
              goto LAB_00407afd;
            }
          }
        }
      }
    }
    else {
      lVar5 = EVP_CIPHER_CTX_get_cipher_data(param_1);
      lVar2 = lVar5 + 0x118;
      if ((param_3 == param_2) && ((long)*(int *)(lVar5 + 0x10c) + 8U <= param_4)) {
        iVar1 = EVP_CIPHER_CTX_is_encrypting(param_1);
        if (iVar1 != 0) {
          puVar6 = (undefined8 *)EVP_CIPHER_CTX_buf_noconst(param_1);
          *param_3 = *puVar6;
        }
        *(undefined8 *)(param_1 + 0x2c) = *param_3;
        param_4 = param_4 - (long)(*(int *)(lVar5 + 0x10c) + 8);
        iVar1 = CRYPTO_ccm128_setiv(lVar2,param_1 + 0x28,(long)(0xf - *(int *)(lVar5 + 0x108)),
                                    param_4);
        if (iVar1 == 0) {
          iVar1 = *(int *)(lVar5 + 0x110);
          param_2 = param_2 + 1;
          uVar3 = EVP_CIPHER_CTX_buf_noconst(param_1);
          CRYPTO_ccm128_aad(lVar2,uVar3,(long)iVar1);
          iVar1 = EVP_CIPHER_CTX_is_encrypting(param_1);
          if (iVar1 == 0) {
            if (*(long *)(lVar5 + 0x150) == 0) {
              iVar1 = CRYPTO_ccm128_decrypt();
            }
            else {
              iVar1 = CRYPTO_ccm128_decrypt_ccm64();
            }
            if (iVar1 == 0) {
              lVar2 = CRYPTO_ccm128_tag(lVar2,local_58,(long)*(int *)(lVar5 + 0x10c));
              if ((lVar2 != 0) &&
                 (iVar1 = CRYPTO_memcmp(local_58,(void *)((long)(param_3 + 1) + param_4),
                                        (long)*(int *)(lVar5 + 0x10c)), iVar1 == 0)) {
LAB_00407afd:
                uVar4 = param_4 & 0xffffffff;
                goto LAB_00407c30;
              }
            }
            OPENSSL_cleanse(param_2,param_4);
          }
          else {
            if (*(long *)(lVar5 + 0x150) == 0) {
              iVar1 = CRYPTO_ccm128_encrypt(lVar2,param_3 + 1,param_2,param_4);
            }
            else {
              iVar1 = CRYPTO_ccm128_encrypt_ccm64();
            }
            if ((iVar1 == 0) &&
               (lVar2 = CRYPTO_ccm128_tag(lVar2,(long)param_2 + param_4,
                                          (long)*(int *)(lVar5 + 0x10c)), lVar2 != 0)) {
              uVar4 = (ulong)(uint)(*(int *)(lVar5 + 0x10c) + 8 + (int)param_4);
              goto LAB_00407c30;
            }
          }
        }
      }
    }
  }
LAB_00407c2b:
  uVar4 = 0xffffffff;
LAB_00407c30:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail_local();
  }
  return uVar4;
}

