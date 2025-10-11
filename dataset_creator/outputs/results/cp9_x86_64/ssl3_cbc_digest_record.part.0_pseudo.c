
undefined4
ssl3_cbc_digest_record_part_0
          (EVP_MD *param_1,uchar *param_2,ulong *param_3,undefined8 *param_4,void *param_5,
          long param_6,long param_7,void *param_8,ulong param_9,char param_10)

{
  bool bVar1;
  byte bVar2;
  byte bVar3;
  int iVar4;
  uint uVar5;
  byte *pbVar6;
  EVP_MD_CTX *ctx;
  byte bVar7;
  ulong uVar8;
  ulong uVar9;
  ulong extraout_RDX;
  byte *pbVar10;
  ulong extraout_RDX_00;
  ulong uVar11;
  byte bVar12;
  ulong uVar13;
  byte bVar14;
  size_t __n;
  undefined4 uVar15;
  long lVar16;
  ulong uVar17;
  long lVar18;
  long in_FS_OFFSET;
  byte bVar19;
  ulong local_3d8;
  ulong local_3d0;
  ulong local_3c8;
  ulong local_3b8;
  ulong local_3a8;
  long local_3a0;
  SHA512_CTX *local_388;
  ulong local_380;
  size_t local_378;
  code *local_370;
  code *local_368;
  ulong local_348;
  ulong local_340;
  ulong local_320;
  uint local_2fc;
  SHA512_CTX local_2f8;
  byte abStack_220 [8];
  undefined8 local_218 [2];
  undefined1 local_208 [16];
  undefined1 local_1f8 [16];
  undefined1 local_1e8 [16];
  undefined1 local_1d8 [16];
  byte local_1c8 [128];
  undefined8 local_148;
  undefined4 local_140;
  undefined1 local_13c;
  undefined1 local_13b [115];
  byte local_c8 [136];
  long local_40;
  
  bVar19 = 0;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  iVar4 = EVP_MD_is_a(param_1,&DAT_007c5ccc);
  if (iVar4 == 0) {
    iVar4 = EVP_MD_is_a(param_1,&DAT_007c6514);
    if (iVar4 == 0) {
      iVar4 = EVP_MD_is_a(param_1,"SHA2-224");
      if (iVar4 == 0) {
        iVar4 = EVP_MD_is_a(param_1,"SHA2-256");
        if (iVar4 == 0) {
          iVar4 = EVP_MD_is_a(param_1,"SHA2-384");
          if (iVar4 == 0) {
            iVar4 = EVP_MD_is_a(param_1,"SHA2-512");
            if (iVar4 == 0) {
              if (param_3 != (ulong *)0x0) {
                *param_3 = 0;
                uVar15 = 0;
                goto LAB_00482123;
              }
            }
            else {
              iVar4 = SHA512_Init(&local_2f8);
              if (0 < iVar4) {
                bVar1 = true;
                local_320 = 0x28;
                lVar16 = 0x10;
                local_3d8 = 0x80;
                local_370 = SHA512_Transform;
                local_378 = 0x40;
                local_368 = tls1_sha512_final_raw;
                goto LAB_00481af6;
              }
            }
          }
          else {
            iVar4 = SHA384_Init(&local_2f8);
            if (0 < iVar4) {
              bVar1 = true;
              local_320 = 0x28;
              lVar16 = 0x10;
              local_3d8 = 0x80;
              local_370 = SHA512_Transform;
              local_378 = 0x30;
              local_368 = tls1_sha512_final_raw;
              goto LAB_00481af6;
            }
          }
        }
        else {
          iVar4 = SHA256_Init((SHA256_CTX *)&local_2f8);
          if (0 < iVar4) {
            bVar1 = true;
            local_320 = 0x28;
            lVar16 = 8;
            local_3d8 = 0x40;
            local_370 = SHA256_Transform;
            local_378 = 0x20;
            local_368 = tls1_sha256_final_raw;
            goto LAB_00481af6;
          }
        }
      }
      else {
        iVar4 = SHA224_Init((SHA256_CTX *)&local_2f8);
        if (0 < iVar4) {
          bVar1 = true;
          local_320 = 0x28;
          lVar16 = 8;
          local_3d8 = 0x40;
          local_370 = SHA256_Transform;
          local_378 = 0x1c;
          local_368 = tls1_sha256_final_raw;
LAB_00481af6:
          if (param_10 == '\0') goto LAB_00481f50;
          goto LAB_00481b04;
        }
      }
    }
    else {
      iVar4 = SHA1_Init((SHA_CTX *)&local_2f8);
      if (0 < iVar4) {
        local_320 = 0x28;
        bVar1 = true;
        local_3d8 = 0x40;
        lVar16 = 8;
        local_370 = SHA1_Transform;
        local_378 = 0x14;
        local_368 = tls1_sha1_final_raw;
        if (param_10 == '\0') {
LAB_00481f50:
          local_388 = &local_2f8;
          local_3d0 = (local_378 + 0xff + local_3d8) / local_3d8 + 1;
          local_3b8 = ((local_3d8 + 0xc + param_7 + lVar16) - local_378) / local_3d8;
          if (local_3d0 < local_3b8) {
            local_3b8 = local_3b8 - local_3d0;
            local_3c8 = local_3d8 * local_3b8;
          }
          else {
            local_3b8 = 0;
            local_3c8 = 0;
          }
          pbVar6 = local_1c8;
          for (uVar11 = local_3d8 >> 3; uVar11 != 0; uVar11 = uVar11 - 1) {
            pbVar6[0] = 0;
            pbVar6[1] = 0;
            pbVar6[2] = 0;
            pbVar6[3] = 0;
            pbVar6[4] = 0;
            pbVar6[5] = 0;
            pbVar6[6] = 0;
            pbVar6[7] = 0;
            pbVar6 = pbVar6 + ((ulong)bVar19 * -2 + 1) * 8;
          }
          if (0x80 < param_9) goto LAB_00482120;
          pbVar6 = (byte *)__memcpy_chk(local_1c8,param_8,param_9,0x80);
          do {
            *pbVar6 = *pbVar6 ^ 0x36;
            pbVar6 = pbVar6 + 1;
          } while (local_1c8 + local_3d8 != pbVar6);
          uVar11 = param_6 + 0xd;
          local_3a8 = param_7 + 0xd;
          iVar4 = ((int)local_3d8 + (int)uVar11) * 8;
          local_348 = uVar11 / local_3d8;
          uVar8 = uVar11 % local_3d8;
          local_340 = (lVar16 + uVar11) / local_3d8;
          (*local_370)(local_388,local_1c8,(lVar16 + uVar11) % local_3d8);
          local_380 = 0xd;
        }
        else {
LAB_00481b04:
          local_380 = local_320 + 0xb + param_9;
          local_3a8 = param_7 + local_380;
          uVar11 = param_6 + local_380;
          local_3b8 = ((((local_3d8 - 1) + lVar16) - local_378) + local_3a8) / local_3d8;
          local_348 = uVar11 / local_3d8;
          uVar8 = uVar11 % local_3d8;
          local_340 = (lVar16 + uVar11) / local_3d8;
          iVar4 = (int)uVar11 * 8;
          if (local_3b8 < 4) {
            local_3b8 = 0;
            local_3c8 = 0;
            local_3d0 = 2;
          }
          else {
            local_3b8 = local_3b8 - 2;
            local_3d0 = 2;
            local_3c8 = local_3d8 * local_3b8;
          }
        }
        local_388 = &local_2f8;
        bVar7 = (byte)((uint)iVar4 >> 0x18);
        bVar12 = (byte)((uint)iVar4 >> 0x10);
        bVar14 = (byte)((uint)iVar4 >> 8);
        if (bVar1) {
          __memset_chk(local_218,0,lVar16 + -4,0x10);
          abStack_220[lVar16 + 4] = bVar7;
          abStack_220[lVar16 + 5] = bVar12;
          abStack_220[lVar16 + 6] = bVar14;
          abStack_220[lVar16 + 7] = (byte)iVar4;
        }
        else {
          uVar5 = 0;
          do {
            uVar11 = (ulong)uVar5;
            uVar5 = uVar5 + 8;
            *(undefined8 *)((long)local_218 + uVar11) = 0;
          } while (uVar5 < (uint)lVar16);
          abStack_220[lVar16 + 3] = bVar7;
          abStack_220[lVar16 + 2] = bVar12;
          abStack_220[lVar16 + 1] = bVar14;
          abStack_220[lVar16] = (byte)iVar4;
        }
        if (local_3c8 != 0) {
          if (param_10 == '\0') {
            local_148 = *param_4;
            local_140 = *(undefined4 *)(param_4 + 1);
            local_13c = *(undefined1 *)((long)param_4 + 0xc);
            __memcpy_chk(local_13b,param_5,local_3d8 - 0xd,0x73);
            (*local_370)(local_388,&local_148);
            uVar11 = local_3c8 % local_3d8;
            if (1 < local_3c8 / local_3d8) {
              uVar9 = 1;
              lVar18 = (local_3d8 - 0xd) + (long)param_5;
              do {
                uVar9 = uVar9 + 1;
                (*local_370)(local_388,lVar18,uVar11);
                uVar11 = extraout_RDX_00;
                lVar18 = lVar18 + local_3d8;
              } while (uVar9 != local_3c8 / local_3d8);
            }
          }
          else {
            if (local_380 <= local_3d8) goto LAB_00482120;
            (*local_370)(local_388,param_4);
            __memcpy_chk(&local_148,(long)param_4 + local_3d8,local_380 - local_3d8,0x80);
            __n = local_3d8 * 2 - local_380;
            memcpy((void *)((long)&local_148 + (local_380 - local_3d8)),param_5,__n);
            (*local_370)(local_388,&local_148);
            uVar9 = local_3c8 % local_3d8;
            uVar11 = local_3c8 / local_3d8 - 1;
            if (1 < uVar11) {
              uVar17 = 1;
              lVar18 = (long)param_5 + __n;
              do {
                uVar17 = uVar17 + 1;
                (*local_370)(local_388,lVar18,uVar9);
                uVar9 = extraout_RDX;
                lVar18 = lVar18 + local_3d8;
              } while (uVar17 != uVar11);
            }
          }
        }
        uVar11 = local_3d0 + local_3b8;
        local_208 = (undefined1  [16])0x0;
        local_1f8 = (undefined1  [16])0x0;
        local_1e8 = (undefined1  [16])0x0;
        local_1d8 = (undefined1  [16])0x0;
        if (!CARRY8(local_3d0,local_3b8)) {
          local_3a0 = (local_3c8 - local_380) + (long)param_5;
          do {
            uVar17 = 0;
            uVar13 = (local_380 - (long)param_5) + local_3a0;
            bVar14 = (char)(~(byte)((local_3b8 ^ local_340) >> 0x38) &
                           (byte)((local_3b8 ^ local_340) - 1 >> 0x38)) >> 7;
            bVar12 = (char)(~(byte)((local_348 ^ local_3b8) >> 0x38) &
                           (byte)((local_348 ^ local_3b8) - 1 >> 0x38)) >> 7;
            uVar9 = ~uVar8;
            do {
              if (uVar13 < local_380) {
                bVar7 = *(byte *)((long)param_4 + uVar13);
              }
              else {
                bVar7 = 0;
                if (uVar13 < local_3a8) {
                  bVar7 = *(byte *)(local_3a0 + uVar17);
                }
              }
              uVar13 = uVar13 + 1;
              bVar3 = (byte)(uVar17 >> 0x38);
              bVar2 = ~((char)((bVar3 | (byte)(uVar9 + 1 >> 0x38)) ^ bVar3) >> 7) & bVar12;
              bVar7 = (bVar2 & 0x80 | ~bVar2 & bVar7) &
                      ~(~((char)((bVar3 | (byte)(uVar9 >> 0x38)) ^ bVar3) >> 7) & bVar12) &
                      (~bVar14 | bVar12);
              if (local_3d8 - lVar16 <= uVar17) {
                bVar7 = bVar7 & ~bVar14 |
                        bVar14 & *(byte *)((long)local_218 + uVar17 + (lVar16 - local_3d8));
              }
              local_c8[uVar17] = bVar7;
              uVar17 = uVar17 + 1;
              uVar9 = uVar9 + 1;
            } while (local_3d8 != uVar17);
            (*local_370)(local_388,local_c8);
            (*local_368)(local_388,local_c8);
            pbVar6 = local_208;
            pbVar10 = local_c8;
            do {
              bVar12 = *pbVar10;
              pbVar10 = pbVar10 + 1;
              *pbVar6 = *pbVar6 | bVar12 & bVar14;
              pbVar6 = pbVar6 + 1;
            } while (local_208 + local_378 != pbVar6);
            local_3b8 = local_3b8 + 1;
            local_3a0 = local_3a0 + uVar17;
          } while (local_3b8 <= uVar11);
        }
        ctx = (EVP_MD_CTX *)EVP_MD_CTX_new();
        if ((ctx == (EVP_MD_CTX *)0x0) ||
           (iVar4 = EVP_DigestInit_ex(ctx,param_1,(ENGINE *)0x0), iVar4 < 1)) {
LAB_00482320:
          uVar15 = 0;
        }
        else {
          if (param_10 == '\0') {
            pbVar6 = local_1c8;
            do {
              *pbVar6 = *pbVar6 ^ 0x6a;
              pbVar6 = pbVar6 + 1;
              local_320 = local_3d8;
            } while (pbVar6 != local_1c8 + local_3d8);
          }
          else {
            pbVar6 = local_1c8;
            for (uVar11 = local_320 >> 3; uVar11 != 0; uVar11 = uVar11 - 1) {
              pbVar6[0] = 0x5c;
              pbVar6[1] = 0x5c;
              pbVar6[2] = 0x5c;
              pbVar6[3] = 0x5c;
              pbVar6[4] = 0x5c;
              pbVar6[5] = 0x5c;
              pbVar6[6] = 0x5c;
              pbVar6[7] = 0x5c;
              pbVar6 = pbVar6 + (ulong)bVar19 * -0x10 + 8;
            }
            iVar4 = EVP_DigestUpdate(ctx,param_8,param_9);
            if (iVar4 < 1) goto LAB_00482320;
          }
          iVar4 = EVP_DigestUpdate(ctx,local_1c8,local_320);
          if ((iVar4 < 1) || (iVar4 = EVP_DigestUpdate(ctx,local_208,local_378), iVar4 < 1))
          goto LAB_00482320;
          iVar4 = EVP_DigestFinal(ctx,param_2,&local_2fc);
          if ((iVar4 != 0) && (param_3 != (ulong *)0x0)) {
            *param_3 = (ulong)local_2fc;
          }
          uVar15 = 1;
        }
        EVP_MD_CTX_free(ctx);
        goto LAB_00482123;
      }
    }
  }
  else {
    iVar4 = MD5_Init((MD5_CTX *)&local_2f8);
    if (0 < iVar4) {
      bVar1 = false;
      local_320 = 0x30;
      lVar16 = 8;
      local_3d8 = 0x40;
      local_370 = MD5_Transform;
      local_378 = 0x10;
      local_368 = tls1_md5_final_raw;
      goto LAB_00481af6;
    }
  }
LAB_00482120:
  uVar15 = 0;
LAB_00482123:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail_local();
  }
  return uVar15;
}

