
int SHA1_Final(uchar *md,SHA_CTX *c)

{
  uint *ptr;
  uint uVar1;
  ulong uVar2;
  uint *puVar3;
  uint uVar4;
  ulong uVar5;
  
  ptr = c->data;
  uVar1 = c->num;
  *(undefined1 *)((long)c->data + (ulong)uVar1) = 0x80;
  uVar2 = (ulong)uVar1 + 1;
  if (uVar2 < 0x39) {
    uVar5 = 0x38 - uVar2;
    puVar3 = (uint *)((long)ptr + uVar2);
  }
  else {
    if (uVar2 != 0x40) {
      uVar5 = 0;
      do {
        *(undefined1 *)((long)((long)ptr + uVar2) + uVar5) = 0;
        uVar5 = uVar5 + 1;
      } while (uVar5 < 0x40 - uVar2);
    }
    sha1_block_data_order(c,ptr,1);
    uVar5 = 0x38;
    puVar3 = ptr;
  }
  uVar1 = (uint)uVar5;
  if (uVar1 < 8) {
    if ((uVar5 & 4) == 0) {
      if ((uVar1 != 0) && (*(undefined1 *)puVar3 = 0, (uVar5 & 2) != 0)) {
        *(undefined2 *)((long)puVar3 + ((uVar5 & 0xffffffff) - 2)) = 0;
      }
    }
    else {
      *puVar3 = 0;
      *(undefined4 *)((long)puVar3 + ((uVar5 & 0xffffffff) - 4)) = 0;
    }
  }
  else {
    puVar3[0] = 0;
    puVar3[1] = 0;
    *(undefined8 *)((long)puVar3 + ((uVar5 & 0xffffffff) - 8)) = 0;
    uVar1 = uVar1 + ((int)puVar3 - (int)((ulong)(puVar3 + 2) & 0xfffffffffffffff8)) & 0xfffffff8;
    if (7 < uVar1) {
      uVar2 = 0;
      do {
        uVar4 = (int)uVar2 + 8;
        *(undefined8 *)(((ulong)(puVar3 + 2) & 0xfffffffffffffff8) + uVar2) = 0;
        uVar2 = (ulong)uVar4;
      } while (uVar4 < uVar1);
    }
  }
  uVar2._0_4_ = c->Nl;
  uVar2._4_4_ = c->Nh;
  *(ulong *)(c->data + 0xe) =
       uVar2 >> 0x38 | (uVar2 & 0xff000000000000) >> 0x28 | (uVar2 & 0xff0000000000) >> 0x18 |
       (uVar2 & 0xff00000000) >> 8 | (uVar2 & 0xff000000) << 8 | (uVar2 & 0xff0000) << 0x18 |
       (uVar2 & 0xff00) << 0x28 | uVar2 << 0x38;
  sha1_block_data_order(c,ptr,1);
  c->num = 0;
  OPENSSL_cleanse(ptr,0x40);
  uVar1 = c->h0;
  *(uint *)md = uVar1 >> 0x18 | (uVar1 & 0xff0000) >> 8 | (uVar1 & 0xff00) << 8 | uVar1 << 0x18;
  uVar1 = c->h1;
  *(uint *)(md + 4) =
       uVar1 >> 0x18 | (uVar1 & 0xff0000) >> 8 | (uVar1 & 0xff00) << 8 | uVar1 << 0x18;
  uVar1 = c->h2;
  *(uint *)(md + 8) =
       uVar1 >> 0x18 | (uVar1 & 0xff0000) >> 8 | (uVar1 & 0xff00) << 8 | uVar1 << 0x18;
  uVar1 = c->h3;
  *(uint *)(md + 0xc) =
       uVar1 >> 0x18 | (uVar1 & 0xff0000) >> 8 | (uVar1 & 0xff00) << 8 | uVar1 << 0x18;
  uVar1 = c->h4;
  *(uint *)(md + 0x10) =
       uVar1 >> 0x18 | (uVar1 & 0xff0000) >> 8 | (uVar1 & 0xff00) << 8 | uVar1 << 0x18;
  return 1;
}

