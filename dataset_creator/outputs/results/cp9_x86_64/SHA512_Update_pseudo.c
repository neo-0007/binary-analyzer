
int SHA512_Update(SHA512_CTX *c,void *data,size_t len)

{
  _union_314 *p_Var1;
  uchar *__dest;
  ulong uVar2;
  ulong uVar3;
  uint uVar4;
  ulong uVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  long lVar8;
  byte bVar9;
  
  bVar9 = 0;
  if (len == 0) {
    return 1;
  }
  p_Var1 = &c->u;
  uVar2 = c->Nl;
  c->Nl = len * 8 + c->Nl;
  c->Nh = (len >> 0x3d) + ((c->Nh + 1) - (ulong)!CARRY8(len * 8,uVar2));
  if (c->num == 0) {
    if (len < 0x80) goto LAB_0057ad16;
LAB_0057acd8:
    uVar2 = len >> 7;
    uVar5 = len & 0xffffffffffffff80;
    len = (size_t)((uint)len & 0x7f);
    sha512_block_data_order(c,data,uVar2);
    data = (void *)((long)data + uVar5);
  }
  else {
    uVar5 = (ulong)c->num;
    lVar8 = -uVar5;
    uVar2 = lVar8 + 0x80;
    __dest = p_Var1->p + uVar5;
    if (len < uVar2) {
      memcpy(__dest,data,len);
      c->num = c->num + (int)len;
      return 1;
    }
    if (uVar2 < 8) {
      if ((uVar2 & 4) == 0) {
                    /* WARNING: Load size is inaccurate */
        if ((uVar2 != 0) && (*__dest = *data, (uVar2 & 2) != 0)) {
          *(undefined2 *)(__dest + lVar8 + 0x7e) = *(undefined2 *)((long)data + lVar8 + 0x7e);
        }
      }
      else {
                    /* WARNING: Load size is inaccurate */
        *(undefined4 *)__dest = *data;
        *(undefined4 *)(__dest + lVar8 + 0x7c) = *(undefined4 *)((long)data + lVar8 + 0x7c);
      }
    }
    else {
                    /* WARNING: Load size is inaccurate */
      *(undefined8 *)__dest = *data;
      *(undefined8 *)(__dest + lVar8 + 0x78) = *(undefined8 *)((long)data + lVar8 + 0x78);
      lVar8 = (long)__dest - (long)((ulong)(__dest + 8) & 0xfffffffffffffff8);
      puVar6 = (undefined8 *)((long)data - lVar8);
      puVar7 = (undefined8 *)((ulong)(__dest + 8) & 0xfffffffffffffff8);
      for (uVar3 = uVar2 + lVar8 >> 3; uVar3 != 0; uVar3 = uVar3 - 1) {
        *puVar7 = *puVar6;
        puVar6 = puVar6 + 1;
        puVar7 = puVar7 + 1;
      }
    }
    len = (uVar5 - 0x80) + len;
    c->num = 0;
    data = (void *)((long)data + uVar2);
    sha512_block_data_order(c,p_Var1,1);
    if (0x7f < len) goto LAB_0057acd8;
  }
  if (len == 0) {
    return 1;
  }
LAB_0057ad16:
  uVar4 = (uint)len;
  uVar2 = len & 0xffffffff;
  if (uVar4 < 8) {
    if ((len & 4) == 0) {
                    /* WARNING: Load size is inaccurate */
      if ((uVar4 != 0) && ((c->u).p[0] = (uchar)*data, (len & 2) != 0)) {
        *(undefined2 *)((long)c->h + uVar2 + 0x4e) = *(undefined2 *)((long)data + (uVar2 - 2));
      }
    }
    else {
                    /* WARNING: Load size is inaccurate */
      *(int *)&c->u = (int)*data;
      *(undefined4 *)((long)c->h + uVar2 + 0x4c) = *(undefined4 *)((long)data + (uVar2 - 4));
    }
  }
  else {
                    /* WARNING: Load size is inaccurate */
    puVar7 = (undefined8 *)((ulong)((long)&c->u + 8U) & 0xfffffffffffffff8);
    (c->u).d[0] = *data;
    lVar8 = (long)p_Var1 - (long)puVar7;
    *(undefined8 *)((long)c->h + (len & 0xffffffff) + 0x48) =
         *(undefined8 *)((long)data + ((len & 0xffffffff) - 8));
    puVar6 = (undefined8 *)((long)data - lVar8);
    for (uVar2 = (ulong)((int)lVar8 + uVar4 >> 3); uVar2 != 0; uVar2 = uVar2 - 1) {
      *puVar7 = *puVar6;
      puVar6 = puVar6 + (ulong)bVar9 * -2 + 1;
      puVar7 = puVar7 + (ulong)bVar9 * -2 + 1;
    }
  }
  c->num = uVar4;
  return 1;
}

