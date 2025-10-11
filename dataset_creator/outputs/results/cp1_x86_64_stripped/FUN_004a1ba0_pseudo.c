
byte FUN_004a1ba0(long *param_1,ulong *param_2,uint *param_3,uint *param_4,long param_5)

{
  byte *pbVar1;
  byte bVar2;
  uint uVar3;
  ulong uVar4;
  byte *pbVar5;
  long lVar6;
  byte bVar7;
  byte *pbVar8;
  byte bVar9;
  
  pbVar1 = (byte *)*param_1;
  if (param_5 < 1) {
    FUN_0051f420();
    FUN_0051f540("../crypto/asn1/asn1_lib.c",0x38,"ASN1_get_object");
    FUN_0051f8f0(0xd,0xe0,0);
    return 0x80;
  }
  bVar7 = *pbVar1;
  pbVar5 = pbVar1 + 1;
  lVar6 = param_5 + -1;
  uVar3 = bVar7 & 0x1f;
  if ((char)uVar3 == '\x1f') {
    uVar4 = 0;
    if (lVar6 != 0) {
      do {
        bVar9 = *pbVar5;
        pbVar5 = pbVar5 + 1;
        lVar6 = lVar6 + -1;
        if (-1 < (char)bVar9) {
          uVar3 = (uint)bVar9 | (uint)(uVar4 << 7);
          goto joined_r0x004a1cfc;
        }
        uVar4 = uVar4 << 7 | (ulong)(bVar9 & 0x7f);
      } while ((lVar6 != 0) && ((long)uVar4 < 0x1000000));
    }
LAB_004a1c80:
    FUN_0051f420();
    FUN_0051f540("../crypto/asn1/asn1_lib.c",0x69,"ASN1_get_object");
    FUN_0051f8f0(0xd,0x7b,0);
    return 0x80;
  }
joined_r0x004a1cfc:
  if (lVar6 == 0) goto LAB_004a1c80;
  *param_3 = uVar3;
  pbVar8 = pbVar5 + 1;
  *param_4 = bVar7 & 0xc0;
  bVar9 = *pbVar5;
  bVar7 = bVar7 & 0x20;
  if (bVar9 == 0x80) {
    *param_2 = 0;
    if (bVar7 == 0) goto LAB_004a1c80;
    uVar4 = 0;
    bVar9 = 1;
LAB_004a1d18:
    bVar2 = bVar9;
    if ((long)uVar4 <= param_5 - ((long)pbVar8 - (long)pbVar1)) goto LAB_004a1d2a;
  }
  else {
    uVar3 = bVar9 & 0x7f;
    if ((char)bVar9 < '\0') {
      if (lVar6 <= (int)(uVar3 + 1)) goto LAB_004a1c80;
      pbVar5 = pbVar8;
      if ((char)uVar3 != '\0') {
LAB_004a1d6d:
        bVar9 = *pbVar8;
        if (bVar9 == 0) goto LAB_004a1d60;
        if ((int)uVar3 < 9) {
          uVar4 = 0;
          pbVar5 = pbVar8 + (int)uVar3;
          while( true ) {
            pbVar8 = pbVar8 + 1;
            uVar4 = uVar4 << 8 | (ulong)bVar9;
            if (pbVar5 == pbVar8) break;
            bVar9 = *pbVar8;
          }
          if ((long)uVar4 < 0) goto LAB_004a1c80;
          goto LAB_004a1dae;
        }
        goto LAB_004a1c80;
      }
LAB_004a1e00:
      uVar4 = 0;
LAB_004a1dae:
      *param_2 = uVar4;
      bVar9 = 0;
      pbVar8 = pbVar5;
      goto LAB_004a1d18;
    }
    bVar9 = 0;
    *param_2 = (ulong)uVar3;
    bVar2 = 0;
    if ((long)(ulong)uVar3 <= param_5 - ((long)pbVar8 - (long)pbVar1)) goto LAB_004a1d2a;
  }
  bVar9 = bVar2;
  FUN_0051f420();
  FUN_0051f540("../crypto/asn1/asn1_lib.c",0x5f,"ASN1_get_object");
  bVar7 = bVar7 | 0x80;
  FUN_0051f8f0(0xd,0x9b,0);
LAB_004a1d2a:
  *param_1 = (long)pbVar8;
  return bVar7 | bVar9;
LAB_004a1d60:
  pbVar8 = pbVar8 + 1;
  uVar3 = uVar3 - 1;
  pbVar5 = pbVar8;
  if (uVar3 == 0) goto LAB_004a1e00;
  goto LAB_004a1d6d;
}

