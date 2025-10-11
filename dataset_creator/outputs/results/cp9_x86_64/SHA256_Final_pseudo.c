
int SHA256_Final(uchar *md,SHA256_CTX *c)

{
  uint *ptr;
  uint uVar1;
  ulong uVar2;
  long lVar3;
  uint *puVar4;
  uint uVar5;
  ulong uVar6;
  uchar *puVar7;
  uchar *puVar8;
  int iVar9;
  
  ptr = c->data;
  uVar1 = c->num;
  *(undefined1 *)((long)c->data + (ulong)uVar1) = 0x80;
  uVar2 = (ulong)uVar1 + 1;
  if (uVar2 < 0x39) {
    uVar6 = 0x38 - uVar2;
    puVar4 = (uint *)((long)ptr + uVar2);
  }
  else {
    if (uVar2 != 0x40) {
      uVar6 = 0;
      do {
        *(undefined1 *)((long)((long)ptr + uVar2) + uVar6) = 0;
        uVar6 = uVar6 + 1;
      } while (uVar6 < 0x40 - uVar2);
    }
    sha256_block_data_order(c,ptr,1);
    uVar6 = 0x38;
    puVar4 = ptr;
  }
  uVar1 = (uint)uVar6;
  if (uVar1 < 8) {
    if ((uVar6 & 4) == 0) {
      if ((uVar1 != 0) && (*(undefined1 *)puVar4 = 0, (uVar6 & 2) != 0)) {
        *(undefined2 *)((long)puVar4 + ((uVar6 & 0xffffffff) - 2)) = 0;
      }
    }
    else {
      *puVar4 = 0;
      *(undefined4 *)((long)puVar4 + ((uVar6 & 0xffffffff) - 4)) = 0;
    }
  }
  else {
    puVar4[0] = 0;
    puVar4[1] = 0;
    *(undefined8 *)((long)puVar4 + ((uVar6 & 0xffffffff) - 8)) = 0;
    uVar1 = uVar1 + ((int)puVar4 - (int)((ulong)(puVar4 + 2) & 0xfffffffffffffff8)) & 0xfffffff8;
    if (7 < uVar1) {
      uVar2 = 0;
      do {
        uVar5 = (int)uVar2 + 8;
        *(undefined8 *)(((ulong)(puVar4 + 2) & 0xfffffffffffffff8) + uVar2) = 0;
        uVar2 = (ulong)uVar5;
      } while (uVar5 < uVar1);
    }
  }
  uVar2._0_4_ = c->Nl;
  uVar2._4_4_ = c->Nh;
  *(ulong *)(c->data + 0xe) =
       uVar2 >> 0x38 | (uVar2 & 0xff000000000000) >> 0x28 | (uVar2 & 0xff0000000000) >> 0x18 |
       (uVar2 & 0xff00000000) >> 8 | (uVar2 & 0xff000000) << 8 | (uVar2 & 0xff0000) << 0x18 |
       (uVar2 & 0xff00) << 0x28 | uVar2 << 0x38;
  sha256_block_data_order(c,ptr,1);
  c->num = 0;
  OPENSSL_cleanse(ptr,0x40);
  uVar1 = c->md_len;
  if (uVar1 == 0x1c) {
    puVar7 = md;
    do {
      uVar1 = c->h[0];
      puVar8 = puVar7 + 4;
      c = (SHA256_CTX *)(c->h + 1);
      puVar7[2] = (uchar)(uVar1 >> 8);
      *puVar7 = (uchar)(uVar1 >> 0x18);
      puVar7[1] = (uchar)(uVar1 >> 0x10);
      puVar7[3] = (uchar)uVar1;
      puVar7 = puVar8;
    } while (puVar8 != md + 0x1c);
    iVar9 = 1;
  }
  else if (uVar1 == 0x20) {
    puVar7 = md;
    do {
      uVar1 = c->h[0];
      puVar8 = puVar7 + 4;
      c = (SHA256_CTX *)(c->h + 1);
      puVar7[2] = (uchar)(uVar1 >> 8);
      *puVar7 = (uchar)(uVar1 >> 0x18);
      puVar7[1] = (uchar)(uVar1 >> 0x10);
      puVar7[3] = (uchar)uVar1;
      puVar7 = puVar8;
    } while (puVar8 != md + 0x20);
    iVar9 = 1;
  }
  else {
    iVar9 = 0;
    if (uVar1 < 0x21) {
      if (uVar1 >> 2 != 0) {
        lVar3 = 0;
        do {
          uVar1 = c->h[lVar3];
          md[lVar3 * 4 + 2] = (uchar)(uVar1 >> 8);
          md[lVar3 * 4 + 3] = (uchar)uVar1;
          md[lVar3 * 4] = (uchar)(uVar1 >> 0x18);
          md[lVar3 * 4 + 1] = (uchar)(uVar1 >> 0x10);
          lVar3 = lVar3 + 1;
        } while ((uint)lVar3 < c->md_len >> 2);
      }
      iVar9 = 1;
    }
  }
  return iVar9;
}

