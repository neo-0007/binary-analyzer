
void ASN1_put_object(uchar **pp,int constructed,int length,int tag,int xclass)

{
  byte *pbVar1;
  int iVar2;
  byte *pbVar3;
  long lVar4;
  int iVar5;
  byte *pbVar6;
  byte bVar7;
  
  pbVar3 = *pp;
  bVar7 = (constructed != 0) << 5 | (byte)xclass & 0xc0;
  pbVar6 = pbVar3 + 1;
  if (tag < 0x1f) {
    pbVar1 = pbVar3 + 2;
    *pbVar3 = (byte)tag & 0x1f | bVar7;
  }
  else {
    iVar2 = 0;
    *pbVar3 = bVar7 | 0x1f;
    iVar5 = tag;
    do {
      lVar4 = (long)iVar2;
      iVar2 = iVar2 + 1;
      iVar5 = iVar5 >> 7;
    } while (iVar5 != 0);
    pbVar3[lVar4 + 1] = (byte)tag & 0x7f;
    for (; tag = tag >> 7, lVar4 != 0; lVar4 = lVar4 + -1) {
      bVar7 = (byte)tag & 0x7f;
      if (iVar2 != (int)lVar4) {
        bVar7 = (byte)tag | 0x80;
      }
      pbVar3[lVar4] = bVar7;
    }
    pbVar6 = pbVar6 + iVar2;
    pbVar1 = pbVar6 + 1;
  }
  if (constructed == 2) {
    *pbVar6 = 0x80;
    *pp = pbVar1;
    return;
  }
  if (0x7f < length) {
    iVar2 = 0;
    iVar5 = length;
    do {
      lVar4 = (long)iVar2;
      iVar2 = iVar2 + 1;
      iVar5 = iVar5 >> 8;
    } while (iVar5 != 0);
    *pbVar6 = (byte)iVar2 | 0x80;
    pbVar3 = pbVar6 + lVar4 + 1;
    do {
      *pbVar3 = (byte)length;
      pbVar3 = pbVar3 + -1;
      length = length >> 8;
    } while (pbVar6 != pbVar3);
    *pp = pbVar1 + lVar4 + 1;
    return;
  }
  *pbVar6 = (byte)length;
  *pp = pbVar1;
  return;
}

