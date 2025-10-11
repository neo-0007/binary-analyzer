
int MD4_Update(MD4_CTX *c,void *data,size_t len)

{
  undefined8 *__dest;
  uint uVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  uint uVar7;
  
  if (len == 0) {
    return 1;
  }
  uVar7 = (uint)len;
  uVar1 = c->Nl;
  c->Nl = uVar7 * 8 + c->Nl;
  uVar2 = (ulong)c->num;
  c->Nh = ((c->Nh + 1) - (uint)!CARRY4(uVar7 * 8,uVar1)) + (int)(len >> 0x1d);
  if (uVar2 == 0) {
    if (len < 0x40) goto LAB_0053d110;
LAB_0053d1c8:
    md4_block_data_order(c,data,len >> 6);
    data = (void *)((long)data + (len & 0xffffffffffffffc0));
    len = len - (len & 0xffffffffffffffc0);
  }
  else {
    __dest = (undefined8 *)((long)c->data + uVar2);
    if ((len | len + uVar2) < 0x40) {
      memcpy(__dest,data,len);
      c->num = c->num + uVar7;
      return 1;
    }
    lVar4 = -uVar2;
    uVar6 = lVar4 + 0x40;
    if (uVar6 < 8) {
      if ((uVar6 & 4) == 0) {
                    /* WARNING: Load size is inaccurate */
        if ((uVar6 != 0) && (*(undefined1 *)__dest = *data, (uVar6 & 2) != 0)) {
          *(undefined2 *)((long)__dest + lVar4 + 0x3e) = *(undefined2 *)((long)data + lVar4 + 0x3e);
        }
      }
      else {
                    /* WARNING: Load size is inaccurate */
        *(undefined4 *)__dest = *data;
        *(undefined4 *)((long)__dest + lVar4 + 0x3c) = *(undefined4 *)((long)data + lVar4 + 0x3c);
      }
    }
    else {
                    /* WARNING: Load size is inaccurate */
      *__dest = *data;
      *(undefined8 *)((long)__dest + lVar4 + 0x38) = *(undefined8 *)((long)data + lVar4 + 0x38);
      lVar4 = (long)__dest - ((ulong)(__dest + 1) & 0xfffffffffffffff8);
      uVar5 = lVar4 + uVar6 & 0xfffffffffffffff8;
      if (7 < uVar5) {
        uVar3 = 0;
        do {
          *(undefined8 *)(((ulong)(__dest + 1) & 0xfffffffffffffff8) + uVar3) =
               *(undefined8 *)((long)data + (uVar3 - lVar4));
          uVar3 = uVar3 + 8;
        } while (uVar3 < uVar5);
      }
    }
    data = (void *)((long)data + uVar6);
    md4_block_data_order(c,c->data,1);
    len = (len + uVar2) - 0x40;
    c->num = 0;
    c->data[0] = 0;
    c->data[1] = 0;
    c->data[2] = 0;
    c->data[3] = 0;
    c->data[4] = 0;
    c->data[5] = 0;
    c->data[6] = 0;
    c->data[7] = 0;
    c->data[8] = 0;
    c->data[9] = 0;
    c->data[10] = 0;
    c->data[0xb] = 0;
    c->data[0xc] = 0;
    c->data[0xd] = 0;
    c->data[0xe] = 0;
    c->data[0xf] = 0;
    if (0x3f < len) goto LAB_0053d1c8;
  }
  if (len == 0) {
    return 1;
  }
  uVar7 = (uint)len;
LAB_0053d110:
  c->num = uVar7;
  memcpy(c->data,data,len);
  return 1;
}

