
int ASN1_get_object(uchar **pp,long *plength,int *ptag,int *pclass,long omax)

{
  byte bVar1;
  byte *pbVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  ulong uVar6;
  byte *pbVar7;
  long lVar8;
  byte bVar9;
  byte *pbVar10;
  
  pbVar2 = *pp;
  if (omax < 1) {
    ERR_new();
    ERR_set_debug("../crypto/asn1/asn1_lib.c",0x38,"ASN1_get_object");
    ERR_set_error(0xd,0xe0,0);
    return 0x80;
  }
  bVar9 = *pbVar2;
  pbVar7 = pbVar2 + 1;
  lVar8 = omax + -1;
  uVar4 = bVar9 & 0x1f;
  if ((char)uVar4 == '\x1f') {
    uVar6 = 0;
    if (lVar8 != 0) {
      do {
        bVar1 = *pbVar7;
        pbVar7 = pbVar7 + 1;
        lVar8 = lVar8 + -1;
        if (-1 < (char)bVar1) {
          uVar4 = (uint)bVar1 | (uint)(uVar6 << 7);
          goto joined_r0x0049f15c;
        }
        uVar6 = uVar6 << 7 | (ulong)(bVar1 & 0x7f);
      } while ((lVar8 != 0) && ((long)uVar6 < 0x1000000));
    }
LAB_0049f0e0:
    ERR_new();
    ERR_set_debug("../crypto/asn1/asn1_lib.c",0x69,"ASN1_get_object");
    ERR_set_error(0xd,0x7b,0);
    return 0x80;
  }
joined_r0x0049f15c:
  if (lVar8 == 0) goto LAB_0049f0e0;
  *ptag = uVar4;
  pbVar10 = pbVar7 + 1;
  *pclass = bVar9 & 0xc0;
  bVar1 = *pbVar7;
  bVar9 = bVar9 & 0x20;
  if (bVar1 == 0x80) {
    *plength = 0;
    if (bVar9 == 0) goto LAB_0049f0e0;
    uVar6 = 0;
    uVar4 = 1;
LAB_0049f178:
    uVar3 = uVar4;
    if ((long)uVar6 <= omax - ((long)pbVar10 - (long)pbVar2)) goto LAB_0049f18a;
  }
  else {
    uVar5 = bVar1 & 0x7f;
    if ((char)bVar1 < '\0') {
      if (lVar8 <= (int)(uVar5 + 1)) goto LAB_0049f0e0;
      pbVar7 = pbVar10;
      if ((char)uVar5 != '\0') {
LAB_0049f1cd:
        bVar1 = *pbVar10;
        if (bVar1 == 0) goto LAB_0049f1c0;
        if ((int)uVar5 < 9) {
          uVar6 = 0;
          pbVar7 = pbVar10 + (int)uVar5;
          while( true ) {
            pbVar10 = pbVar10 + 1;
            uVar6 = uVar6 << 8 | (ulong)bVar1;
            if (pbVar7 == pbVar10) break;
            bVar1 = *pbVar10;
          }
          if ((long)uVar6 < 0) goto LAB_0049f0e0;
          goto LAB_0049f20e;
        }
        goto LAB_0049f0e0;
      }
LAB_0049f260:
      uVar6 = 0;
LAB_0049f20e:
      *plength = uVar6;
      uVar4 = 0;
      pbVar10 = pbVar7;
      goto LAB_0049f178;
    }
    uVar4 = 0;
    *plength = (ulong)uVar5;
    uVar3 = 0;
    if ((long)(ulong)uVar5 <= omax - ((long)pbVar10 - (long)pbVar2)) goto LAB_0049f18a;
  }
  uVar4 = uVar3;
  ERR_new();
  ERR_set_debug("../crypto/asn1/asn1_lib.c",0x5f,"ASN1_get_object");
  bVar9 = bVar9 | 0x80;
  ERR_set_error(0xd,0x9b,0);
LAB_0049f18a:
  *pp = pbVar10;
  return bVar9 | uVar4;
LAB_0049f1c0:
  pbVar10 = pbVar10 + 1;
  uVar5 = uVar5 - 1;
  pbVar7 = pbVar10;
  if (uVar5 == 0) goto LAB_0049f260;
  goto LAB_0049f1cd;
}

