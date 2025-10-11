
int WHIRLPOOL_Final(uchar *md,WHIRLPOOL_CTX *c)

{
  uchar *puVar1;
  double dVar2;
  uint uVar3;
  uchar *puVar4;
  uchar *puVar5;
  uint uVar6;
  ulong uVar7;
  byte bVar8;
  
  bVar8 = 0x80;
  uVar3 = c->bitoff >> 3;
  uVar6 = c->bitoff & 7;
  if (uVar6 != 0) {
    bVar8 = (byte)(0x80 >> (sbyte)uVar6) | c->data[uVar3];
  }
  c->data[uVar3] = bVar8;
  uVar6 = uVar3 + 1;
  if (uVar6 < 0x21) {
    if (uVar6 == 0x20) goto LAB_00584948;
    uVar6 = 0x20 - uVar6;
    uVar7 = (ulong)uVar6;
    puVar5 = c->data + ((ulong)(uVar3 + 0x41) - 0x40);
    if (uVar6 < 8) {
      if ((uVar6 & 4) == 0) {
        if ((uVar6 != 0) && (*puVar5 = '\0', (uVar6 & 2) != 0)) {
          (puVar5 + ((ulong)uVar6 - 2))[0] = '\0';
          (puVar5 + ((ulong)uVar6 - 2))[1] = '\0';
        }
      }
      else {
        puVar5[0] = '\0';
        puVar5[1] = '\0';
        puVar5[2] = '\0';
        puVar5[3] = '\0';
        puVar5 = puVar5 + ((ulong)uVar6 - 4);
        puVar5[0] = '\0';
        puVar5[1] = '\0';
        puVar5[2] = '\0';
        puVar5[3] = '\0';
      }
      goto LAB_00584948;
    }
  }
  else {
    if (uVar6 < 0x40) {
      uVar6 = 0x40 - uVar6;
      puVar5 = c->data + ((ulong)(uVar3 + 0x41) - 0x40);
      if (uVar6 < 8) {
        if ((uVar6 & 4) == 0) {
          if ((uVar6 != 0) && (*puVar5 = '\0', (uVar6 & 2) != 0)) {
            (puVar5 + ((ulong)uVar6 - 2))[0] = '\0';
            (puVar5 + ((ulong)uVar6 - 2))[1] = '\0';
          }
        }
        else {
          puVar5[0] = '\0';
          puVar5[1] = '\0';
          puVar5[2] = '\0';
          puVar5[3] = '\0';
          puVar5 = puVar5 + ((ulong)uVar6 - 4);
          puVar5[0] = '\0';
          puVar5[1] = '\0';
          puVar5[2] = '\0';
          puVar5[3] = '\0';
        }
      }
      else {
        puVar5[0] = '\0';
        puVar5[1] = '\0';
        puVar5[2] = '\0';
        puVar5[3] = '\0';
        puVar5[4] = '\0';
        puVar5[5] = '\0';
        puVar5[6] = '\0';
        puVar5[7] = '\0';
        puVar1 = puVar5 + ((ulong)uVar6 - 8);
        puVar1[0] = '\0';
        puVar1[1] = '\0';
        puVar1[2] = '\0';
        puVar1[3] = '\0';
        puVar1[4] = '\0';
        puVar1[5] = '\0';
        puVar1[6] = '\0';
        puVar1[7] = '\0';
        uVar3 = uVar6 + ((int)puVar5 - (int)((ulong)(puVar5 + 8) & 0xfffffffffffffff8)) & 0xfffffff8
        ;
        if (7 < uVar3) {
          uVar6 = 0;
          do {
            uVar7 = (ulong)uVar6;
            uVar6 = uVar6 + 8;
            *(undefined8 *)(((ulong)(puVar5 + 8) & 0xfffffffffffffff8) + uVar7) = 0;
          } while (uVar6 < uVar3);
        }
      }
    }
    whirlpool_block(c,c->data,1);
    uVar7 = 0x20;
    puVar5 = c->data;
  }
  puVar5[0] = '\0';
  puVar5[1] = '\0';
  puVar5[2] = '\0';
  puVar5[3] = '\0';
  puVar5[4] = '\0';
  puVar5[5] = '\0';
  puVar5[6] = '\0';
  puVar5[7] = '\0';
  puVar1 = puVar5 + (uVar7 - 8);
  puVar1[0] = '\0';
  puVar1[1] = '\0';
  puVar1[2] = '\0';
  puVar1[3] = '\0';
  puVar1[4] = '\0';
  puVar1[5] = '\0';
  puVar1[6] = '\0';
  puVar1[7] = '\0';
  uVar3 = (int)uVar7 + ((int)puVar5 - (int)((ulong)(puVar5 + 8) & 0xfffffffffffffff8)) & 0xfffffff8;
  if (7 < uVar3) {
    uVar6 = 0;
    do {
      uVar7 = (ulong)uVar6;
      uVar6 = uVar6 + 8;
      *(undefined8 *)(((ulong)(puVar5 + 8) & 0xfffffffffffffff8) + uVar7) = 0;
    } while (uVar6 < uVar3);
  }
LAB_00584948:
  puVar5 = c->data + 0x37;
  do {
    uVar7 = *(ulong *)((0xff - (long)puVar5) + (long)c * 2);
    puVar1 = puVar5 + 8;
    do {
      puVar4 = puVar1;
      *puVar4 = (uchar)uVar7;
      uVar7 = uVar7 >> 8;
      puVar1 = puVar4 + -1;
    } while (puVar4 + -1 != puVar5);
    puVar5 = puVar4 + -9;
  } while (c->data + 0x17 != puVar5);
  whirlpool_block(c,c->data,1);
  if (md != (uchar *)0x0) {
    dVar2 = (c->H).q[1];
    *(double *)md = (c->H).q[0];
    *(double *)(md + 8) = dVar2;
    dVar2 = (c->H).q[3];
    *(double *)(md + 0x10) = (c->H).q[2];
    *(double *)(md + 0x18) = dVar2;
    dVar2 = (c->H).q[5];
    *(double *)(md + 0x20) = (c->H).q[4];
    *(double *)(md + 0x28) = dVar2;
    dVar2 = (c->H).q[7];
    *(double *)(md + 0x30) = (c->H).q[6];
    *(double *)(md + 0x38) = dVar2;
    OPENSSL_cleanse(c,0xa8);
  }
  return (uint)(md != (uchar *)0x0);
}

