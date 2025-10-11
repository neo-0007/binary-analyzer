
void WHIRLPOOL_BitUpdate(WHIRLPOOL_CTX *c,void *inp,size_t bits)

{
  byte *pbVar1;
  size_t *psVar2;
  byte bVar3;
  int iVar4;
  ulong uVar5;
  sbyte sVar6;
  sbyte sVar7;
  WHIRLPOOL_CTX *pWVar8;
  ulong uVar9;
  ulong uVar10;
  uint uVar11;
  byte *pbVar12;
  uint uVar13;
  void *__src;
  uint uVar14;
  ulong local_68;
  
  iVar4 = (int)bits;
  uVar13 = -iVar4 & 7;
  uVar11 = c->bitoff;
  uVar14 = uVar11 & 7;
  psVar2 = c->bitlen;
  uVar9 = *psVar2;
  *psVar2 = *psVar2 + bits;
  if (CARRY8(uVar9,bits)) {
    pWVar8 = (WHIRLPOOL_CTX *)(c->bitlen + 1);
    do {
      (pWVar8->H).q[0] = (double)((long)(pWVar8->H).q[0] + 1);
      if ((pWVar8->H).q[0] != 0.0) break;
      pWVar8 = (WHIRLPOOL_CTX *)((long)&pWVar8->H + 8);
    } while (c + 1 != pWVar8);
  }
  if (((-iVar4 | uVar11) & 7) == 0) {
LAB_005846b4:
    if (bits == 0) {
      return;
    }
    __src = inp;
    if (uVar11 != 0) {
      uVar13 = 0x200 - uVar11;
      uVar9 = (ulong)(uVar11 >> 3);
      if (bits < uVar13) goto LAB_00584738;
      local_68 = bits - uVar13;
      __src = (void *)((long)inp + (ulong)(uVar13 >> 3));
      memcpy(c->data + uVar9,inp,(ulong)(uVar13 >> 3));
      goto LAB_005846f6;
    }
  }
  else {
    if (bits == 0) {
      return;
    }
                    /* WARNING: Load size is inaccurate */
    uVar9 = (ulong)(uVar11 >> 3);
    sVar6 = (sbyte)uVar14;
    if (uVar14 != uVar13) {
      sVar7 = (sbyte)uVar13;
      pbVar12 = (byte *)inp;
      if (8 < bits) {
        local_68._0_1_ = 8 - sVar6;
        uVar5 = bits - 9 >> 3;
        pbVar12 = (byte *)((long)inp + uVar5 + 1);
        do {
                    /* WARNING: Load size is inaccurate */
          bVar3 = *inp;
          pbVar1 = (byte *)((long)inp + 1);
          uVar11 = uVar11 + 8;
          inp = (void *)((long)inp + 1);
          uVar13 = (uint)bVar3 << sVar7 | (int)(uint)*pbVar1 >> (8U - sVar7 & 0x1f);
          if (uVar14 == 0) {
            c->data[uVar9] = (uchar)uVar13;
            if (0x1ff < uVar11) {
              uVar11 = uVar11 & 0x1ff;
              whirlpool_block(c,c->data,1);
            }
          }
          else {
            uVar13 = uVar13 & 0xff;
            uVar10 = (ulong)((int)uVar9 + 1);
            c->data[uVar9] = c->data[uVar9] | (byte)((int)uVar13 >> sVar6);
            if (0x1ff < uVar11) {
              uVar11 = uVar11 & 0x1ff;
              whirlpool_block(c,c->data,1);
              uVar10 = 0;
            }
            c->data[uVar10] = (uchar)(uVar13 << ((byte)local_68 & 0x1f));
          }
          c->bitoff = uVar11;
          uVar9 = (ulong)(uVar11 >> 3);
        } while (pbVar12 != (byte *)inp);
        iVar4 = iVar4 + -8 + (int)uVar5 * -8;
      }
      uVar11 = iVar4 + uVar11;
      if (uVar14 == 0) {
        c->data[uVar9] = (uchar)((uint)*pbVar12 << sVar7);
        if (uVar11 == 0x200) {
          whirlpool_block(c,c->data,1);
          uVar11 = 0;
        }
      }
      else {
        uVar13 = (uint)*pbVar12 << sVar7 & 0xff;
        uVar5 = (ulong)((int)uVar9 + 1);
        c->data[uVar9] = c->data[uVar9] | (byte)((int)uVar13 >> sVar6);
        if (uVar11 == 0x200) {
          whirlpool_block(c,c->data,1);
          uVar5 = 0;
          uVar11 = 0;
        }
        c->data[uVar5] = (uchar)(uVar13 << (8U - sVar6 & 0x1f));
      }
      c->bitoff = uVar11;
      return;
    }
    __src = (void *)((long)inp + 1);
    c->data[uVar9] = c->data[uVar9] | *inp & (byte)(0xff >> sVar6);
    uVar11 = uVar11 + (8 - uVar14);
    bits = bits - (8 - uVar14);
    local_68 = bits;
    if (uVar11 != 0x200) {
      c->bitoff = uVar11;
      inp = __src;
      goto LAB_005846b4;
    }
LAB_005846f6:
    whirlpool_block(c,c->data,1);
    c->bitoff = 0;
    bits = local_68;
    if (local_68 == 0) {
      return;
    }
  }
  while (0x1ff < bits) {
    whirlpool_block(c,__src,bits >> 9);
    uVar5 = bits >> 3;
    uVar9 = bits & 0x1ff;
    bits = (size_t)((uint)bits & 0x1ff);
    __src = (void *)((long)__src + (uVar5 & 0x1fffffffffffffc0));
    if (uVar9 == 0) {
      return;
    }
  }
  uVar9 = 0;
  uVar11 = 0;
LAB_00584738:
  memcpy(c->data + uVar9,__src,bits >> 3);
  c->bitoff = uVar11 + (int)bits;
  return;
}

