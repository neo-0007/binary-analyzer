
/* WARNING: Type propagation algorithm not settling */

ulong aes_gcm_cipher(EVP_CIPHER_CTX *param_1,void *param_2,void *param_3,ulong param_4)

{
  uchar *a;
  long lVar1;
  long *plVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  void *pvVar8;
  code *pcVar9;
  
  lVar4 = EVP_CIPHER_CTX_get_cipher_data();
  if (*(int *)(lVar4 + 0xf8) == 0) {
    return 0xffffffff;
  }
  if (*(int *)(lVar4 + 0x2d0) < 0) {
    if (*(int *)(lVar4 + 0xfc) == 0) {
      return 0xffffffff;
    }
    if (param_3 == (void *)0x0) {
      if (param_1->encrypt != 0) {
        CRYPTO_gcm128_tag(lVar4 + 0x100,param_1->buf,0x10);
        *(undefined4 *)(lVar4 + 0x2c4) = 0x10;
        *(undefined4 *)(lVar4 + 0xfc) = 0;
        return 0;
      }
      if (*(int *)(lVar4 + 0x2c4) < 0) {
        return 0xffffffff;
      }
      uVar7 = CRYPTO_gcm128_finish(lVar4 + 0x100,param_1->buf);
      if ((int)uVar7 != 0) {
        return 0xffffffff;
      }
      *(undefined4 *)(lVar4 + 0xfc) = 0;
      return uVar7;
    }
    lVar1 = lVar4 + 0x100;
    if (param_2 == (void *)0x0) {
      iVar3 = CRYPTO_gcm128_aad(lVar1,param_3,param_4);
    }
    else {
      pcVar9 = *(code **)(lVar4 + 0x2e0);
      if (param_1->encrypt == 0) {
        if (pcVar9 == (code *)0x0) {
          iVar3 = CRYPTO_gcm128_decrypt(lVar1,param_3,param_2,param_4);
        }
        else {
          uVar7 = param_4;
          if (((0xf < param_4) && (pcVar9 == aesni_ctr32_encrypt_blocks)) &&
             (pcVar9 = aesni_ctr32_encrypt_blocks, *(code **)(lVar4 + 0x268) == gcm_ghash_avx)) {
            uVar7 = (ulong)(-*(int *)(lVar4 + 0x270) & 0xf);
            iVar3 = CRYPTO_gcm128_decrypt(lVar1,param_3,param_2,uVar7,aesni_ctr32_encrypt_blocks);
            if (iVar3 != 0) {
              return 0xffffffff;
            }
            lVar5 = aesni_gcm_decrypt((long)param_3 + uVar7,(long)param_2 + uVar7,param_4 - uVar7,
                                      *(undefined8 *)(lVar4 + 0x280),lVar1,lVar4 + 0x140);
            *(long *)(lVar4 + 0x138) = *(long *)(lVar4 + 0x138) + lVar5;
            pcVar9 = *(code **)(lVar4 + 0x2e0);
            lVar5 = uVar7 + lVar5;
            uVar7 = param_4 - lVar5;
            param_2 = (void *)((long)param_2 + lVar5);
            param_3 = (void *)((long)param_3 + lVar5);
          }
          iVar3 = CRYPTO_gcm128_decrypt_ctr32(lVar1,param_3,param_2,uVar7,pcVar9);
        }
      }
      else if (pcVar9 == (code *)0x0) {
        iVar3 = CRYPTO_gcm128_encrypt(lVar1,param_3,param_2);
      }
      else {
        uVar7 = param_4;
        if (((0x1f < param_4) && (pcVar9 == aesni_ctr32_encrypt_blocks)) &&
           (pcVar9 = aesni_ctr32_encrypt_blocks, *(code **)(lVar4 + 0x268) == gcm_ghash_avx)) {
          uVar7 = (ulong)(-*(int *)(lVar4 + 0x270) & 0xf);
          iVar3 = CRYPTO_gcm128_encrypt(lVar1,param_3,param_2,uVar7,aesni_ctr32_encrypt_blocks);
          if (iVar3 != 0) {
            return 0xffffffff;
          }
          lVar5 = aesni_gcm_encrypt((long)param_3 + uVar7,(long)param_2 + uVar7,param_4 - uVar7,
                                    *(undefined8 *)(lVar4 + 0x280),lVar1,lVar4 + 0x140);
          *(long *)(lVar4 + 0x138) = *(long *)(lVar4 + 0x138) + lVar5;
          pcVar9 = *(code **)(lVar4 + 0x2e0);
          lVar5 = uVar7 + lVar5;
          uVar7 = param_4 - lVar5;
          param_2 = (void *)((long)param_2 + lVar5);
          param_3 = (void *)((long)param_3 + lVar5);
        }
        iVar3 = CRYPTO_gcm128_encrypt_ctr32(lVar1,param_3,param_2,uVar7,pcVar9);
      }
    }
    if (iVar3 != 0) {
      return 0xffffffff;
    }
    return param_4 & 0xffffffff;
  }
  lVar4 = EVP_CIPHER_CTX_get_cipher_data(param_1);
  if (param_3 != param_2) {
    return 0xffffffff;
  }
  if (param_4 < 0x18) {
    return 0xffffffff;
  }
  if (param_1->encrypt == 0) {
    iVar3 = 0x18;
  }
  else {
    plVar2 = (long *)(lVar4 + 0x2d8);
    *plVar2 = *plVar2 + 1;
    iVar3 = 0x13;
    if (*plVar2 == 0) {
      ERR_new();
      ERR_set_debug("../crypto/evp/e_aes.c",0xaf7,"aes_gcm_tls_cipher");
      ERR_set_error(6,0xb7,0);
      param_4 = 0xffffffff;
      goto LAB_00406c25;
    }
  }
  iVar3 = EVP_CIPHER_CTX_ctrl(param_1,iVar3,8,param_2);
  if (0 < iVar3) {
    a = param_1->buf;
    lVar1 = lVar4 + 0x100;
    iVar3 = CRYPTO_gcm128_aad(lVar1,a,(long)*(int *)(lVar4 + 0x2d0));
    if (iVar3 == 0) {
      lVar5 = (long)param_3 + 8;
      param_2 = (void *)((long)param_2 + 8);
      param_4 = param_4 - 0x18;
      pcVar9 = *(code **)(lVar4 + 0x2e0);
      if (param_1->encrypt == 0) {
        if (pcVar9 == (code *)0x0) {
          iVar3 = CRYPTO_gcm128_decrypt(lVar1,lVar5,param_2,param_4);
        }
        else {
          uVar7 = param_4;
          pvVar8 = param_2;
          lVar6 = lVar5;
          if ((0xf < param_4) && (pcVar9 == aesni_ctr32_encrypt_blocks)) {
            if (*(code **)(lVar4 + 0x268) == gcm_ghash_avx) {
              iVar3 = CRYPTO_gcm128_decrypt(lVar1,0,0,0);
              if (iVar3 != 0) {
                return 0xffffffff;
              }
              lVar6 = aesni_gcm_decrypt(lVar5,param_2,param_4,*(undefined8 *)(lVar4 + 0x280),lVar1,
                                        lVar4 + 0x140);
              *(long *)(lVar4 + 0x138) = *(long *)(lVar4 + 0x138) + lVar6;
              pcVar9 = *(code **)(lVar4 + 0x2e0);
              uVar7 = param_4 - lVar6;
              pvVar8 = (void *)((long)param_2 + lVar6);
              lVar6 = lVar6 + lVar5;
            }
            else {
              pcVar9 = aesni_ctr32_encrypt_blocks;
            }
          }
          iVar3 = CRYPTO_gcm128_decrypt_ctr32(lVar1,lVar6,pvVar8,uVar7,pcVar9);
        }
        if (iVar3 == 0) {
          CRYPTO_gcm128_tag(lVar1,a,0x10);
          iVar3 = CRYPTO_memcmp(a,(void *)(lVar5 + param_4),0x10);
          if (iVar3 == 0) {
            param_4 = param_4 & 0xffffffff;
            goto LAB_00406c25;
          }
          OPENSSL_cleanse(param_2,param_4);
        }
      }
      else {
        if (pcVar9 == (code *)0x0) {
          iVar3 = CRYPTO_gcm128_encrypt(lVar1,lVar5,param_2,param_4);
        }
        else {
          uVar7 = param_4;
          pvVar8 = param_2;
          if ((pcVar9 == aesni_ctr32_encrypt_blocks) && (0x1f < param_4)) {
            if (*(code **)(lVar4 + 0x268) == gcm_ghash_avx) {
              iVar3 = CRYPTO_gcm128_encrypt(lVar1,0,0,0);
              if (iVar3 != 0) {
                return 0xffffffff;
              }
              lVar6 = aesni_gcm_encrypt(lVar5,param_2,param_4,*(undefined8 *)(lVar4 + 0x280),lVar1,
                                        lVar4 + 0x140);
              *(long *)(lVar4 + 0x138) = *(long *)(lVar4 + 0x138) + lVar6;
              pcVar9 = *(code **)(lVar4 + 0x2e0);
              lVar5 = lVar5 + lVar6;
              uVar7 = param_4 - lVar6;
              pvVar8 = (void *)((long)param_2 + lVar6);
            }
            else {
              pcVar9 = aesni_ctr32_encrypt_blocks;
            }
          }
          iVar3 = CRYPTO_gcm128_encrypt_ctr32(lVar1,lVar5,pvVar8,uVar7,pcVar9);
        }
        if (iVar3 == 0) {
          CRYPTO_gcm128_tag(lVar1,(long)param_2 + param_4,0x10);
          param_4 = (ulong)((int)param_4 + 0x18);
          goto LAB_00406c25;
        }
      }
    }
  }
  param_4 = 0xffffffff;
LAB_00406c25:
  *(undefined4 *)(lVar4 + 0xfc) = 0;
  *(undefined4 *)(lVar4 + 0x2d0) = 0xffffffff;
  return param_4;
}

