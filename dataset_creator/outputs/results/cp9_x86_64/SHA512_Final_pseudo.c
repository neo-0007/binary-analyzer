
int SHA512_Final(uchar *md,SHA512_CTX *c)

{
  _union_314 *p_Var1;
  ulonglong uVar2;
  ulong uVar3;
  uchar *puVar4;
  ulong uVar5;
  ulong uVar6;
  uint uVar7;
  long lVar8;
  uchar *puVar9;
  _union_314 *p_Var10;
  undefined8 *puVar11;
  byte bVar12;
  
  bVar12 = 0;
  p_Var1 = &c->u;
  uVar7 = c->num;
  *(undefined1 *)((long)c->h + (ulong)uVar7 + 0x50) = 0x80;
  uVar3 = (ulong)uVar7 + 1;
  p_Var10 = (_union_314 *)(p_Var1->p + uVar3);
  if (uVar3 < 0x71) {
    uVar3 = 0x70 - uVar3;
  }
  else {
    lVar8 = -uVar3;
    uVar3 = lVar8 + 0x80;
    if (uVar3 < 8) {
      if ((uVar3 & 4) == 0) {
        if ((uVar3 != 0) && (p_Var10->p[0] = '\0', (uVar3 & 2) != 0)) {
          *(undefined2 *)((long)p_Var10 + lVar8 + 0x7e) = 0;
        }
      }
      else {
        *(undefined4 *)p_Var10 = 0;
        *(undefined4 *)((long)p_Var10 + lVar8 + 0x7c) = 0;
      }
    }
    else {
      p_Var10->d[0] = 0;
      *(undefined8 *)((long)p_Var10 + lVar8 + 0x78) = 0;
      uVar6 = (ulong)((long)p_Var10 + 8) & 0xfffffffffffffff8;
      uVar3 = (ulong)((long)p_Var10 + (uVar3 - uVar6)) & 0xfffffffffffffff8;
      if (7 < uVar3) {
        uVar5 = 0;
        do {
          *(undefined8 *)(uVar6 + uVar5) = 0;
          uVar5 = uVar5 + 8;
        } while (uVar5 < uVar3);
      }
    }
    sha512_block_data_order(c,p_Var1,1);
    uVar3 = 0x70;
    p_Var10 = p_Var1;
  }
  uVar7 = (uint)uVar3;
  if (uVar7 < 8) {
    if ((uVar3 & 4) == 0) {
      if ((uVar7 != 0) && (p_Var10->p[0] = '\0', (uVar3 & 2) != 0)) {
        *(undefined2 *)((long)p_Var10 + ((uVar3 & 0xffffffff) - 2)) = 0;
      }
    }
    else {
      *(undefined4 *)p_Var10 = 0;
      *(undefined4 *)((long)p_Var10 + ((uVar3 & 0xffffffff) - 4)) = 0;
    }
  }
  else {
    p_Var10->d[0] = 0;
    *(undefined8 *)((long)p_Var10 + ((uVar3 & 0xffffffff) - 8)) = 0;
    puVar11 = (undefined8 *)((ulong)((long)p_Var10 + 8) & 0xfffffffffffffff8);
    uVar3 = (ulong)(uVar7 + ((int)p_Var10 - (int)puVar11) >> 3);
    for (; uVar3 != 0; uVar3 = uVar3 - 1) {
      *puVar11 = 0;
      puVar11 = puVar11 + (ulong)bVar12 * -2 + 1;
    }
  }
  uVar3 = c->Nl;
  (c->u).d[0xf] =
       uVar3 >> 0x38 | (uVar3 & 0xff000000000000) >> 0x28 | (uVar3 & 0xff0000000000) >> 0x18 |
       (uVar3 & 0xff00000000) >> 8 | (uVar3 & 0xff000000) << 8 | (uVar3 & 0xff0000) << 0x18 |
       (uVar3 & 0xff00) << 0x28 | uVar3 << 0x38;
  uVar3 = c->Nh;
  (c->u).d[0xe] =
       uVar3 >> 0x38 | (uVar3 & 0xff000000000000) >> 0x28 | (uVar3 & 0xff0000000000) >> 0x18 |
       (uVar3 & 0xff00000000) >> 8 | (uVar3 & 0xff000000) << 8 | (uVar3 & 0xff0000) << 0x18 |
       (uVar3 & 0xff00) << 0x28 | uVar3 << 0x38;
  sha512_block_data_order(c,p_Var1,1);
  if (md == (uchar *)0x0) {
    return 0;
  }
  uVar7 = c->md_len;
  if (uVar7 == 0x30) {
    puVar4 = md;
    do {
      uVar2 = c->h[0];
      puVar9 = puVar4 + 8;
      c = (SHA512_CTX *)(c->h + 1);
      puVar4[6] = (uchar)(uVar2 >> 8);
      *puVar4 = (uchar)(uVar2 >> 0x38);
      puVar4[1] = (uchar)(uVar2 >> 0x30);
      puVar4[2] = (uchar)(uVar2 >> 0x28);
      puVar4[3] = (uchar)(uVar2 >> 0x20);
      puVar4[4] = (uchar)(uVar2 >> 0x18);
      puVar4[5] = (uchar)(uVar2 >> 0x10);
      puVar4[7] = (uchar)uVar2;
      puVar4 = puVar9;
    } while (puVar9 != md + 0x30);
  }
  else if (uVar7 < 0x31) {
    if (uVar7 == 0x1c) {
      lVar8 = 0;
      puVar4 = md;
      do {
        uVar2 = c->h[lVar8];
        lVar8 = lVar8 + 1;
        puVar4[6] = (uchar)(uVar2 >> 8);
        *puVar4 = (uchar)(uVar2 >> 0x38);
        puVar4[1] = (uchar)(uVar2 >> 0x30);
        puVar4[2] = (uchar)(uVar2 >> 0x28);
        puVar4[3] = (uchar)(uVar2 >> 0x20);
        puVar4[4] = (uchar)(uVar2 >> 0x18);
        puVar4[5] = (uchar)(uVar2 >> 0x10);
        puVar4[7] = (uchar)uVar2;
        puVar4 = puVar4 + 8;
      } while (lVar8 != 3);
      uVar2 = c->h[3];
      md[0x18] = (uchar)(uVar2 >> 0x38);
      md[0x19] = (uchar)(uVar2 >> 0x30);
      md[0x1b] = (uchar)(uVar2 >> 0x20);
      md[0x1a] = (uchar)(uVar2 >> 0x28);
      return 1;
    }
    if (uVar7 != 0x20) {
      return 0;
    }
    lVar8 = 0;
    do {
      uVar2 = c->h[lVar8];
      lVar8 = lVar8 + 1;
      md[6] = (uchar)(uVar2 >> 8);
      *md = (uchar)(uVar2 >> 0x38);
      md[1] = (uchar)(uVar2 >> 0x30);
      md[2] = (uchar)(uVar2 >> 0x28);
      md[3] = (uchar)(uVar2 >> 0x20);
      md[4] = (uchar)(uVar2 >> 0x18);
      md[5] = (uchar)(uVar2 >> 0x10);
      md[7] = (uchar)uVar2;
      md = md + 8;
    } while (lVar8 != 4);
  }
  else {
    puVar4 = md;
    if (uVar7 != 0x40) {
      return 0;
    }
    do {
      uVar2 = c->h[0];
      puVar9 = puVar4 + 8;
      c = (SHA512_CTX *)(c->h + 1);
      puVar4[6] = (uchar)(uVar2 >> 8);
      *puVar4 = (uchar)(uVar2 >> 0x38);
      puVar4[1] = (uchar)(uVar2 >> 0x30);
      puVar4[2] = (uchar)(uVar2 >> 0x28);
      puVar4[3] = (uchar)(uVar2 >> 0x20);
      puVar4[4] = (uchar)(uVar2 >> 0x18);
      puVar4[5] = (uchar)(uVar2 >> 0x10);
      puVar4[7] = (uchar)uVar2;
      puVar4 = puVar9;
    } while (puVar9 != md + 0x40);
  }
  return 1;
}

