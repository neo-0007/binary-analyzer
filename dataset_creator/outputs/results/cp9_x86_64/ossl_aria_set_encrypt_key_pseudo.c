
undefined8 ossl_aria_set_encrypt_key(byte *param_1,uint param_2,uint *param_3)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  undefined8 uVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  uint uVar19;
  uint uVar20;
  uint uVar21;
  uint uVar22;
  long lVar23;
  uint uVar24;
  uint uVar25;
  uint uVar26;
  uint uVar27;
  uint uVar28;
  uint uVar29;
  uint local_58;
  uint local_40;
  uint local_3c;
  
  iVar6 = param_2 + 0x11f;
  if (-1 < (int)(param_2 + 0x100)) {
    iVar6 = param_2 + 0x100;
  }
  if ((param_1 == (byte *)0x0) || (param_3 == (uint *)0x0)) {
    uVar5 = 0xffffffff;
  }
  else if ((param_2 == 0x100) || ((param_2 & 0xffffffbf) == 0x80)) {
    param_3[0x44] = iVar6 >> 5;
    lVar23 = (long)((int)(param_2 - 0x80) >> 6) * 0x10;
    bVar1 = *param_1;
    uVar7 = (uint)bVar1 << 0x18 ^ (uint)param_1[1] << 0x10;
    uVar16 = (uint)param_1[3];
    uVar8 = uVar7 ^ uVar16 ^ (uint)param_1[2] << 8;
    bVar2 = param_1[4];
    uVar21 = uVar8 ^ *(uint *)(Key_RC + lVar23);
    uVar9 = (uint)bVar2 << 0x18 ^ (uint)param_1[5] << 0x10;
    uVar17 = (uint)param_1[7];
    uVar10 = uVar9 ^ uVar17 ^ (uint)param_1[6] << 8;
    bVar3 = param_1[8];
    uVar22 = *(uint *)(Key_RC + lVar23 + 4) ^ uVar10;
    uVar11 = (uint)bVar3 << 0x18 ^ (uint)param_1[9] << 0x10;
    uVar18 = (uint)param_1[0xb];
    uVar12 = uVar11 ^ uVar18 ^ (uint)param_1[10] << 8;
    bVar4 = param_1[0xc];
    uVar13 = (uint)bVar4 << 0x18 ^ (uint)param_1[0xd] << 0x10;
    uVar19 = (uint)param_1[0xf];
    uVar14 = uVar13 ^ uVar19 ^ (uint)param_1[0xe] << 8;
    uVar20 = uVar14 ^ *(uint *)(Key_RC + lVar23 + 0xc);
    uVar15 = *(uint *)(Key_RC + lVar23 + 8) ^ uVar12;
    uVar15 = *(uint *)(X1 + (long)(int)(uVar15 >> 8 & 0xff) * 4) ^
             *(uint *)(S1 + (ulong)(uVar15 >> 0x18) * 4) ^
             *(uint *)(X2 + (ulong)(uVar15 & 0xff) * 4) ^
             *(uint *)(S2 + (ulong)(uVar15 >> 0x10 & 0xff) * 4);
    uVar26 = *(uint *)(S1 + (ulong)(uVar22 >> 0x18) * 4) ^
             *(uint *)(X2 + (ulong)(uVar22 & 0xff) * 4) ^
             *(uint *)(S2 + (ulong)(uVar22 >> 0x10 & 0xff) * 4) ^
             *(uint *)(X1 + (long)(int)(uVar22 >> 8 & 0xff) * 4) ^ uVar15;
    uVar21 = *(uint *)(S1 + (ulong)(uVar21 >> 0x18) * 4) ^
             *(uint *)(X2 + (ulong)(uVar21 & 0xff) * 4) ^
             *(uint *)(S2 + (ulong)(uVar21 >> 0x10 & 0xff) * 4) ^
             *(uint *)(X1 + (long)(int)(uVar21 >> 8 & 0xff) * 4) ^ uVar26;
    uVar22 = *(uint *)(S1 + (ulong)(uVar20 >> 0x18) * 4) ^
             *(uint *)(X2 + (ulong)(uVar20 & 0xff) * 4) ^
             *(uint *)(S2 + (ulong)(uVar20 >> 0x10 & 0xff) * 4) ^
             *(uint *)(X1 + (long)(int)(uVar20 >> 8 & 0xff) * 4);
    uVar15 = uVar15 ^ uVar22 ^ uVar21;
    uVar22 = uVar22 ^ uVar26;
    uVar20 = uVar15 << 0x10 | uVar15 >> 0x10;
    local_40 = (((uVar26 ^ uVar15) & 0xff00ff) << 8 | (uVar26 ^ uVar15) >> 8 & 0xff00ff) ^ uVar20;
    uVar21 = uVar21 ^ local_40;
    uVar15 = uVar22 >> 8 & 0xff00 ^ (uVar22 & 0xff00) << 8 ^ uVar22 << 0x18 ^ uVar22 >> 0x18;
    local_3c = uVar15 ^ local_40;
    local_58 = uVar20 ^ uVar15 ^ uVar21;
    local_40 = local_40 ^ local_58;
    if (param_2 != 0x80) {
      uVar21 = uVar21 ^ (uint)param_1[0x11] << 0x10 ^ (uint)param_1[0x10] << 0x18 ^
                        (uint)param_1[0x13] ^ (uint)param_1[0x12] << 8;
      local_40 = local_40 ^
                 (uint)param_1[0x15] << 0x10 ^ (uint)param_1[0x14] << 0x18 ^ (uint)param_1[0x17] ^
                 (uint)param_1[0x16] << 8;
      if ((param_2 & 0xffffffbf) != 0x80) {
        local_58 = local_58 ^
                   (uint)param_1[0x19] << 0x10 ^ (uint)param_1[0x18] << 0x18 ^ (uint)param_1[0x1b] ^
                   (uint)param_1[0x1a] << 8;
        local_3c = local_3c ^
                   (uint)param_1[0x1f] ^ (uint)param_1[0x1d] << 0x10 ^ (uint)param_1[0x1c] << 0x18 ^
                   (uint)param_1[0x1e] << 8;
      }
    }
    uVar20 = local_58 ^ *(uint *)(Key_RC + lVar23 + 0x18);
    uVar22 = *(uint *)(Key_RC + lVar23 + 0x10) ^ uVar21;
    uVar15 = local_40 ^ *(uint *)(Key_RC + lVar23 + 0x14);
    uVar28 = local_3c ^ *(uint *)(Key_RC + lVar23 + 0x1c);
    uVar26 = *(uint *)(X1 + (ulong)(uVar20 >> 0x18) * 4) ^
             *(uint *)(S2 + (ulong)(uVar20 & 0xff) * 4) ^
             *(uint *)(X2 + (ulong)(uVar20 >> 0x10 & 0xff) * 4) ^
             *(uint *)(S1 + (long)(int)(uVar20 >> 8 & 0xff) * 4);
    uVar27 = *(uint *)(X1 + (ulong)(uVar15 >> 0x18) * 4) ^
             *(uint *)(S2 + (ulong)(uVar15 & 0xff) * 4) ^
             *(uint *)(X2 + (ulong)(uVar15 >> 0x10 & 0xff) * 4) ^
             *(uint *)(S1 + (long)(int)(uVar15 >> 8 & 0xff) * 4) ^ uVar26;
    uVar22 = *(uint *)(X1 + (ulong)(uVar22 >> 0x18) * 4) ^
             *(uint *)(S2 + (ulong)(uVar22 & 0xff) * 4) ^
             *(uint *)(X2 + (ulong)(uVar22 >> 0x10 & 0xff) * 4) ^
             *(uint *)(S1 + (long)(int)(uVar22 >> 8 & 0xff) * 4) ^ uVar27;
    uVar15 = *(uint *)(X1 + (ulong)(uVar28 >> 0x18) * 4) ^
             *(uint *)(S2 + (ulong)(uVar28 & 0xff) * 4) ^
             *(uint *)(X2 + (ulong)(uVar28 >> 0x10 & 0xff) * 4) ^
             *(uint *)(S1 + (long)(int)(uVar28 >> 8 & 0xff) * 4);
    uVar20 = uVar15 ^ uVar27;
    uVar15 = uVar26 ^ uVar15 ^ uVar22;
    uVar27 = uVar27 ^ uVar15;
    uVar26 = (uVar20 & 0xff00ff) << 8 | uVar20 >> 8 & 0xff00ff;
    uVar20 = uVar27 >> 8 & 0xff00 ^
             uVar27 << 0x18 ^ uVar27 >> 0x18 ^ uVar15 ^ (uVar27 & 0xff00) << 8;
    uVar27 = (uVar22 << 0x10 | uVar22 >> 0x10) ^ uVar20;
    uVar24 = uVar15 ^ uVar26 ^ uVar27;
    uVar27 = uVar27 ^ uVar8;
    uVar29 = uVar20 ^ uVar26 ^ uVar14;
    uVar22 = uVar10 ^ uVar20 ^ uVar24;
    uVar24 = uVar24 ^ uVar12;
    uVar15 = *(uint *)(Key_RC + lVar23 + 0x24) ^ uVar22;
    uVar20 = *(uint *)(Key_RC + lVar23 + 0x28) ^ uVar24;
    uVar28 = *(uint *)(Key_RC + lVar23 + 0x20) ^ uVar27;
    uVar26 = *(uint *)(Key_RC + lVar23 + 0x2c) ^ uVar29;
    uVar20 = *(uint *)(S1 + (ulong)(uVar20 >> 0x18) * 4) ^
             *(uint *)(X2 + (ulong)(uVar20 & 0xff) * 4) ^
             *(uint *)(S2 + (ulong)(uVar20 >> 0x10 & 0xff) * 4) ^
             *(uint *)(X1 + (long)(int)(uVar20 >> 8 & 0xff) * 4);
    uVar25 = *(uint *)(S1 + (ulong)(uVar15 >> 0x18) * 4) ^
             *(uint *)(X2 + (ulong)(uVar15 & 0xff) * 4) ^
             *(uint *)(S2 + (ulong)(uVar15 >> 0x10 & 0xff) * 4) ^
             *(uint *)(X1 + (long)(int)(uVar15 >> 8 & 0xff) * 4) ^ uVar20;
    uVar28 = *(uint *)(S1 + (ulong)(uVar28 >> 0x18) * 4) ^
             *(uint *)(X2 + (ulong)(uVar28 & 0xff) * 4) ^
             *(uint *)(S2 + (ulong)(uVar28 >> 0x10 & 0xff) * 4) ^
             *(uint *)(X1 + (long)(int)(uVar28 >> 8 & 0xff) * 4) ^ uVar25;
    uVar15 = *(uint *)(S1 + (ulong)(uVar26 >> 0x18) * 4) ^
             *(uint *)(X2 + (ulong)(uVar26 & 0xff) * 4) ^
             *(uint *)(S2 + (ulong)(uVar26 >> 0x10 & 0xff) * 4) ^
             *(uint *)(X1 + (long)(int)(uVar26 >> 8 & 0xff) * 4);
    uVar26 = uVar15 ^ uVar25;
    uVar15 = uVar20 ^ uVar15 ^ uVar28;
    uVar20 = uVar15 << 0x10 | uVar15 >> 0x10;
    uVar25 = (((uVar25 ^ uVar15) & 0xff00ff) << 8 | (uVar25 ^ uVar15) >> 8 & 0xff00ff) ^ uVar20;
    uVar28 = uVar28 ^ uVar25;
    uVar26 = (uVar26 & 0xff00) << 8 ^ uVar26 << 0x18 ^ uVar26 >> 0x18 ^ uVar26 >> 8 & 0xff00;
    uVar15 = uVar20 ^ uVar26 ^ uVar28;
    uVar28 = uVar28 ^ uVar21;
    uVar20 = uVar26 ^ local_3c ^ uVar25;
    uVar26 = local_40 ^ uVar25 ^ uVar15;
    uVar15 = uVar15 ^ local_58;
    *param_3 = uVar21 >> 0x13 ^ local_3c << 0xd ^ uVar8;
    param_3[1] = local_40 >> 0x13 ^ uVar21 << 0xd ^ uVar10;
    param_3[2] = local_58 >> 0x13 ^ local_40 << 0xd ^ uVar12;
    param_3[3] = local_3c >> 0x13 ^ local_58 << 0xd ^ uVar14;
    param_3[4] = uVar29 << 0xd ^ uVar21 ^ uVar27 >> 0x13;
    param_3[5] = uVar27 << 0xd ^ local_40 ^ uVar22 >> 0x13;
    param_3[6] = uVar24 >> 0x13 ^ uVar22 << 0xd ^ local_58;
    param_3[7] = uVar29 >> 0x13 ^ local_3c ^ uVar24 << 0xd;
    param_3[8] = uVar20 << 0xd ^ uVar27 ^ uVar28 >> 0x13;
    param_3[9] = uVar28 << 0xd ^ uVar22 ^ uVar26 >> 0x13;
    param_3[10] = uVar15 >> 0x13 ^ uVar26 << 0xd ^ uVar24;
    param_3[0xb] = uVar20 >> 0x13 ^ uVar29 ^ uVar15 << 0xd;
    param_3[0xc] = uVar7 >> 0x13 ^ uVar14 << 0xd ^ uVar28;
    param_3[0xd] = uVar9 >> 0x13 ^ uVar8 << 0xd ^ uVar26;
    param_3[0xe] = uVar11 >> 0x13 ^ uVar10 << 0xd ^ uVar15;
    param_3[0xf] = uVar13 >> 0x13 ^ uVar12 << 0xd ^ uVar20;
    param_3[0x10] = uVar21 >> 0x1f ^ local_3c * 2 ^ uVar8;
    param_3[0x11] = local_40 >> 0x1f ^ uVar21 * 2 ^ uVar10;
    param_3[0x12] = local_58 >> 0x1f ^ local_40 * 2 ^ uVar12;
    param_3[0x13] = local_3c >> 0x1f ^ local_58 * 2 ^ uVar14;
    param_3[0x14] = uVar29 * 2 ^ uVar21 ^ uVar27 >> 0x1f;
    param_3[0x15] = uVar27 * 2 ^ local_40 ^ uVar22 >> 0x1f;
    param_3[0x16] = uVar24 >> 0x1f ^ uVar22 * 2 ^ local_58;
    param_3[0x17] = uVar29 >> 0x1f ^ local_3c ^ uVar24 * 2;
    param_3[0x18] = uVar20 * 2 ^ uVar27 ^ uVar28 >> 0x1f;
    param_3[0x19] = uVar28 * 2 ^ uVar22 ^ uVar26 >> 0x1f;
    param_3[0x1a] = uVar15 >> 0x1f ^ uVar26 * 2 ^ uVar24;
    param_3[0x1b] = uVar20 >> 0x1f ^ uVar29 ^ uVar15 * 2;
    param_3[0x1c] = ((uint)bVar1 << 0x18) >> 0x1f ^ uVar14 * 2 ^ uVar28;
    param_3[0x1d] = ((uint)bVar2 << 0x18) >> 0x1f ^ uVar8 * 2 ^ uVar26;
    param_3[0x1e] = ((uint)bVar3 << 0x18) >> 0x1f ^ uVar10 * 2 ^ uVar15;
    param_3[0x1f] = ((uint)bVar4 << 0x18) >> 0x1f ^ uVar12 * 2 ^ uVar20;
    param_3[0x20] = local_58 >> 3 ^ local_40 << 0x1d ^ uVar8;
    param_3[0x21] = local_3c >> 3 ^ local_58 << 0x1d ^ uVar10;
    param_3[0x22] = uVar21 >> 3 ^ local_3c << 0x1d ^ uVar12;
    param_3[0x23] = local_40 >> 3 ^ uVar21 << 0x1d ^ uVar14;
    param_3[0x24] = uVar24 >> 3 ^ uVar22 << 0x1d ^ uVar21;
    param_3[0x25] = uVar29 >> 3 ^ local_40 ^ uVar24 << 0x1d;
    param_3[0x26] = uVar29 << 0x1d ^ local_58 ^ uVar27 >> 3;
    param_3[0x27] = uVar27 << 0x1d ^ local_3c ^ uVar22 >> 3;
    param_3[0x28] = uVar15 >> 3 ^ uVar26 << 0x1d ^ uVar27;
    param_3[0x29] = uVar20 >> 3 ^ uVar22 ^ uVar15 << 0x1d;
    param_3[0x2a] = uVar20 << 0x1d ^ uVar24 ^ uVar28 >> 3;
    param_3[0x2b] = uVar28 << 0x1d ^ uVar29 ^ uVar26 >> 3;
    param_3[0x2c] = uVar12 >> 3 ^ uVar17 << 0x1d ^ uVar28;
    param_3[0x2d] = uVar14 >> 3 ^ uVar18 << 0x1d ^ uVar26;
    param_3[0x2e] = uVar8 >> 3 ^ uVar19 << 0x1d ^ uVar15;
    param_3[0x2f] = uVar10 >> 3 ^ uVar16 << 0x1d ^ uVar20;
    param_3[0x30] = local_40 >> 1 ^ uVar21 << 0x1f ^ uVar8;
    param_3[0x31] = local_58 >> 1 ^ local_40 << 0x1f ^ uVar10;
    param_3[0x32] = local_3c >> 1 ^ local_58 << 0x1f ^ uVar12;
    param_3[0x33] = uVar21 >> 1 ^ local_3c << 0x1f ^ uVar14;
    if (param_2 != 0x80) {
      param_3[0x34] = uVar27 << 0x1f ^ uVar21 ^ uVar22 >> 1;
      param_3[0x35] = uVar24 >> 1 ^ uVar22 << 0x1f ^ local_40;
      param_3[0x36] = uVar29 >> 1 ^ local_58 ^ uVar24 << 0x1f;
      param_3[0x37] = uVar29 << 0x1f ^ local_3c ^ uVar27 >> 1;
      param_3[0x38] = uVar27 ^ uVar28 << 0x1f ^ uVar26 >> 1;
      param_3[0x39] = uVar15 >> 1 ^ uVar26 << 0x1f ^ uVar22;
      param_3[0x3a] = uVar20 >> 1 ^ uVar24 ^ uVar15 << 0x1f;
      param_3[0x3b] = uVar20 << 0x1f ^ uVar29 ^ uVar28 >> 1;
      if (0xc0 < (int)param_2) {
        param_3[0x3c] = uVar10 >> 1 ^ uVar16 << 0x1f ^ uVar28;
        param_3[0x3d] = uVar12 >> 1 ^ uVar17 << 0x1f ^ uVar26;
        param_3[0x3e] = uVar15 ^ uVar14 >> 1 ^ uVar18 << 0x1f;
        param_3[0x3f] = uVar8 >> 1 ^ uVar19 << 0x1f ^ uVar20;
        param_3[0x40] = local_40 >> 0xd ^ uVar21 << 0x13 ^ uVar8;
        param_3[0x41] = local_40 << 0x13 ^ local_58 >> 0xd ^ uVar10;
        param_3[0x43] = uVar21 >> 0xd ^ local_3c << 0x13 ^ uVar14;
        param_3[0x42] = local_58 << 0x13 ^ local_3c >> 0xd ^ uVar12;
      }
    }
    uVar5 = 0;
  }
  else {
    uVar5 = 0xfffffffe;
  }
  return uVar5;
}

