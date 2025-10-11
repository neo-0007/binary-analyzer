
void AES_cbc_encrypt(uchar *in,uchar *out,size_t length,AES_KEY *key,uchar *ivec,int enc)

{
  uint uVar1;
  uint uVar2;
  long lVar3;
  undefined4 *puVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  uchar *puVar8;
  undefined4 uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  int iVar13;
  uint uVar14;
  long lVar15;
  undefined4 extraout_EDX;
  uint extraout_EDX_00;
  uint extraout_EDX_01;
  undefined4 extraout_EDX_02;
  uint extraout_EDX_03;
  uint uVar16;
  undefined1 *puVar17;
  int *piVar18;
  uint *puVar19;
  uchar *puVar20;
  ulong uVar21;
  size_t sVar22;
  ulong uVar23;
  long lVar24;
  undefined8 *puVar25;
  AES_KEY *pAVar26;
  byte bVar27;
  long alStack_1c8 [3];
  undefined1 auStack_1b0 [8];
  long alStack_1a8 [5];
  uint auStack_180 [2];
  undefined8 uStack_178;
  undefined1 auStack_170 [244];
  uint uStack_7c;
  undefined8 uStack_78;
  
  if (length != 0) {
    bVar27 = 0;
    puVar25 = (undefined8 *)&DAT_00488d00;
    if (enc == 0) {
      puVar25 = &DAT_00489940;
    }
    if (((length < 0x200) || ((length & 0xf) != 0)) || ((OPENSSL_ia32cap_P >> 0x1c & 1) != 0)) {
      lVar24 = -(-((long)key + (-0x97 - (long)(auStack_170 + 0xb0))) & 0x3c0U);
      *(undefined1 **)(auStack_170 + lVar24 + 0xc0) = &stack0xffffffffffffffc8;
      *(uchar **)(auStack_170 + lVar24 + 0xe8) = ivec;
      iVar13 = key->rounds;
      *(AES_KEY **)(auStack_170 + 0xb0 + lVar24) = key;
      *(ulong *)(auStack_170 + lVar24 + 0xb8) = (long)key->rd_key + (ulong)(uint)(iVar13 << 4);
      if (enc == 0) {
        uVar6 = *(undefined8 *)(ivec + 8);
        *(undefined8 *)(auStack_170 + lVar24 + 0xf0) = *(undefined8 *)ivec;
        *(undefined8 *)((long)&uStack_78 + lVar24) = uVar6;
        while( true ) {
          uVar16 = *(uint *)(in + 4);
          uVar14 = *(uint *)(in + 8);
          *(uchar **)(auStack_170 + lVar24 + 200) = in;
          *(uchar **)(auStack_170 + lVar24 + 0xd0) = out;
          *(size_t *)(auStack_170 + lVar24 + 0xd8) = length;
          *(undefined8 *)(auStack_170 + lVar24 + 0xa8) = 0x488c23;
          uVar12 = _x86_64_AES_decrypt_compact();
          puVar25 = *(undefined8 **)(auStack_170 + lVar24 + 200);
          puVar19 = *(uint **)(auStack_170 + lVar24 + 0xd0);
          uVar23 = *(ulong *)(auStack_170 + lVar24 + 0xd8);
          uVar12 = uVar12 ^ *(uint *)(auStack_170 + lVar24 + 0xf0);
          uVar16 = uVar16 ^ *(uint *)((long)&uStack_7c + lVar24);
          uVar14 = uVar14 ^ *(uint *)((long)&uStack_78 + lVar24);
          uVar11 = extraout_EDX_03 ^ *(uint *)((long)&uStack_78 + lVar24 + 4);
          uVar6 = *puVar25;
          uVar7 = puVar25[1];
          length = uVar23 - 0x10;
          if (uVar23 < 0x10) break;
          if (length == 0) {
            puVar25 = *(undefined8 **)(auStack_170 + lVar24 + 0xe8);
            *puVar25 = uVar6;
            puVar25[1] = uVar7;
            *puVar19 = uVar12;
            puVar19[1] = uVar16;
            puVar19[2] = uVar14;
            puVar19[3] = uVar11;
            return;
          }
          *(undefined8 *)(auStack_170 + lVar24 + 0xf0) = uVar6;
          *(undefined8 *)((long)&uStack_78 + lVar24) = uVar7;
          *puVar19 = uVar12;
          puVar19[1] = uVar16;
          puVar19[2] = uVar14;
          puVar19[3] = uVar11;
          in = (uchar *)(puVar25 + 2);
          out = (uchar *)(puVar19 + 4);
        }
        puVar25 = *(undefined8 **)(auStack_170 + lVar24 + 0xe8);
        *puVar25 = uVar6;
        puVar25[1] = uVar7;
        *(uint *)(auStack_170 + lVar24 + 0xf0) = uVar12;
        *(uint *)((long)&uStack_7c + lVar24) = uVar16;
        *(uint *)((long)&uStack_78 + lVar24) = uVar14;
        *(uint *)((long)&uStack_78 + lVar24 + 4) = uVar11;
        puVar17 = auStack_170 + lVar24 + 0xf0;
        for (; uVar23 != 0; uVar23 = uVar23 - 1) {
          *(undefined1 *)puVar19 = *puVar17;
          puVar17 = puVar17 + (ulong)bVar27 * -2 + 1;
          puVar19 = (uint *)((long)puVar19 + (ulong)bVar27 * -2 + 1);
        }
      }
      else {
        uVar16 = *(uint *)(ivec + 4);
        uVar23 = (ulong)*(uint *)(ivec + 8);
        puVar20 = in;
        sVar22 = length;
        puVar8 = out;
        if ((length & 0xfffffffffffffff0) == 0) goto code_r0x00488baf;
        while( true ) {
          do {
            uVar16 = uVar16 ^ *(uint *)(puVar20 + 4);
            uVar23 = (ulong)((uint)uVar23 ^ *(uint *)(puVar20 + 8));
            *(uchar **)(auStack_170 + lVar24 + 200) = puVar20;
            *(uchar **)(auStack_170 + lVar24 + 0xd0) = out;
            *(size_t *)(auStack_170 + lVar24 + 0xd8) = length;
            *(undefined8 *)(auStack_170 + lVar24 + 0xa8) = 0x488b4b;
            uVar9 = _x86_64_AES_encrypt_compact();
            lVar15 = *(long *)(auStack_170 + lVar24 + 200);
            puVar4 = *(undefined4 **)(auStack_170 + lVar24 + 0xd0);
            lVar3 = *(long *)(auStack_170 + lVar24 + 0xd8);
            *puVar4 = uVar9;
            puVar4[1] = uVar16;
            puVar4[2] = (int)uVar23;
            puVar4[3] = extraout_EDX_02;
            in = (uchar *)(lVar15 + 0x10);
            out = (uchar *)(puVar4 + 4);
            length = lVar3 - 0x10;
            puVar20 = in;
          } while ((length & 0xfffffffffffffff0) != 0);
          sVar22 = length;
          puVar8 = out;
          if ((length & 0xf) == 0) break;
code_r0x00488baf:
          for (; puVar20 = puVar8, length != 0; length = length - 1) {
            *out = *in;
            in = in + (ulong)bVar27 * -2 + 1;
            out = out + (ulong)bVar27 * -2 + 1;
            puVar8 = puVar20;
          }
          for (lVar15 = 0x10 - sVar22; lVar15 != 0; lVar15 = lVar15 + -1) {
            *out = '\0';
            out = out + (ulong)bVar27 * -2 + 1;
          }
          length = 0x10;
          out = puVar20;
        }
        puVar4 = *(undefined4 **)(auStack_170 + lVar24 + 0xe8);
        *puVar4 = uVar9;
        puVar4[1] = uVar16;
        puVar4[2] = (int)uVar23;
        puVar4[3] = extraout_EDX_02;
      }
    }
    else {
      uVar23 = (ulong)(alStack_1a8 + 4) & 0xfc0;
      if (uVar23 < ((ulong)(puVar25 + 0x120) & 0xfff)) {
        lVar24 = (uVar23 - ((ulong)puVar25 & 0xfff) & 0xfff) + 0x140;
      }
      else {
        lVar24 = uVar23 - ((ulong)(puVar25 + 0x120) & 0xfff);
      }
      lVar24 = -lVar24;
      *(undefined1 **)(auStack_1b0 + lVar24) = &stack0xffffffffffffffc8;
      *(uchar **)((long)alStack_1a8 + lVar24) = in;
      *(uchar **)((long)alStack_1a8 + lVar24 + 8) = out;
      *(size_t *)((long)alStack_1a8 + lVar24 + 0x10) = length;
      *(AES_KEY **)((long)alStack_1a8 + lVar24 + 0x18) = key;
      *(uchar **)((long)alStack_1a8 + lVar24 + 0x20) = ivec;
      *(undefined4 *)(auStack_170 + lVar24 + 0xf0) = 0;
      iVar13 = key->rounds;
      uVar23 = (long)key - (long)puVar25 & 0xfff;
      if ((uVar23 < 0x900) || (pAVar26 = key, 0xf07 < uVar23)) {
        pAVar26 = (AES_KEY *)(auStack_170 + lVar24);
        piVar18 = (int *)(auStack_170 + lVar24);
        for (lVar15 = 0x1e; lVar15 != 0; lVar15 = lVar15 + -1) {
          *(undefined8 *)piVar18 = *(undefined8 *)key->rd_key;
          key = (AES_KEY *)(key->rd_key + 2);
          piVar18 = piVar18 + 2;
        }
        *piVar18 = iVar13;
      }
      *(AES_KEY **)((long)alStack_1c8 + lVar24 + 8) = pAVar26;
      iVar13 = 0x12;
      do {
        iVar13 = iVar13 + -1;
      } while (iVar13 != 0);
      if (enc == 0) {
        if (out == in) {
          uVar6 = *(undefined8 *)(ivec + 8);
          *(undefined8 *)((long)auStack_180 + lVar24) = *(undefined8 *)ivec;
          *(undefined8 *)((long)&uStack_178 + lVar24) = uVar6;
          while( true ) {
            uVar16 = *(uint *)(in + 4);
            uVar14 = *(uint *)(in + 8);
            *(uchar **)((long)alStack_1a8 + lVar24) = in;
            *(undefined8 *)((long)alStack_1c8 + lVar24) = 0x488a01;
            uVar11 = _x86_64_AES_decrypt();
            puVar25 = *(undefined8 **)((long)alStack_1a8 + lVar24);
            uVar11 = uVar11 ^ *(uint *)((long)auStack_180 + lVar24);
            uVar16 = uVar16 ^ *(uint *)((long)auStack_180 + lVar24 + 4);
            uVar14 = uVar14 ^ *(uint *)((long)&uStack_178 + lVar24);
            uVar12 = *(uint *)(auStack_170 + lVar24 + -4);
            uVar6 = puVar25[1];
            lVar15 = *(long *)((long)alStack_1a8 + lVar24 + 0x10) + -0x10;
            if (lVar15 == 0) break;
            *(undefined8 *)((long)auStack_180 + lVar24) = *puVar25;
            *(undefined8 *)((long)&uStack_178 + lVar24) = uVar6;
            *(uint *)out = uVar11;
            *(uint *)((long)out + 4) = uVar16;
            *(uint *)((long)out + 8) = uVar14;
            *(uint *)((long)out + 0xc) = extraout_EDX_01 ^ uVar12;
            in = (uchar *)(puVar25 + 2);
            out = (uchar *)((long)out + 0x10);
            *(long *)((long)alStack_1a8 + lVar24 + 0x10) = lVar15;
          }
          puVar5 = *(undefined8 **)((long)alStack_1a8 + lVar24 + 0x20);
          *puVar5 = *puVar25;
          puVar5[1] = uVar6;
          *(uint *)out = uVar11;
          *(uint *)((long)out + 4) = uVar16;
          *(uint *)((long)out + 8) = uVar14;
          *(uint *)((long)out + 0xc) = extraout_EDX_01 ^ uVar12;
        }
        else {
          *(uchar **)((long)auStack_180 + lVar24) = ivec;
          do {
            uVar16 = *(uint *)(in + 4);
            uVar14 = *(uint *)(in + 8);
            *(uchar **)((long)alStack_1a8 + lVar24) = in;
            *(undefined8 *)((long)alStack_1c8 + lVar24) = 0x48896d;
            uVar10 = _x86_64_AES_decrypt();
            puVar19 = *(uint **)((long)auStack_180 + lVar24);
            puVar25 = *(undefined8 **)((long)alStack_1a8 + lVar24);
            uVar12 = *puVar19;
            uVar11 = puVar19[1];
            uVar1 = puVar19[2];
            uVar2 = puVar19[3];
            lVar15 = *(long *)((long)alStack_1a8 + lVar24 + 0x10) + -0x10;
            *(long *)((long)alStack_1a8 + lVar24 + 0x10) = lVar15;
            *(undefined8 **)((long)auStack_180 + lVar24) = puVar25;
            *(uint *)out = uVar10 ^ uVar12;
            *(uint *)((long)out + 4) = uVar16 ^ uVar11;
            *(uint *)((long)out + 8) = uVar14 ^ uVar1;
            *(uint *)((long)out + 0xc) = extraout_EDX_00 ^ uVar2;
            in = (uchar *)(puVar25 + 2);
            out = (uchar *)((long)out + 0x10);
          } while (lVar15 != 0);
          puVar5 = *(undefined8 **)((long)alStack_1a8 + lVar24 + 0x20);
          uVar6 = puVar25[1];
          *puVar5 = *puVar25;
          puVar5[1] = uVar6;
        }
      }
      else {
        uVar16 = *(uint *)(ivec + 4);
        uVar23 = (ulong)*(uint *)(ivec + 8);
        do {
          uVar16 = uVar16 ^ *(uint *)(in + 4);
          uVar23 = (ulong)((uint)uVar23 ^ *(uint *)(in + 8));
          *(uchar **)((long)alStack_1a8 + lVar24) = in;
          *(undefined8 *)((long)alStack_1c8 + lVar24) = 0x4888ed;
          uVar9 = _x86_64_AES_encrypt();
          lVar15 = *(long *)((long)alStack_1a8 + lVar24);
          lVar3 = *(long *)((long)alStack_1a8 + lVar24 + 0x10);
          *(undefined4 *)out = uVar9;
          *(uint *)(out + 4) = uVar16;
          *(int *)(out + 8) = (int)uVar23;
          *(undefined4 *)(out + 0xc) = extraout_EDX;
          in = (uchar *)(lVar15 + 0x10);
          out = out + 0x10;
          uVar21 = lVar3 - 0x10;
          *(ulong *)((long)alStack_1a8 + lVar24 + 0x10) = uVar21;
        } while ((uVar21 & 0xfffffffffffffff0) != 0);
        puVar4 = *(undefined4 **)((long)alStack_1a8 + lVar24 + 0x20);
        *puVar4 = uVar9;
        puVar4[1] = uVar16;
        puVar4[2] = (int)uVar23;
        puVar4[3] = extraout_EDX;
      }
      if (*(int *)(auStack_170 + lVar24 + 0xf0) != 0) {
        puVar25 = (undefined8 *)(auStack_170 + lVar24);
        for (lVar15 = 0x1e; lVar15 != 0; lVar15 = lVar15 + -1) {
          *puVar25 = 0;
          puVar25 = puVar25 + (ulong)bVar27 * -2 + 1;
        }
      }
    }
  }
  return;
}

