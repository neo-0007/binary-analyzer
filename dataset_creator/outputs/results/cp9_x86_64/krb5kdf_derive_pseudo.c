
int krb5kdf_derive(long param_1,DES_cblock *param_2,ulong param_3,undefined8 param_4)

{
  ulong uVar1;
  undefined8 uVar2;
  long lVar3;
  byte *pbVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  long lVar8;
  undefined8 uVar9;
  EVP_CIPHER_CTX *ctx;
  ulong uVar10;
  ulong uVar11;
  byte bVar12;
  byte *pbVar13;
  DES_cblock *key;
  uint uVar14;
  uint uVar15;
  ulong uVar16;
  ulong uVar17;
  byte *out;
  uchar *puVar18;
  long in_FS_OFFSET;
  bool bVar19;
  ulong local_d0;
  byte *local_b0;
  int local_8c;
  byte local_88 [32];
  byte local_68 [40];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  iVar5 = ossl_prov_is_running();
  if ((iVar5 != 0) && (iVar5 = krb5kdf_set_ctx_params(param_1,param_4), iVar5 != 0)) {
    lVar8 = ossl_prov_cipher_cipher(param_1 + 8);
    if (lVar8 != 0) {
      if (*(long *)(param_1 + 0x20) == 0) {
        ERR_new();
        ERR_set_debug("../providers/implementations/kdfs/krb5kdf.c",0x79,"krb5kdf_derive");
        ERR_set_error(0x39,0x80,0);
        iVar5 = 0;
        goto LAB_0046620f;
      }
      if (*(long *)(param_1 + 0x30) == 0) {
        ERR_new();
        ERR_set_debug("../providers/implementations/kdfs/krb5kdf.c",0x7d,"krb5kdf_derive");
        ERR_set_error(0x39,0x9c,0);
        iVar5 = 0;
        goto LAB_0046620f;
      }
      uVar9 = ossl_prov_cipher_engine(param_1 + 8);
      uVar1 = *(ulong *)(param_1 + 0x28);
      uVar2 = *(undefined8 *)(param_1 + 0x20);
      uVar17 = *(ulong *)(param_1 + 0x38);
      lVar3 = *(long *)(param_1 + 0x30);
      if (param_3 == uVar1) {
        bVar19 = false;
      }
      else {
        iVar5 = EVP_CIPHER_get_nid(lVar8);
        if (((iVar5 != 0x2c) || (uVar1 != 0x18)) || (bVar19 = true, param_3 != 0x15)) {
          ERR_new();
          ERR_set_debug("../providers/implementations/kdfs/krb5kdf.c",0x17a,"KRB5KDF");
          ERR_set_error(0x39,0x8b,0);
          iVar5 = 0;
          goto LAB_0046620f;
        }
      }
      ctx = EVP_CIPHER_CTX_new();
      iVar5 = 0;
      if (ctx == (EVP_CIPHER_CTX *)0x0) goto LAB_0046620f;
      iVar5 = cipher_init(ctx,lVar8,uVar9,uVar2,uVar1);
      if (iVar5 != 0) {
        uVar6 = EVP_CIPHER_CTX_get_block_size(ctx);
        if ((ulong)(long)(int)uVar6 < uVar17) {
          ERR_new();
          ERR_set_debug("../providers/implementations/kdfs/krb5kdf.c",0x18d,"KRB5KDF");
          ERR_set_error(0x39,0x9d,0);
          iVar5 = 0;
        }
        else {
          uVar16 = (ulong)uVar6;
          if (uVar17 == uVar16) {
            __memcpy_chk(local_88,lVar3,uVar17,0x40);
          }
          else {
            local_d0 = uVar16;
            if ((int)uVar17 != 0) {
              uVar10 = (ulong)uVar6;
              uVar11 = uVar17 & 0xffffffff;
              do {
                local_d0 = uVar11;
                uVar11 = uVar10 % local_d0;
                uVar10 = local_d0;
              } while ((int)uVar11 != 0);
            }
            __memset_chk(local_88,0,uVar16,0x40);
            uVar7 = 0;
            uVar14 = (int)((uVar16 * uVar17) / local_d0) - 1;
            uVar16 = (ulong)(int)uVar14;
            if (-1 < (int)uVar14) {
              do {
                uVar11 = uVar16 / uVar17;
                uVar16 = uVar16 - 1;
                uVar15 = (int)uVar11 * 0xd;
                bVar12 = (byte)uVar15 & 7;
                uVar15 = uVar14 - (uVar15 >> 3);
                uVar11 = (ulong)uVar14;
                uVar14 = uVar14 - 1;
                pbVar13 = local_88 + uVar11 % (ulong)uVar6;
                uVar7 = (((uint)*(byte *)(lVar3 + (ulong)(uVar15 - 1) % uVar17) <<
                          (8 - bVar12 & 0x1f) |
                         (int)(uint)*(byte *)(lVar3 + (ulong)uVar15 % uVar17) >> bVar12) & 0xff) +
                        (uint)*pbVar13 + uVar7;
                *pbVar13 = (byte)uVar7;
                uVar7 = uVar7 >> 8;
              } while (uVar14 != 0xffffffff);
              iVar5 = uVar6 - 1;
              if ((0 < (int)uVar6) && ((uVar7 & 1) != 0)) {
                pbVar13 = local_88 + iVar5;
                do {
                  bVar12 = *pbVar13;
                  *pbVar13 = bVar12 + 1;
                  iVar5 = iVar5 + -1;
                  if (iVar5 < 0) break;
                  pbVar13 = pbVar13 + -1;
                } while (bVar12 + 1 >> 8 != 0);
              }
            }
          }
          local_b0 = local_88;
          if (param_3 == 0) {
LAB_00466574:
            iVar5 = EVP_CIPHER_get_nid(lVar8);
            if ((iVar5 == 0x2c) && (!bVar19)) {
              puVar18 = param_2[1] + 6;
              key = param_2 + 2;
              do {
                memmove(key,puVar18,7);
                (*key)[7] = '\0';
                lVar8 = 1;
                uVar6 = 0;
                do {
                  lVar3 = lVar8 + 7;
                  bVar12 = (byte)lVar8;
                  lVar8 = lVar8 + 1;
                  uVar6 = uVar6 | (key[-1][lVar3] & 1) << (bVar12 & 0x1f);
                  (*key)[7] = (uchar)uVar6;
                } while (lVar8 != 8);
                puVar18 = puVar18 + -7;
                DES_set_odd_parity(key);
                bVar19 = param_2 != key;
                key = key + -1;
              } while (bVar19);
              iVar5 = CRYPTO_memcmp(param_2,param_2 + 1,8);
              if ((iVar5 == 0) || (iVar5 = CRYPTO_memcmp(param_2 + 1,param_2 + 2,8), iVar5 == 0)) {
                ERR_new();
                ERR_set_debug("../providers/implementations/kdfs/krb5kdf.c",0x1c4,"KRB5KDF");
                ERR_set_error(0x39,0x79,0);
                iVar5 = 0;
                goto LAB_00466313;
              }
            }
            iVar5 = 1;
          }
          else {
            uVar17 = 0;
            pbVar13 = local_b0;
            pbVar4 = local_68;
            while (out = pbVar4, iVar5 = EVP_EncryptUpdate(ctx,out,&local_8c,pbVar13,uVar6),
                  iVar5 != 0) {
              uVar16 = (ulong)local_8c;
              iVar5 = EVP_EncryptFinal_ex(ctx,out,&local_8c);
              if (iVar5 == 0) break;
              if (local_8c != 0) {
                ERR_new();
                ERR_set_debug("../providers/implementations/kdfs/krb5kdf.c",0x1a2,"KRB5KDF");
                ERR_set_error(0x39,0x6b,0);
                break;
              }
              puVar18 = *param_2 + uVar17;
              if (param_3 - uVar17 <= uVar16) {
                uVar16 = param_3 - uVar17;
              }
              uVar17 = uVar17 + uVar16;
              memcpy(puVar18,out,uVar16);
              if (param_3 <= uVar17) goto LAB_00466574;
              iVar5 = EVP_CIPHER_CTX_reset(ctx);
              if ((iVar5 == 0) || (iVar5 = cipher_init(ctx,lVar8,uVar9,uVar2,uVar1), iVar5 == 0))
              break;
              pbVar13 = out;
              pbVar4 = local_b0;
              if (out == local_b0) {
                pbVar4 = local_68;
              }
            }
            iVar5 = 0;
          }
        }
      }
LAB_00466313:
      local_b0 = local_88;
      EVP_CIPHER_CTX_free(ctx);
      OPENSSL_cleanse(local_b0,0x40);
      goto LAB_0046620f;
    }
    ERR_new();
    ERR_set_debug("../providers/implementations/kdfs/krb5kdf.c",0x75,"krb5kdf_derive");
    ERR_set_error(0x39,0x9b,0);
  }
  iVar5 = 0;
LAB_0046620f:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail_local();
  }
  return iVar5;
}

