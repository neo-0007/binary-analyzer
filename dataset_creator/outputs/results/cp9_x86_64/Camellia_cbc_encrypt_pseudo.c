
/* WARNING: Type propagation algorithm not settling */

void Camellia_cbc_encrypt(uchar *in,uchar *out,size_t length,CAMELLIA_KEY *key,uchar *ivec,int enc)

{
  uint *puVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  ulong uVar6;
  undefined8 uVar7;
  uchar *puVar8;
  undefined1 *puVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  byte in_AF;
  byte in_TF;
  byte in_IF;
  byte bVar15;
  byte in_NT;
  byte in_AC;
  byte in_VIF;
  byte in_VIP;
  byte in_ID;
  ulong uStack_88;
  long alStack_80 [3];
  uint auStack_68 [2];
  undefined8 uStack_60;
  long lStack_58;
  undefined1 auStack_50 [32];
  
  bVar15 = 0;
  if (length != 0) {
    lVar3 = -(-((long)key + (-0x7f - (long)alStack_80)) & 0x3c0U);
    uVar10 = key->grand_rounds;
    *(uchar **)((long)&lStack_58 + lVar3) = ivec;
    *(undefined1 **)(auStack_50 + lVar3) = &stack0xffffffffffffffd0;
    lVar5 = 0x20;
    do {
      lVar5 = lVar5 + -1;
    } while (lVar5 != 0);
    if (enc == 0) {
      *(ulong *)((long)alStack_80 + lVar3) = (long)&key->u + (ulong)uVar10 * 0x40;
      *(uchar **)((long)alStack_80 + lVar3 + 8U) = in + (length + 0xf & 0xfffffffffffffff0);
      *(size_t *)((long)alStack_80 + lVar3 + 0x10U) = length & 0xf;
      uVar4 = *(undefined8 *)ivec;
      uVar7 = *(undefined8 *)(ivec + 8);
      while( true ) {
        uVar10 = *(uint *)in;
        uVar11 = *(uint *)((long)in + 4);
        uVar12 = *(uint *)((long)in + 8);
        uVar13 = uVar10 >> 0x18 | (uVar10 & 0xff0000) >> 8 | (uVar10 & 0xff00) << 8 | uVar10 << 0x18
        ;
        uVar10 = *(uint *)((long)in + 0xc);
        uVar11 = uVar11 >> 0x18 | (uVar11 & 0xff0000) >> 8 | (uVar11 & 0xff00) << 8 | uVar11 << 0x18
        ;
        *(undefined8 *)((long)auStack_68 + lVar3) = uVar4;
        uVar12 = uVar12 >> 0x18 | (uVar12 & 0xff0000) >> 8 | (uVar12 & 0xff00) << 8 | uVar12 << 0x18
        ;
        *(undefined8 *)((long)&uStack_60 + lVar3) = uVar7;
        uVar14 = uVar10 >> 0x18 | (uVar10 & 0xff0000) >> 8 | (uVar10 & 0xff00) << 8 | uVar10 << 0x18
        ;
        *(undefined8 *)((long)&uStack_88 + lVar3) = 0x4bac2e;
        _x86_64_Camellia_decrypt();
        uVar6 = *(ulong *)((long)alStack_80 + lVar3 + 0x10U);
        uVar4 = *(undefined8 *)in;
        uVar7 = *(undefined8 *)((long)in + 8);
        uVar10 = (uVar13 >> 0x18 | (uVar13 & 0xff0000) >> 8 | (uVar13 & 0xff00) << 8 |
                 uVar13 << 0x18) ^ *(uint *)((long)auStack_68 + lVar3);
        uVar11 = (uVar11 >> 0x18 | (uVar11 & 0xff0000) >> 8 | (uVar11 & 0xff00) << 8 |
                 uVar11 << 0x18) ^ *(uint *)((long)auStack_68 + lVar3 + 4);
        uVar12 = (uVar12 >> 0x18 | (uVar12 & 0xff0000) >> 8 | (uVar12 & 0xff00) << 8 |
                 uVar12 << 0x18) ^ *(uint *)((long)&uStack_60 + lVar3);
        in = (uchar *)((long)in + 0x10);
        uVar13 = (uVar14 >> 0x18 | (uVar14 & 0xff0000) >> 8 | (uVar14 & 0xff00) << 8 |
                 uVar14 << 0x18) ^ *(uint *)((long)&uStack_60 + lVar3 + 4);
        if ((uint *)in == *(uint **)((long)alStack_80 + lVar3 + 8U)) break;
        *(uint *)out = uVar10;
        *(uint *)((long)out + 4) = uVar11;
        *(uint *)((long)out + 8) = uVar12;
        *(uint *)((long)out + 0xc) = uVar13;
        out = (uchar *)((long)out + 0x10);
      }
      puVar2 = *(undefined8 **)((long)&lStack_58 + lVar3);
      if (uVar6 == 0) {
        *(uint *)out = uVar10;
        *(uint *)((long)out + 4) = uVar11;
        *(uint *)((long)out + 8) = uVar12;
        *(uint *)((long)out + 0xc) = uVar13;
        *puVar2 = uVar4;
        puVar2[1] = uVar7;
      }
      else {
        *(uint *)((long)auStack_68 + lVar3) = uVar10;
        *(uint *)((long)auStack_68 + lVar3 + 4) = uVar11;
        *(uint *)((long)&uStack_60 + lVar3) = uVar12;
        *(uint *)((long)&uStack_60 + lVar3 + 4) = uVar13;
        *(ulong *)((long)&uStack_88 + lVar3) =
             (ulong)(in_NT & 1) * 0x4000 | (ulong)(bVar15 & 1) * 0x400 | (ulong)(in_IF & 1) * 0x200
             | (ulong)(in_TF & 1) * 0x100 | (ulong)((long)uVar6 < 0) * 0x80 |
             (ulong)(uVar6 == 0) * 0x40 | (ulong)(in_AF & 1) * 0x10 |
             (ulong)((POPCOUNT(uVar6 & 0xff) & 1U) == 0) * 4 | (ulong)(in_ID & 1) * 0x200000 |
             (ulong)(in_VIP & 1) * 0x100000 | (ulong)(in_VIF & 1) * 0x80000 |
             (ulong)(in_AC & 1) * 0x40000;
        puVar8 = (uchar *)((long)auStack_68 + lVar3);
        for (; uVar6 != 0; uVar6 = uVar6 - 1) {
          *out = *puVar8;
          puVar8 = puVar8 + 1;
          out = (uchar *)((long)out + 1);
        }
        *puVar2 = uVar4;
        puVar2[1] = uVar7;
      }
    }
    else {
      uVar6 = length & 0xf;
      *(CAMELLIA_KEY **)((long)alStack_80 + lVar3) = key;
      *(uchar **)((long)alStack_80 + lVar3 + 8U) = in + (length & 0xfffffffffffffff0);
      *(ulong *)((long)alStack_80 + lVar3 + 0x10U) = uVar6;
      uVar10 = *(uint *)ivec;
      uVar11 = *(uint *)(ivec + 4);
      uVar12 = *(uint *)(ivec + 8);
      uVar13 = *(uint *)(ivec + 0xc);
      if (in + (length & 0xfffffffffffffff0) == in) goto LAB_004bab90;
      while( true ) {
        do {
          uVar10 = uVar10 ^ *(uint *)in;
          uVar11 = uVar11 ^ *(uint *)((long)in + 4);
          uVar12 = uVar12 ^ *(uint *)((long)in + 8);
          uVar10 = uVar10 >> 0x18 | (uVar10 & 0xff0000) >> 8 | (uVar10 & 0xff00) << 8 |
                   uVar10 << 0x18;
          uVar13 = uVar13 ^ *(uint *)((long)in + 0xc);
          uVar11 = uVar11 >> 0x18 | (uVar11 & 0xff0000) >> 8 | (uVar11 & 0xff00) << 8 |
                   uVar11 << 0x18;
          uVar12 = uVar12 >> 0x18 | (uVar12 & 0xff0000) >> 8 | (uVar12 & 0xff00) << 8 |
                   uVar12 << 0x18;
          uVar13 = uVar13 >> 0x18 | (uVar13 & 0xff0000) >> 8 | (uVar13 & 0xff00) << 8 |
                   uVar13 << 0x18;
          *(undefined8 *)((long)&uStack_88 + lVar3) = 0x4bab34;
          _x86_64_Camellia_encrypt();
          uVar10 = uVar10 >> 0x18 | (uVar10 & 0xff0000) >> 8 | (uVar10 & 0xff00) << 8 |
                   uVar10 << 0x18;
          puVar1 = *(uint **)((long)alStack_80 + lVar3 + 8U);
          uVar11 = uVar11 >> 0x18 | (uVar11 & 0xff0000) >> 8 | (uVar11 & 0xff00) << 8 |
                   uVar11 << 0x18;
          uVar6 = *(ulong *)((long)alStack_80 + lVar3 + 0x10U);
          uVar12 = uVar12 >> 0x18 | (uVar12 & 0xff0000) >> 8 | (uVar12 & 0xff00) << 8 |
                   uVar12 << 0x18;
          *(uint *)out = uVar10;
          uVar13 = uVar13 >> 0x18 | (uVar13 & 0xff0000) >> 8 | (uVar13 & 0xff00) << 8 |
                   uVar13 << 0x18;
          *(uint *)((long)out + 4) = uVar11;
          *(uint *)((long)out + 8) = uVar12;
          in = (uchar *)((long)in + 0x10);
          *(uint *)((long)out + 0xc) = uVar13;
          out = (uchar *)((long)out + 0x10);
        } while ((uint *)in != puVar1);
        if (uVar6 == 0) break;
LAB_004bab90:
        *(undefined8 *)((long)auStack_68 + lVar3) = 0;
        *(undefined8 *)((long)&uStack_60 + lVar3) = 0;
        *(undefined8 *)((long)alStack_80 + lVar3 + 0x10U) = 0;
        *(ulong *)((long)&uStack_88 + lVar3) =
             (ulong)(in_NT & 1) * 0x4000 | (ulong)(bVar15 & 1) * 0x400 | (ulong)(in_IF & 1) * 0x200
             | (ulong)(in_TF & 1) * 0x100 | 0x40 | (ulong)(in_AF & 1) * 0x10 | 4 |
             (ulong)(in_ID & 1) * 0x200000 | (ulong)(in_VIP & 1) * 0x100000 |
             (ulong)(in_VIF & 1) * 0x80000 | (ulong)(in_AC & 1) * 0x40000;
        puVar9 = (undefined1 *)((long)auStack_68 + lVar3);
        for (; uVar6 != 0; uVar6 = uVar6 - 1) {
          *puVar9 = (char)*(uint *)in;
          in = (uchar *)((long)in + 1);
          puVar9 = puVar9 + 1;
        }
        uVar6 = *(ulong *)((long)&uStack_88 + lVar3);
        in_NT = (uVar6 & 0x4000) != 0;
        bVar15 = (uVar6 & 0x400) != 0;
        in_IF = (uVar6 & 0x200) != 0;
        in_TF = (uVar6 & 0x100) != 0;
        in_AF = (uVar6 & 0x10) != 0;
        in_ID = (uVar6 & 0x200000) != 0;
        in_AC = (uVar6 & 0x40000) != 0;
        in_VIP = 0;
        in_VIF = 0;
        in = (uchar *)((long)auStack_68 + lVar3);
        *(long *)((long)alStack_80 + lVar3 + 8U) = (long)&lStack_58 + lVar3;
      }
      puVar1 = *(uint **)((long)&lStack_58 + lVar3);
      *puVar1 = uVar10;
      puVar1[1] = uVar11;
      puVar1[2] = uVar12;
      puVar1[3] = uVar13;
    }
  }
  return;
}

