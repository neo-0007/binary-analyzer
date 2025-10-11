
int aesni_cbc_hmac_sha256_cipher(long param_1,void *param_2,void *param_3,ulong param_4)

{
  SHA256_CTX *pSVar1;
  uchar *md;
  long lVar2;
  undefined8 *puVar3;
  byte bVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  int iVar13;
  uint uVar14;
  uint uVar15;
  long lVar16;
  long lVar17;
  ulong uVar18;
  uint uVar19;
  uint uVar20;
  uint uVar21;
  int iVar22;
  uint uVar23;
  void *pvVar24;
  uint uVar25;
  ulong uVar26;
  ulong uVar27;
  long lVar28;
  long lVar29;
  void *pvVar30;
  long in_FS_OFFSET;
  ulong local_f0;
  ulong local_e8;
  ulong local_e0;
  ulong local_d0;
  void *local_c8;
  uint local_80 [16];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  lVar16 = EVP_CIPHER_CTX_get_cipher_data();
  uVar26 = *(ulong *)(lVar16 + 0x248);
  iVar22 = *(int *)(lVar16 + 0x23c);
  *(undefined8 *)(lVar16 + 0x248) = 0xffffffffffffffff;
  local_e8 = (ulong)((uint)param_4 & 0xf);
  if ((param_4 & 0xf) != 0) {
LAB_0051c614:
    iVar22 = 0;
    goto LAB_0051c616;
  }
  iVar13 = EVP_CIPHER_CTX_is_encrypting(param_1);
  if (iVar13 != 0) {
    if (uVar26 == 0xffffffffffffffff) {
      lVar17 = 0;
      pvVar24 = param_3;
      uVar26 = param_4;
    }
    else {
      if ((uVar26 + 0x30 & 0xfffffffffffffff0) != param_4) goto LAB_0051c614;
      lVar17 = (ulong)(0x301 < *(uint *)(lVar16 + 0x250)) * 0x10;
      pvVar24 = (void *)((long)param_3 + lVar17);
    }
    param_1 = param_1 + 0x28;
    pSVar1 = (SHA256_CTX *)(lVar16 + 0x1d4);
    pvVar30 = param_2;
    local_e0 = param_4;
    if (((((DAT_0093e5a3 & 0x20) != 0) ||
         (((DAT_0093e59c & 0x10000000) != 0 &&
          ((OPENSSL_ia32cap_P & 0x40000000) != 0 || (DAT_0093e59c & 0x800) != 0)))) &&
        (uVar18 = lVar17 + (ulong)(0x40 - iVar22), uVar18 < uVar26)) &&
       (uVar27 = uVar26 - uVar18, 0x3f < uVar27)) {
      sha256_update(pSVar1,pvVar24);
      aesni_cbc_sha256_enc(param_3,param_2,uVar27 >> 6,lVar16,param_1,pSVar1,(long)param_3 + uVar18)
      ;
      local_e8 = uVar27 & 0xffffffffffffffc0;
      uVar14 = (int)local_e8 * 8;
      uVar20 = *(uint *)(lVar16 + 500);
      local_e0 = param_4 - local_e8;
      *(uint *)(lVar16 + 500) = uVar14 + *(uint *)(lVar16 + 500);
      lVar17 = uVar18 + local_e8;
      *(uint *)(lVar16 + 0x1f8) =
           (int)(uVar27 >> 0x1d) + *(int *)(lVar16 + 0x1f8) + (uint)CARRY4(uVar14,uVar20);
      pvVar24 = (void *)((long)param_3 + lVar17);
      pvVar30 = (void *)((long)param_2 + local_e8);
    }
    sha256_update(pSVar1,pvVar24,uVar26 - lVar17);
    if (uVar26 == param_4) {
      aesni_cbc_encrypt(local_e8 + (long)param_3,pvVar30,local_e0,lVar16,param_1,1);
      iVar22 = 1;
    }
    else {
      if (param_3 != param_2) {
        memcpy(pvVar30,(void *)(local_e8 + (long)param_3),uVar26 - local_e8);
      }
      md = (uchar *)((long)param_2 + uVar26);
      SHA256_Final(md,pSVar1);
      *(undefined8 *)(lVar16 + 0x1d4) = *(undefined8 *)(lVar16 + 0x164);
      *(undefined8 *)(lVar16 + 0x1dc) = *(undefined8 *)(lVar16 + 0x16c);
      *(undefined8 *)(lVar16 + 0x1e4) = *(undefined8 *)(lVar16 + 0x174);
      *(undefined8 *)(lVar16 + 0x1ec) = *(undefined8 *)(lVar16 + 0x17c);
      *(undefined8 *)(lVar16 + 500) = *(undefined8 *)(lVar16 + 0x184);
      *(undefined8 *)(lVar16 + 0x1fc) = *(undefined8 *)(lVar16 + 0x18c);
      *(undefined8 *)(lVar16 + 0x204) = *(undefined8 *)(lVar16 + 0x194);
      *(undefined8 *)(lVar16 + 0x20c) = *(undefined8 *)(lVar16 + 0x19c);
      *(undefined8 *)(lVar16 + 0x214) = *(undefined8 *)(lVar16 + 0x1a4);
      *(undefined8 *)(lVar16 + 0x21c) = *(undefined8 *)(lVar16 + 0x1ac);
      *(undefined8 *)(lVar16 + 0x224) = *(undefined8 *)(lVar16 + 0x1b4);
      *(undefined8 *)(lVar16 + 0x22c) = *(undefined8 *)(lVar16 + 0x1bc);
      *(undefined8 *)(lVar16 + 0x234) = *(undefined8 *)(lVar16 + 0x1c4);
      *(undefined8 *)(lVar16 + 0x23c) = *(undefined8 *)(lVar16 + 0x1cc);
      sha256_update(pSVar1,md,0x20);
      SHA256_Final(md,pSVar1);
      uVar18 = uVar26 + 0x20;
      if (uVar18 < param_4) {
        memset((void *)(uVar18 + (long)param_2),((uint)param_4 - 1) - (int)uVar18 & 0xff,
               (param_4 - 0x20) - uVar26);
      }
      aesni_cbc_encrypt(pvVar30,pvVar30,local_e0,lVar16,param_1,1);
      iVar22 = 1;
    }
    goto LAB_0051c616;
  }
  aesni_cbc_encrypt(param_3,param_2,param_4,lVar16,param_1 + 0x28,0);
  if (uVar26 == 0xffffffffffffffff) {
    sha256_update(lVar16 + 0x1d4,param_2,param_4);
    iVar22 = 1;
    goto LAB_0051c616;
  }
  iVar22 = 0;
  uVar18 = (ulong)(0x301 < CONCAT11(*(undefined1 *)(lVar16 + 0x24c + uVar26),
                                    *(undefined1 *)(lVar16 + 0x24d + uVar26)));
  lVar17 = uVar18 * 0x10;
  if (param_4 < lVar17 + 0x21U) goto LAB_0051c616;
  lVar28 = param_4 + uVar18 * -0x10;
  uVar11 = *(undefined8 *)(lVar16 + 0xf4);
  uVar12 = *(undefined8 *)(lVar16 + 0xfc);
  pSVar1 = (SHA256_CTX *)(lVar16 + 0x1d4);
  uVar5 = *(undefined8 *)(lVar16 + 0x134);
  uVar6 = *(undefined8 *)(lVar16 + 0x13c);
  uVar7 = *(undefined8 *)(lVar16 + 0x144);
  uVar8 = *(undefined8 *)(lVar16 + 0x14c);
  local_c8 = (void *)((long)param_2 + lVar17);
  uVar20 = (int)lVar28 - 0x21;
  uVar9 = *(undefined8 *)(lVar16 + 0x154);
  uVar10 = *(undefined8 *)(lVar16 + 0x15c);
  uVar19 = 0xff - uVar20 >> 0x18 | uVar20 & 0xff;
  uVar20 = uVar19 - *(byte *)((long)local_c8 + lVar28 + -1);
  uVar14 = (int)uVar20 >> 0x1f & uVar19;
  lVar17 = lVar28 - (ulong)(uVar14 + 0x21);
  *(char *)(lVar16 + 0x24f + uVar26) = (char)lVar17;
  *(char *)(lVar16 + 0x24e + uVar26) = (char)((ulong)lVar17 >> 8);
  *(undefined8 *)(lVar16 + 0x1d4) = uVar11;
  *(undefined8 *)(lVar16 + 0x1dc) = uVar12;
  *(undefined8 *)(lVar16 + 0x214) = uVar5;
  *(undefined8 *)(lVar16 + 0x21c) = uVar6;
  *(undefined8 *)(lVar16 + 0x1e4) = *(undefined8 *)(lVar16 + 0x104);
  *(undefined8 *)(lVar16 + 0x1ec) = *(undefined8 *)(lVar16 + 0x10c);
  *(undefined8 *)(lVar16 + 0x224) = uVar7;
  *(undefined8 *)(lVar16 + 0x22c) = uVar8;
  *(undefined8 *)(lVar16 + 500) = *(undefined8 *)(lVar16 + 0x114);
  *(undefined8 *)(lVar16 + 0x1fc) = *(undefined8 *)(lVar16 + 0x11c);
  *(undefined8 *)(lVar16 + 0x234) = uVar9;
  *(undefined8 *)(lVar16 + 0x23c) = uVar10;
  *(undefined8 *)(lVar16 + 0x204) = *(undefined8 *)(lVar16 + 0x124);
  *(undefined8 *)(lVar16 + 0x20c) = *(undefined8 *)(lVar16 + 300);
  sha256_update(pSVar1,lVar16 + 0x250,uVar26);
  local_d0 = lVar28 - 0x20;
  if (0x13f < local_d0) {
    lVar28 = (lVar28 - 0x160U & 0xffffffffffffffc0) + (ulong)(0x40 - *(int *)(lVar16 + 0x23c));
    lVar17 = lVar17 - lVar28;
    sha256_update(pSVar1,local_c8,lVar28);
    local_d0 = local_d0 - lVar28;
    local_c8 = (void *)((long)local_c8 + lVar28);
  }
  uVar21 = *(uint *)(lVar16 + 0x23c);
  lVar28 = lVar16 + 0x1fc;
  uVar15 = *(int *)(lVar16 + 500) + (int)lVar17 * 8;
  local_80[0] = 0;
  local_80[1] = 0;
  local_80[2] = 0;
  local_80[3] = 0;
  local_80[4] = 0;
  local_80[5] = 0;
  local_80[6] = 0;
  local_80[7] = 0;
  uVar15 = uVar15 >> 0x18 | (uVar15 & 0xff0000) >> 8 | (uVar15 & 0xff00) << 8 | uVar15 * 0x1000000;
  if (local_d0 == 0) {
    local_f0 = 0;
  }
  else {
    lVar29 = -lVar17;
    do {
      uVar26 = (ulong)uVar21;
      uVar21 = uVar21 + 1;
      bVar4 = (byte)((ulong)lVar29 >> 0x38);
      *(byte *)(lVar16 + 0x1fc + uVar26) =
           ~((byte)((ulong)-lVar29 >> 0x38) | bVar4) & 0x80 |
           *(byte *)((long)local_c8 + lVar29 + lVar17) & bVar4;
      if (uVar21 == 0x40) {
        uVar21 = (uint)((ulong)(7 - lVar29) >> 0x20);
        *(uint *)(lVar16 + 0x238) = *(uint *)(lVar16 + 0x238) | uVar15 & (int)uVar21 >> 0x1f;
        sha256_block_data_order(pSVar1,lVar28,1);
        uVar21 = (int)((uint)((ulong)(lVar29 + -0x48) >> 0x20) & uVar21) >> 0x1f;
        local_80[0] = local_80[0] | *(uint *)(lVar16 + 0x1d4) & uVar21;
        local_80[1] = local_80[1] | *(uint *)(lVar16 + 0x1d8) & uVar21;
        local_80[2] = local_80[2] | *(uint *)(lVar16 + 0x1dc) & uVar21;
        local_80[3] = local_80[3] | *(uint *)(lVar16 + 0x1e0) & uVar21;
        local_80[4] = local_80[4] | *(uint *)(lVar16 + 0x1e4) & uVar21;
        local_80[5] = local_80[5] | *(uint *)(lVar16 + 0x1e8) & uVar21;
        local_80[7] = local_80[7] | uVar21 & *(uint *)(lVar16 + 0x1f0);
        local_80[6] = local_80[6] | *(uint *)(lVar16 + 0x1ec) & uVar21;
        uVar21 = 0;
      }
      lVar29 = lVar29 + 1;
    } while (local_d0 - lVar17 != lVar29);
    local_f0 = local_d0;
  }
  uVar26 = (ulong)uVar21;
  if (uVar21 < 0x40) {
    puVar3 = (undefined8 *)(lVar16 + 0x1fc + uVar26);
    uVar18 = 0x40 - uVar26;
    uVar23 = (uint)uVar18;
    if (uVar23 < 8) {
      if ((uVar18 & 4) == 0) {
        if ((uVar23 != 0) && (*(undefined1 *)puVar3 = 0, (uVar18 & 2) != 0)) {
          *(undefined2 *)((long)puVar3 + ((uVar18 & 0xffffffff) - 2)) = 0;
        }
      }
      else {
        *(undefined4 *)puVar3 = 0;
        *(undefined4 *)((long)puVar3 + ((uVar18 & 0xffffffff) - 4)) = 0;
      }
    }
    else {
      *puVar3 = 0;
      *(undefined8 *)((long)puVar3 + ((uVar18 & 0xffffffff) - 8)) = 0;
      uVar23 = uVar23 + ((int)puVar3 - (int)((ulong)(puVar3 + 1) & 0xfffffffffffffff8)) & 0xfffffff8
      ;
      if (7 < uVar23) {
        uVar25 = 0;
        do {
          uVar18 = (ulong)uVar25;
          uVar25 = uVar25 + 8;
          *(undefined8 *)(((ulong)(puVar3 + 1) & 0xfffffffffffffff8) + uVar18) = 0;
        } while (uVar25 < uVar23);
      }
    }
    lVar29 = -0x49 - lVar17;
    local_f0 = (local_f0 + 0x40) - uVar26;
    if (0x38 < uVar21) goto LAB_0051cefe;
  }
  else {
    lVar29 = -0x49 - lVar17;
LAB_0051cefe:
    uVar21 = (uint)((lVar17 + 8) - local_f0 >> 0x20);
    *(uint *)(lVar16 + 0x238) = *(uint *)(lVar16 + 0x238) | uVar15 & (int)uVar21 >> 0x1f;
    sha256_block_data_order(pSVar1,lVar28,1);
    lVar2 = lVar29 + local_f0;
    local_f0 = local_f0 + 0x40;
    uVar21 = (int)(uVar21 & (uint)((ulong)lVar2 >> 0x20)) >> 0x1f;
    local_80[0] = local_80[0] | *(uint *)(lVar16 + 0x1d4) & uVar21;
    local_80[1] = local_80[1] | *(uint *)(lVar16 + 0x1d8) & uVar21;
    local_80[2] = local_80[2] | *(uint *)(lVar16 + 0x1dc) & uVar21;
    local_80[3] = local_80[3] | *(uint *)(lVar16 + 0x1e0) & uVar21;
    local_80[4] = local_80[4] | *(uint *)(lVar16 + 0x1e4) & uVar21;
    local_80[5] = local_80[5] | *(uint *)(lVar16 + 0x1e8) & uVar21;
    local_80[6] = local_80[6] | *(uint *)(lVar16 + 0x1ec) & uVar21;
    local_80[7] = local_80[7] | uVar21 & *(uint *)(lVar16 + 0x1f0);
    *(undefined1 (*) [16])(lVar16 + 0x1fc) = (undefined1  [16])0x0;
    *(undefined1 (*) [16])(lVar16 + 0x20c) = (undefined1  [16])0x0;
    *(undefined1 (*) [16])(lVar16 + 0x21c) = (undefined1  [16])0x0;
    *(undefined1 (*) [16])(lVar16 + 0x22c) = (undefined1  [16])0x0;
  }
  *(uint *)(lVar16 + 0x238) = uVar15;
  sha256_block_data_order(pSVar1,lVar28,1);
  uVar21 = (uint)((long)(local_f0 + lVar29) >> 0x3f);
  local_80[1] = *(uint *)(lVar16 + 0x1d8) & uVar21 | local_80[1];
  local_80[2] = *(uint *)(lVar16 + 0x1dc) & uVar21 | local_80[2];
  local_80[3] = *(uint *)(lVar16 + 0x1e0) & uVar21 | local_80[3];
  local_80[4] = *(uint *)(lVar16 + 0x1e4) & uVar21 | local_80[4];
  local_80[5] = *(uint *)(lVar16 + 0x1e8) & uVar21 | local_80[5];
  local_80[6] = *(uint *)(lVar16 + 0x1ec) & uVar21 | local_80[6];
  local_80[7] = *(uint *)(lVar16 + 0x1f0) & uVar21 | local_80[7];
  local_80[0] = uVar21 & *(uint *)(lVar16 + 0x1d4) | local_80[0];
  local_80[3] = local_80[3] >> 0x18 | (local_80[3] & 0xff0000) >> 8 | (local_80[3] & 0xff00) << 8 |
                local_80[3] << 0x18;
  local_80[2] = local_80[2] >> 0x18 | (local_80[2] & 0xff0000) >> 8 | (local_80[2] & 0xff00) << 8 |
                local_80[2] << 0x18;
  local_80[1] = local_80[1] >> 0x18 | (local_80[1] & 0xff0000) >> 8 | (local_80[1] & 0xff00) << 8 |
                local_80[1] << 0x18;
  local_80[0] = local_80[0] >> 0x18 | (local_80[0] & 0xff0000) >> 8 | (local_80[0] & 0xff00) << 8 |
                local_80[0] << 0x18;
  local_80[5] = local_80[5] >> 0x18 | (local_80[5] & 0xff0000) >> 8 | (local_80[5] & 0xff00) << 8 |
                local_80[5] << 0x18;
  local_80[4] = local_80[4] >> 0x18 | (local_80[4] & 0xff0000) >> 8 | (local_80[4] & 0xff00) << 8 |
                local_80[4] << 0x18;
  local_80[7] = local_80[7] >> 0x18 | (local_80[7] & 0xff0000) >> 8 | (local_80[7] & 0xff00) << 8 |
                local_80[7] << 0x18;
  local_80[6] = local_80[6] >> 0x18 | (local_80[6] & 0xff0000) >> 8 | (local_80[6] & 0xff00) << 8 |
                local_80[6] << 0x18;
  *(undefined8 *)(lVar16 + 0x1d4) = *(undefined8 *)(lVar16 + 0x164);
  *(undefined8 *)(lVar16 + 0x1dc) = *(undefined8 *)(lVar16 + 0x16c);
  *(undefined8 *)(lVar16 + 0x1e4) = *(undefined8 *)(lVar16 + 0x174);
  *(undefined8 *)(lVar16 + 0x1ec) = *(undefined8 *)(lVar16 + 0x17c);
  *(undefined8 *)(lVar16 + 500) = *(undefined8 *)(lVar16 + 0x184);
  *(undefined8 *)(lVar16 + 0x1fc) = *(undefined8 *)(lVar16 + 0x18c);
  *(undefined8 *)(lVar16 + 0x204) = *(undefined8 *)(lVar16 + 0x194);
  *(undefined8 *)(lVar16 + 0x20c) = *(undefined8 *)(lVar16 + 0x19c);
  *(undefined8 *)(lVar16 + 0x214) = *(undefined8 *)(lVar16 + 0x1a4);
  *(undefined8 *)(lVar16 + 0x21c) = *(undefined8 *)(lVar16 + 0x1ac);
  *(undefined8 *)(lVar16 + 0x224) = *(undefined8 *)(lVar16 + 0x1b4);
  *(undefined8 *)(lVar16 + 0x22c) = *(undefined8 *)(lVar16 + 0x1bc);
  *(undefined8 *)(lVar16 + 0x234) = *(undefined8 *)(lVar16 + 0x1c4);
  *(undefined8 *)(lVar16 + 0x23c) = *(undefined8 *)(lVar16 + 0x1cc);
  sha256_update(pSVar1,local_80,0x20);
  SHA256_Final((uchar *)local_80,pSVar1);
  lVar28 = local_d0 - uVar19;
  iVar22 = ((int)lVar17 - (int)lVar28) + 1;
  lVar16 = (long)local_c8 + lVar28;
  uVar21 = 0;
  iVar13 = (int)lVar16;
  do {
    uVar23 = ((-0x20 - iVar22) - iVar13) + (int)lVar16;
    uVar15 = (iVar13 + -1 + iVar22) - (int)lVar16 & uVar23;
    uVar21 = uVar21 | (uint)(*(byte *)(lVar16 + -1) ^ *(byte *)((long)local_80 + local_e8)) &
                      (int)uVar15 >> 0x1f |
                      (*(byte *)(lVar16 + -1) ^ uVar14) & ~((int)uVar23 >> 0x1f);
    local_e8 = (local_e8 + 1) - (ulong)(-1 < (int)uVar15);
    lVar16 = lVar16 + 1;
  } while (lVar16 != (ulong)(uVar19 + 0x20) + lVar28 + (long)local_c8);
  iVar22 = ((int)(-uVar21 | uVar20) >> 0x1f) + 1;
LAB_0051c616:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail_local();
  }
  return iVar22;
}

