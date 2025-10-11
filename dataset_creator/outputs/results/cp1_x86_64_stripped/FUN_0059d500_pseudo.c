
/* WARNING: Type propagation algorithm not settling */

undefined8 FUN_0059d500(undefined8 param_1)

{
  byte bVar1;
  byte *pbVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  byte *pbVar6;
  byte *pbVar7;
  undefined8 uVar9;
  long in_FS_OFFSET;
  undefined8 local_48;
  long local_40;
  byte *pbVar8;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_48 = 0;
  pbVar2 = (byte *)FUN_0041c2c0(param_1,"../crypto/x509/v3_utl.c",0x142);
  if (pbVar2 == (byte *)0x0) {
    FUN_0051f420();
    FUN_0051f540("../crypto/x509/v3_utl.c",0x144,"X509V3_parse_list");
    FUN_0051f8f0(0x22,0xc0100,0);
  }
  else {
    uVar3 = (ulong)*pbVar2;
    pbVar6 = pbVar2;
    if ((0xd < *pbVar2) || ((0xffffffffffffdbfeU >> (uVar3 & 0x3f) & 1) != 0)) {
      do {
        bVar1 = (byte)uVar3;
        pbVar8 = pbVar6;
        while (bVar1 != 0x3a) {
          while( true ) {
            pbVar7 = pbVar8 + 1;
            if ((char)uVar3 == ',') {
              *pbVar8 = 0;
              lVar4 = FUN_0059c080(pbVar6);
              if (lVar4 == 0) {
                FUN_0051f420(0);
                uVar9 = 0x15d;
                goto LAB_0059d719;
              }
              FUN_0059ce00(lVar4,0,&local_48);
              bVar1 = *pbVar7;
              pbVar6 = pbVar7;
            }
            else {
              bVar1 = *pbVar7;
            }
            uVar3 = (ulong)bVar1;
            pbVar8 = pbVar7;
            if (0xd < bVar1) break;
            if ((0xffffffffffffdbfeU >> (uVar3 & 0x3f) & 1) == 0) goto LAB_0059d595;
          }
        }
        *pbVar8 = 0;
        lVar4 = FUN_0059c080(pbVar6);
        if (lVar4 == 0) {
          FUN_0051f420();
          uVar9 = 0x154;
          goto LAB_0059d719;
        }
        bVar1 = pbVar8[1];
        while( true ) {
          pbVar8 = pbVar8 + 1;
          if ((bVar1 < 0xe) && ((0xffffffffffffdbfeU >> ((ulong)bVar1 & 0x3f) & 1) == 0)) {
            lVar5 = FUN_0059c080();
            if (lVar5 == 0) {
              FUN_0051f420();
              uVar9 = 0x178;
              goto LAB_0059d7b1;
            }
            FUN_0059ce00(lVar4,lVar5,&local_48);
            goto LAB_0059d5b2;
          }
          if (bVar1 == 0x2c) break;
          bVar1 = pbVar8[1];
        }
        *pbVar8 = 0;
        lVar5 = FUN_0059c080();
        if (lVar5 == 0) {
          FUN_0051f420();
          uVar9 = 0x16a;
LAB_0059d7b1:
          FUN_0051f540("../crypto/x509/v3_utl.c",uVar9,"X509V3_parse_list");
          FUN_0051f8f0(0x22,0x6d,0);
          goto LAB_0059d734;
        }
        pbVar6 = pbVar8 + 1;
        FUN_0059ce00(lVar4,lVar5,&local_48);
        uVar3 = (ulong)pbVar8[1];
      } while ((0xd < pbVar8[1]) || ((0xffffffffffffdbfeU >> (uVar3 & 0x3f) & 1) != 0));
    }
LAB_0059d595:
    lVar4 = FUN_0059c080(pbVar6);
    if (lVar4 != 0) {
      FUN_0059ce00(lVar4,0,&local_48);
LAB_0059d5b2:
      FUN_0041ad60(pbVar2,"../crypto/x509/v3_utl.c",0x184);
      uVar9 = local_48;
      goto LAB_0059d5c7;
    }
    FUN_0051f420(0);
    uVar9 = 0x17f;
LAB_0059d719:
    FUN_0051f540("../crypto/x509/v3_utl.c",uVar9,"X509V3_parse_list");
    FUN_0051f8f0(0x22,0x6c,0);
  }
LAB_0059d734:
  FUN_0041ad60(pbVar2,"../crypto/x509/v3_utl.c",0x188);
  FUN_00436430(local_48,FUN_0059cb40);
  uVar9 = 0;
LAB_0059d5c7:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar9;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00771f60();
}

