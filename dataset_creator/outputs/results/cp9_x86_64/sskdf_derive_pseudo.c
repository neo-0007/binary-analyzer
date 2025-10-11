
ulong sskdf_derive(long param_1,void *param_2,ulong param_3,undefined8 param_4)

{
  ulong uVar1;
  ulong uVar2;
  undefined8 uVar3;
  ulong uVar4;
  undefined8 uVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  ulong uVar9;
  undefined8 uVar10;
  long lVar11;
  long lVar12;
  undefined3 *puVar13;
  long lVar14;
  long in_FS_OFFSET;
  bool bVar15;
  undefined8 local_168;
  undefined1 *local_148;
  undefined1 *local_140;
  ulong local_138;
  undefined1 *local_130;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  ulong local_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  uint local_8c;
  undefined1 local_88 [72];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  iVar6 = ossl_prov_is_running();
  if ((iVar6 == 0) || (iVar6 = sskdf_set_ctx_params(param_1,param_4), iVar6 == 0))
  goto LAB_00469b7d;
  if (*(long *)(param_1 + 0x28) == 0) {
    ERR_new();
    uVar9 = 0;
    ERR_set_debug("../providers/implementations/kdfs/sskdf.c",0x162,"sskdf_derive");
    ERR_set_error(0x39,0x84,0);
    goto LAB_00469b80;
  }
  uVar9 = ossl_prov_digest_md(param_1 + 0x10);
  if (*(long *)(param_1 + 8) == 0) {
    if (uVar9 == 0) {
      ERR_new();
      uVar10 = 0x197;
LAB_0046a091:
      ERR_set_debug("../providers/implementations/kdfs/sskdf.c",uVar10,"sskdf_derive");
      ERR_set_error(0x39,0x81,0);
      goto LAB_00469b80;
    }
    if (((*(ulong *)(param_1 + 0x30) < 0x40000001) && (*(ulong *)(param_1 + 0x40) < 0x40000001)) &&
       (param_3 - 1 < 0x40000000)) {
      uVar8 = SSKDF_hash_kdm_part_0
                        (uVar9,*(undefined8 *)(param_1 + 0x28),*(ulong *)(param_1 + 0x30),
                         *(undefined8 *)(param_1 + 0x38),*(ulong *)(param_1 + 0x40),0,param_2);
      uVar9 = (ulong)uVar8;
      goto LAB_00469b80;
    }
  }
  else {
    uVar10 = EVP_MAC_CTX_get0_mac();
    iVar6 = EVP_MAC_is_a(uVar10,&DAT_007c9964);
    if (iVar6 == 0) {
      iVar6 = EVP_MAC_is_a(uVar10,"KMAC128");
      if (iVar6 == 0) {
        uVar8 = EVP_MAC_is_a(uVar10,"KMAC256");
        uVar9 = (ulong)uVar8;
        if (uVar8 == 0) {
          ERR_new();
          ERR_set_debug("../providers/implementations/kdfs/sskdf.c",0x182,"sskdf_derive");
          ERR_set_error(0x39,0x89,0);
          goto LAB_00469b80;
        }
      }
      iVar6 = EVP_MAC_is_a(uVar10,"KMAC128");
      puVar13 = &kmac_custom_str;
      local_168 = 3;
      iVar6 = (-(uint)(iVar6 == 0) & 0xffffffe0) + 0xa4;
    }
    else {
      if (uVar9 == 0) {
        ERR_new();
        uVar10 = 0x172;
        goto LAB_0046a091;
      }
      iVar6 = EVP_MD_get_size(uVar9);
      if (iVar6 < 1) goto LAB_00469b7d;
      local_168 = 0;
      puVar13 = (undefined3 *)0x0;
    }
    lVar11 = *(long *)(param_1 + 0x48);
    if ((lVar11 == 0) || (lVar14 = *(long *)(param_1 + 0x50), lVar14 == 0)) {
      lVar14 = (long)iVar6;
      lVar11 = CRYPTO_zalloc(lVar14,"../providers/implementations/kdfs/sskdf.c",0x187);
      *(long *)(param_1 + 0x48) = lVar11;
      if (lVar11 == 0) {
        ERR_new();
        uVar9 = 0;
        ERR_set_debug("../providers/implementations/kdfs/sskdf.c",0x189,"sskdf_derive");
        ERR_set_error(0x39,0xc0100,0);
        goto LAB_00469b80;
      }
      *(long *)(param_1 + 0x50) = lVar14;
    }
    uVar1 = *(ulong *)(param_1 + 0x40);
    uVar2 = *(ulong *)(param_1 + 0x30);
    if ((uVar2 < 0x40000001) && (uVar1 < 0x40000001)) {
      uVar9 = 0;
      if (0x3fffffff < param_3 - 1) goto LAB_00469b80;
      uVar10 = *(undefined8 *)(param_1 + 0x38);
      uVar3 = *(undefined8 *)(param_1 + 0x28);
      uVar4 = *(ulong *)(param_1 + 0x58);
      uVar5 = *(undefined8 *)(param_1 + 8);
      local_f0 = uVar4;
      if (puVar13 == (undefined3 *)0x0) {
LAB_00469e12:
        iVar6 = EVP_MAC_init(uVar5,lVar11,lVar14,0);
        if ((iVar6 == 0) || (local_138 = EVP_MAC_CTX_get_mac_size(uVar5), local_138 == 0))
        goto LAB_0046a12c;
        local_130 = local_88;
        bVar15 = true;
        local_148 = (undefined1 *)0x0;
LAB_00469e60:
        if ((local_138 < 0x41) || (!bVar15)) {
          uVar8 = 1;
          while( true ) {
            local_8c = uVar8 >> 0x18 | (uVar8 & 0xff0000) >> 8 | (uVar8 & 0xff00) << 8 |
                       uVar8 << 0x18;
            lVar12 = EVP_MAC_CTX_dup(uVar5);
            if (lVar12 == 0) break;
            uVar7 = EVP_MAC_update(lVar12,&local_8c,4);
            if (((uVar7 == 0) || (uVar7 = EVP_MAC_update(lVar12,uVar3,uVar2), uVar7 == 0)) ||
               (uVar7 = EVP_MAC_update(lVar12,uVar10,uVar1), uVar7 == 0)) {
LAB_0046a188:
              uVar9 = (ulong)uVar7;
              goto LAB_00469f44;
            }
            if (param_3 < local_138) {
              uVar8 = EVP_MAC_final(lVar12,local_130,0,local_138);
              uVar9 = (ulong)uVar8;
              if (uVar8 != 0) {
                uVar9 = 1;
                memcpy(param_2,local_130,param_3);
              }
              goto LAB_00469f44;
            }
            uVar7 = EVP_MAC_final(lVar12,param_2,0,param_3);
            if (uVar7 == 0) goto LAB_0046a188;
            param_2 = (void *)((long)param_2 + local_138);
            param_3 = param_3 - local_138;
            if (param_3 == 0) {
              uVar9 = 1;
              goto LAB_00469f44;
            }
            uVar8 = uVar8 + 1;
            EVP_MAC_CTX_free(lVar12);
          }
        }
        lVar12 = 0;
        uVar9 = 0;
LAB_00469f44:
        if (local_148 == (undefined1 *)0x0) goto LAB_0046a13f;
LAB_00469f57:
        CRYPTO_clear_free(local_148,uVar4,"../providers/implementations/kdfs/sskdf.c",0x115);
      }
      else {
        OSSL_PARAM_construct_octet_string(&local_128,"custom",puVar13,local_168);
        local_c8 = local_108;
        local_e8 = local_128;
        uStack_e0 = uStack_120;
        local_d8 = local_118;
        uStack_d0 = uStack_110;
        OSSL_PARAM_construct_end(&local_128);
        local_c0 = local_128;
        uStack_b8 = uStack_120;
        local_a0 = local_108;
        local_b0 = local_118;
        uStack_a8 = uStack_110;
        iVar6 = EVP_MAC_CTX_set_params(uVar5,&local_e8);
        if (iVar6 != 0) {
          uVar9 = param_3;
          if (local_f0 != 0) {
            bVar15 = param_3 != local_f0;
            if (local_f0 - 0x14 < 0x2d) {
              bVar15 = (bool)(bVar15 & (byte)(-0x100010001102 >> ((byte)(local_f0 - 0x14) & 0x3f)));
            }
            uVar9 = local_f0;
            if (bVar15 != false) goto LAB_0046a12c;
          }
          local_f0 = uVar9;
          OSSL_PARAM_construct_size_t(&local_128,"size",&local_f0);
          local_e8 = local_128;
          uStack_e0 = uStack_120;
          local_c8 = local_108;
          local_d8 = local_118;
          uStack_d0 = uStack_110;
          iVar6 = EVP_MAC_CTX_set_params(uVar5,&local_e8);
          if (0 < iVar6) {
            if (local_f0 < 0x41) goto LAB_00469e12;
            local_148 = (undefined1 *)
                        CRYPTO_zalloc(local_f0,"../providers/implementations/kdfs/sskdf.c",0xc6);
            if (local_148 != (undefined1 *)0x0) {
              lVar12 = 0;
              uVar8 = EVP_MAC_init(uVar5,lVar11,lVar14,0);
              uVar9 = (ulong)uVar8;
              if (uVar8 != 0) {
                local_138 = EVP_MAC_CTX_get_mac_size(uVar5);
                if (local_138 != 0) {
                  bVar15 = local_148 == local_88;
                  local_130 = local_148;
                  goto LAB_00469e60;
                }
                uVar9 = 0;
              }
              goto LAB_00469f57;
            }
          }
        }
LAB_0046a12c:
        uVar9 = 0;
        lVar12 = 0;
LAB_0046a13f:
        local_140 = local_88;
        OPENSSL_cleanse(local_140,0x40);
      }
      EVP_MAC_CTX_free(lVar12);
      goto LAB_00469b80;
    }
  }
LAB_00469b7d:
  uVar9 = 0;
LAB_00469b80:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail_local();
  }
  return uVar9 & 0xffffffff;
}

