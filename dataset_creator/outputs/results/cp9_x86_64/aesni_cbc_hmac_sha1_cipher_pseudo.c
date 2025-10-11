
ulong aesni_cbc_hmac_sha1_cipher(long param_1,undefined8 *param_2,undefined8 *param_3,ulong param_4)

{
  uchar *md;
  long lVar1;
  byte bVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  uint uVar13;
  int iVar14;
  uint uVar15;
  long lVar16;
  ulong uVar17;
  uint uVar18;
  uint uVar19;
  long lVar20;
  SHA_CTX *pSVar21;
  uint uVar22;
  long lVar23;
  uint uVar24;
  int iVar25;
  uint uVar26;
  ulong uVar27;
  long lVar28;
  ulong uVar29;
  ulong uVar30;
  undefined8 *puVar31;
  long in_FS_OFFSET;
  undefined8 *local_b8;
  ulong local_b0;
  long local_a8;
  ulong local_a0;
  uint local_60 [8];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  lVar16 = EVP_CIPHER_CTX_get_cipher_data();
  uVar30 = *(ulong *)(lVar16 + 0x218);
  iVar14 = *(int *)(lVar16 + 0x210);
  *(undefined8 *)(lVar16 + 0x218) = 0xffffffffffffffff;
  local_b0 = (ulong)((uint)param_4 & 0xf);
  if ((param_4 & 0xf) != 0) {
LAB_0051ac10:
    uVar17 = 0;
    goto LAB_0051ac12;
  }
  uVar17 = EVP_CIPHER_CTX_is_encrypting(param_1);
  local_b8 = param_2;
  if ((int)uVar17 == 0) {
    if (uVar30 == 0xffffffffffffffff) {
      aesni_cbc_encrypt(param_3,param_2,param_4,lVar16,param_1 + 0x28,0);
      sha1_update(lVar16 + 0x1b4,param_2,param_4);
      uVar17 = 1;
      goto LAB_0051ac12;
    }
    if (CONCAT11(*(undefined1 *)(lVar16 + 0x21c + uVar30),*(undefined1 *)(lVar16 + 0x21d + uVar30))
        < 0x302) {
      if (param_4 < 0x15) goto LAB_0051ac12;
    }
    else {
      if (param_4 < 0x25) goto LAB_0051ac12;
      local_b8 = param_2 + 2;
      uVar3 = *param_3;
      uVar4 = param_3[1];
      param_4 = param_4 - 0x10;
      param_3 = param_3 + 2;
      *(undefined8 *)(param_1 + 0x28) = uVar3;
      *(undefined8 *)(param_1 + 0x30) = uVar4;
    }
    lVar28 = lVar16 + 0x1d0;
    aesni_cbc_encrypt(param_3,local_b8,param_4,lVar16,param_1 + 0x28,0);
    uVar24 = (int)param_4 - 0x15;
    pSVar21 = (SHA_CTX *)(lVar16 + 0x1b4);
    uVar11 = *(undefined8 *)(lVar16 + 0xf4);
    uVar12 = *(undefined8 *)(lVar16 + 0xfc);
    uVar3 = *(undefined8 *)(lVar16 + 0x104);
    uVar4 = *(undefined8 *)(lVar16 + 0x10c);
    uVar5 = *(undefined8 *)(lVar16 + 0x124);
    uVar6 = *(undefined8 *)(lVar16 + 300);
    uVar7 = *(undefined8 *)(lVar16 + 0x134);
    uVar8 = *(undefined8 *)(lVar16 + 0x13c);
    uVar9 = *(undefined8 *)(lVar16 + 0x144);
    uVar10 = *(undefined8 *)(lVar16 + 0x14c);
    uVar19 = 0xff - uVar24 >> 0x18 | uVar24 & 0xff;
    uVar24 = uVar19 - *(byte *)((long)local_b8 + (param_4 - 1));
    uVar15 = (int)uVar24 >> 0x1f & uVar19;
    lVar20 = param_4 - (uVar15 + 0x15);
    *(char *)(lVar16 + 0x21f + uVar30) = (char)lVar20;
    *(char *)(lVar16 + 0x21e + uVar30) = (char)((ulong)lVar20 >> 8);
    uVar17 = param_4 - 0x14;
    *(undefined8 *)(lVar16 + 0x1b4) = uVar11;
    *(undefined8 *)(lVar16 + 0x1bc) = uVar12;
    *(undefined8 *)(lVar16 + 0x1c4) = uVar3;
    *(undefined8 *)(lVar16 + 0x1cc) = uVar4;
    *(undefined8 *)(lVar16 + 0x1d4) = *(undefined8 *)(lVar16 + 0x114);
    *(undefined8 *)(lVar16 + 0x1dc) = *(undefined8 *)(lVar16 + 0x11c);
    *(undefined8 *)(lVar16 + 0x1e4) = uVar5;
    *(undefined8 *)(lVar16 + 0x1ec) = uVar6;
    *(undefined8 *)(lVar16 + 500) = uVar7;
    *(undefined8 *)(lVar16 + 0x1fc) = uVar8;
    *(undefined8 *)(lVar16 + 0x204) = uVar9;
    *(undefined8 *)(lVar16 + 0x20c) = uVar10;
    sha1_update(pSVar21,lVar16 + 0x220,uVar30);
    if (uVar17 < 0x140) {
      uVar18 = *(uint *)(lVar16 + 0x210);
      uVar13 = *(int *)(lVar16 + 0x1c8) + (int)lVar20 * 8;
      uVar13 = uVar13 >> 0x18 | (uVar13 & 0xff0000) >> 8 | (uVar13 & 0xff00) << 8 |
               uVar13 * 0x1000000;
LAB_0051ae63:
      local_60[4] = 0;
      local_60[2] = 0;
      local_60[3] = 0;
      local_60[0] = 0;
      local_60[1] = 0;
      lVar23 = -lVar20;
      do {
        uVar30 = (ulong)uVar18;
        uVar18 = uVar18 + 1;
        bVar2 = (byte)((ulong)lVar23 >> 0x38);
        *(byte *)(lVar16 + 0x1d0 + uVar30) =
             ~((byte)((ulong)-lVar23 >> 0x38) | bVar2) & 0x80 |
             *(byte *)((long)local_b8 + lVar23 + lVar20) & bVar2;
        if (uVar18 == 0x40) {
          uVar18 = (uint)((ulong)(7 - lVar23) >> 0x20);
          *(uint *)(lVar16 + 0x20c) = *(uint *)(lVar16 + 0x20c) | uVar13 & (int)uVar18 >> 0x1f;
          sha1_block_data_order(pSVar21,lVar28,1);
          uVar18 = (int)((uint)((ulong)(lVar23 + -0x48) >> 0x20) & uVar18) >> 0x1f;
          local_60[0] = local_60[0] | *(uint *)(lVar16 + 0x1b4) & uVar18;
          local_60[1] = local_60[1] | *(uint *)(lVar16 + 0x1b8) & uVar18;
          local_60[2] = local_60[2] | *(uint *)(lVar16 + 0x1bc) & uVar18;
          local_60[4] = local_60[4] | uVar18 & *(uint *)(lVar16 + 0x1c4);
          local_60[3] = local_60[3] | *(uint *)(lVar16 + 0x1c0) & uVar18;
          uVar18 = 0;
        }
        lVar23 = lVar23 + 1;
      } while ((ulong)(lVar20 + lVar23) < uVar17);
      uVar30 = 1;
      if (uVar17 != 0) {
        uVar30 = uVar17;
      }
    }
    else {
      lVar23 = (ulong)(0x40 - *(int *)(lVar16 + 0x210)) + (param_4 - 0x154 & 0xffffffffffffffc0);
      lVar20 = lVar20 - lVar23;
      puVar31 = (undefined8 *)((long)local_b8 + lVar23);
      sha1_update(pSVar21,local_b8,lVar23);
      uVar30 = 0;
      local_60[0] = 0;
      local_60[1] = 0;
      uVar18 = *(uint *)(lVar16 + 0x210);
      uVar13 = *(int *)(lVar16 + 0x1c8) + (int)lVar20 * 8;
      local_60[2] = 0;
      local_60[3] = 0;
      uVar13 = uVar13 >> 0x18 | (uVar13 & 0xff0000) >> 8 | (uVar13 & 0xff00) << 8 |
               uVar13 * 0x1000000;
      uVar17 = uVar17 - lVar23;
      local_60[4] = 0;
      local_b8 = puVar31;
      if (uVar17 != 0) goto LAB_0051ae63;
    }
    uVar27 = (ulong)uVar18;
    if (uVar18 < 0x40) {
      puVar31 = (undefined8 *)(lVar16 + 0x1d0 + uVar27);
      uVar29 = 0x40 - uVar27;
      uVar22 = (uint)uVar29;
      if (uVar22 < 8) {
        if ((uVar29 & 4) == 0) {
          if ((uVar22 != 0) && (*(undefined1 *)puVar31 = 0, (uVar29 & 2) != 0)) {
            *(undefined2 *)((long)puVar31 + ((uVar29 & 0xffffffff) - 2)) = 0;
          }
        }
        else {
          *(undefined4 *)puVar31 = 0;
          *(undefined4 *)((long)puVar31 + ((uVar29 & 0xffffffff) - 4)) = 0;
        }
      }
      else {
        *puVar31 = 0;
        *(undefined8 *)((long)puVar31 + ((uVar29 & 0xffffffff) - 8)) = 0;
        uVar22 = uVar22 + ((int)puVar31 - (int)((ulong)(puVar31 + 1) & 0xfffffffffffffff8)) &
                 0xfffffff8;
        if (7 < uVar22) {
          uVar29 = 0;
          do {
            uVar26 = (int)uVar29 + 8;
            *(undefined8 *)(((ulong)(puVar31 + 1) & 0xfffffffffffffff8) + uVar29) = 0;
            uVar29 = (ulong)uVar26;
          } while (uVar26 < uVar22);
        }
      }
      uVar30 = (uVar30 + 0x40) - uVar27;
      lVar23 = -0x49 - lVar20;
      if (0x38 < uVar18) goto LAB_0051b477;
    }
    else {
      lVar23 = -0x49 - lVar20;
LAB_0051b477:
      uVar18 = (uint)((lVar20 + 8) - uVar30 >> 0x20);
      *(uint *)(lVar16 + 0x20c) = *(uint *)(lVar16 + 0x20c) | uVar13 & (int)uVar18 >> 0x1f;
      sha1_block_data_order(pSVar21,lVar28,1);
      lVar1 = lVar23 + uVar30;
      uVar30 = uVar30 + 0x40;
      uVar18 = (int)(uVar18 & (uint)((ulong)lVar1 >> 0x20)) >> 0x1f;
      local_60[0] = local_60[0] | *(uint *)(lVar16 + 0x1b4) & uVar18;
      local_60[1] = local_60[1] | *(uint *)(lVar16 + 0x1b8) & uVar18;
      local_60[2] = local_60[2] | *(uint *)(lVar16 + 0x1bc) & uVar18;
      local_60[3] = local_60[3] | *(uint *)(lVar16 + 0x1c0) & uVar18;
      local_60[4] = local_60[4] | uVar18 & *(uint *)(lVar16 + 0x1c4);
      *(undefined1 (*) [16])(lVar16 + 0x1d0) = (undefined1  [16])0x0;
      *(undefined1 (*) [16])(lVar16 + 0x1e0) = (undefined1  [16])0x0;
      *(undefined1 (*) [16])(lVar16 + 0x1f0) = (undefined1  [16])0x0;
      *(undefined1 (*) [16])(lVar16 + 0x200) = (undefined1  [16])0x0;
    }
    *(uint *)(lVar16 + 0x20c) = uVar13;
    sha1_block_data_order(pSVar21,lVar28,1);
    uVar18 = (uint)((long)(uVar30 + lVar23) >> 0x3f);
    local_60[1] = *(uint *)(lVar16 + 0x1b8) & uVar18 | local_60[1];
    local_60[2] = *(uint *)(lVar16 + 0x1bc) & uVar18 | local_60[2];
    local_60[3] = *(uint *)(lVar16 + 0x1c0) & uVar18 | local_60[3];
    local_60[4] = *(uint *)(lVar16 + 0x1c4) & uVar18 | local_60[4];
    local_60[0] = uVar18 & *(uint *)(lVar16 + 0x1b4) | local_60[0];
    local_60[4] = local_60[4] >> 0x18 | (local_60[4] & 0xff0000) >> 8 | (local_60[4] & 0xff00) << 8
                  | local_60[4] << 0x18;
    local_60[3] = local_60[3] >> 0x18 | (local_60[3] & 0xff0000) >> 8 | (local_60[3] & 0xff00) << 8
                  | local_60[3] << 0x18;
    local_60[2] = local_60[2] >> 0x18 | (local_60[2] & 0xff0000) >> 8 | (local_60[2] & 0xff00) << 8
                  | local_60[2] << 0x18;
    local_60[1] = local_60[1] >> 0x18 | (local_60[1] & 0xff0000) >> 8 | (local_60[1] & 0xff00) << 8
                  | local_60[1] << 0x18;
    local_60[0] = local_60[0] >> 0x18 | (local_60[0] & 0xff0000) >> 8 | (local_60[0] & 0xff00) << 8
                  | local_60[0] << 0x18;
    *(undefined8 *)(lVar16 + 0x1b4) = *(undefined8 *)(lVar16 + 0x154);
    *(undefined8 *)(lVar16 + 0x1bc) = *(undefined8 *)(lVar16 + 0x15c);
    *(undefined8 *)(lVar16 + 0x1c4) = *(undefined8 *)(lVar16 + 0x164);
    *(undefined8 *)(lVar16 + 0x1cc) = *(undefined8 *)(lVar16 + 0x16c);
    *(undefined8 *)(lVar16 + 0x1d4) = *(undefined8 *)(lVar16 + 0x174);
    *(undefined8 *)(lVar16 + 0x1dc) = *(undefined8 *)(lVar16 + 0x17c);
    *(undefined8 *)(lVar16 + 0x1e4) = *(undefined8 *)(lVar16 + 0x184);
    *(undefined8 *)(lVar16 + 0x1ec) = *(undefined8 *)(lVar16 + 0x18c);
    *(undefined8 *)(lVar16 + 500) = *(undefined8 *)(lVar16 + 0x194);
    *(undefined8 *)(lVar16 + 0x1fc) = *(undefined8 *)(lVar16 + 0x19c);
    *(undefined8 *)(lVar16 + 0x204) = *(undefined8 *)(lVar16 + 0x1a4);
    *(undefined8 *)(lVar16 + 0x20c) = *(undefined8 *)(lVar16 + 0x1ac);
    sha1_update(pSVar21,local_60,0x14);
    SHA1_Final((uchar *)local_60,pSVar21);
    uVar18 = 0;
    lVar28 = uVar17 - uVar19;
    iVar14 = ((int)lVar20 - (int)lVar28) + 1;
    lVar16 = (long)local_b8 + lVar28;
    iVar25 = (int)lVar16;
    do {
      uVar22 = ((-0x14 - iVar14) - iVar25) + (int)lVar16;
      uVar13 = (iVar25 + -1 + iVar14) - (int)lVar16 & uVar22;
      uVar18 = uVar18 | (uint)(*(byte *)(lVar16 + -1) ^ *(byte *)((long)local_60 + local_b0)) &
                        (int)uVar13 >> 0x1f |
                        (*(byte *)(lVar16 + -1) ^ uVar15) & ~((int)uVar22 >> 0x1f);
      local_b0 = (local_b0 + 1) - (ulong)(-1 < (int)uVar13);
      lVar16 = lVar16 + 1;
    } while ((ulong)(uVar19 + 0x14) + lVar28 + (long)local_b8 != lVar16);
    uVar17 = (ulong)(((int)(-uVar18 | uVar24) >> 0x1f) + 1);
    goto LAB_0051ac12;
  }
  uVar17 = (ulong)(0x40 - iVar14);
  local_a0 = param_4;
  if (uVar30 == 0xffffffffffffffff) {
    if (uVar17 < param_4) {
      lVar28 = 0;
      puVar31 = param_3;
      uVar27 = uVar17;
      uVar30 = param_4;
LAB_0051b185:
      uVar29 = uVar30 - uVar27;
      if (0x3f < uVar29) {
        sha1_update(lVar16 + 0x1b4,puVar31,uVar17);
        aesni_cbc_sha1_enc(param_3,param_2,uVar29 >> 6,lVar16,param_1 + 0x28,lVar16 + 0x1b4,
                           uVar27 + (long)param_3);
        local_b0 = uVar29 & 0xffffffffffffffc0;
        uVar15 = (int)local_b0 * 8;
        uVar24 = *(uint *)(lVar16 + 0x1c8);
        *(uint *)(lVar16 + 0x1c8) = uVar15 + *(uint *)(lVar16 + 0x1c8);
        local_a0 = param_4 - local_b0;
        lVar28 = lVar28 + uVar17 + local_b0;
        puVar31 = (undefined8 *)((long)param_3 + lVar28);
        *(uint *)(lVar16 + 0x1cc) =
             (int)(uVar29 >> 0x1d) + *(int *)(lVar16 + 0x1cc) + (uint)CARRY4(uVar15,uVar24);
        local_b8 = (undefined8 *)((long)param_2 + local_b0);
      }
      goto LAB_0051b1ae;
    }
    sha1_update(lVar16 + 0x1b4,param_3,param_4);
  }
  else {
    if ((uVar30 + 0x24 & 0xfffffffffffffff0) != param_4) goto LAB_0051ac10;
    uVar27 = (ulong)(0x301 < *(uint *)(lVar16 + 0x220));
    lVar28 = uVar27 * 0x10;
    puVar31 = param_3 + uVar27 * 2;
    uVar27 = lVar28 + uVar17;
    if (lVar28 + uVar17 < uVar30) goto LAB_0051b185;
LAB_0051b1ae:
    local_a8 = param_1 + 0x28;
    pSVar21 = (SHA_CTX *)(lVar16 + 0x1b4);
    sha1_update(pSVar21,puVar31,uVar30 - lVar28);
    if (param_4 != uVar30) {
      if (param_3 != param_2) {
        memcpy(local_b8,(void *)(local_b0 + (long)param_3),uVar30 - local_b0);
      }
      md = (uchar *)((long)param_2 + uVar30);
      SHA1_Final(md,pSVar21);
      *(undefined8 *)(lVar16 + 0x1b4) = *(undefined8 *)(lVar16 + 0x154);
      *(undefined8 *)(lVar16 + 0x1bc) = *(undefined8 *)(lVar16 + 0x15c);
      *(undefined8 *)(lVar16 + 0x1c4) = *(undefined8 *)(lVar16 + 0x164);
      *(undefined8 *)(lVar16 + 0x1cc) = *(undefined8 *)(lVar16 + 0x16c);
      *(undefined8 *)(lVar16 + 0x1d4) = *(undefined8 *)(lVar16 + 0x174);
      *(undefined8 *)(lVar16 + 0x1dc) = *(undefined8 *)(lVar16 + 0x17c);
      *(undefined8 *)(lVar16 + 0x1e4) = *(undefined8 *)(lVar16 + 0x184);
      *(undefined8 *)(lVar16 + 0x1ec) = *(undefined8 *)(lVar16 + 0x18c);
      *(undefined8 *)(lVar16 + 500) = *(undefined8 *)(lVar16 + 0x194);
      *(undefined8 *)(lVar16 + 0x1fc) = *(undefined8 *)(lVar16 + 0x19c);
      *(undefined8 *)(lVar16 + 0x204) = *(undefined8 *)(lVar16 + 0x1a4);
      *(undefined8 *)(lVar16 + 0x20c) = *(undefined8 *)(lVar16 + 0x1ac);
      sha1_update(pSVar21,md,0x14);
      SHA1_Final(md,pSVar21);
      uVar17 = uVar30 + 0x14;
      if (uVar17 < param_4) {
        memset((void *)(uVar17 + (long)param_2),((uint)param_4 - 1) - (int)uVar17 & 0xff,
               (param_4 - 0x14) - uVar30);
      }
      aesni_cbc_encrypt(local_b8,local_b8,local_a0,lVar16,local_a8,1);
      uVar17 = 1;
      goto LAB_0051ac12;
    }
    param_3 = (undefined8 *)((long)param_3 + local_b0);
  }
  local_a8 = param_1 + 0x28;
  aesni_cbc_encrypt(param_3,local_b8,local_a0,lVar16,local_a8,1);
  uVar17 = 1;
LAB_0051ac12:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail_local();
  }
  return uVar17;
}

