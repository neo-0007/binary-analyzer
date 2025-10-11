
undefined8 FUN_00616130(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  char *pcVar2;
  int iVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  char *pcVar7;
  long lVar8;
  char *pcVar9;
  long lVar10;
  char *pcVar11;
  int iVar12;
  
  iVar12 = 0;
  uVar4 = FUN_004cdb50();
  lVar5 = FUN_004cca80(param_2,uVar4);
  if (lVar5 == 0) {
    FUN_0051f420();
    FUN_0051f540("../crypto/asn1/asn_moid.c",0x20,"oid_module_init");
    FUN_0051f8f0(0xd,0xac,0);
    uVar4 = 0;
  }
  else {
    iVar3 = FUN_00436480(lVar5);
    if (0 < iVar3) {
      do {
        lVar6 = FUN_004364a0(lVar5,iVar12);
        pcVar11 = *(char **)(lVar6 + 0x10);
        lVar6 = *(long *)(lVar6 + 8);
        pcVar7 = (char *)thunk_FUN_00712bd0(pcVar11,0x2c);
        if (pcVar7 == (char *)0x0) {
          lVar8 = 0;
          lVar10 = lVar6;
        }
        else {
          cVar1 = pcVar7[1];
          pcVar2 = pcVar7;
          if (cVar1 == '\0') goto LAB_006162cc;
          while( true ) {
            iVar3 = FUN_005466b0((int)cVar1,8);
            if (iVar3 == 0) break;
            cVar1 = pcVar2[2];
            pcVar2 = pcVar2 + 1;
          }
          while (iVar3 = FUN_005466b0((int)*pcVar11,8), iVar3 != 0) {
            pcVar11 = pcVar11 + 1;
          }
          while( true ) {
            pcVar9 = pcVar7 + -1;
            iVar3 = FUN_005466b0((int)pcVar7[-1],8);
            if (iVar3 == 0) break;
            pcVar7 = pcVar9;
            if (pcVar11 == pcVar9) goto LAB_006162cc;
          }
          lVar10 = (long)pcVar7 - (long)pcVar11;
          lVar8 = FUN_0041ad90(lVar10 + 1,"../crypto/asn1/asn_moid.c",0x56);
          if (lVar8 == 0) {
            FUN_0051f420();
            FUN_0051f540("../crypto/asn1/asn_moid.c",0x57,"do_create");
            FUN_0051f8f0(0xd,0xc0100,0);
            goto LAB_006162cc;
          }
          lVar8 = thunk_FUN_00713a50(lVar8,pcVar11,lVar10);
          *(undefined1 *)(lVar8 + lVar10) = 0;
          lVar10 = lVar8;
          pcVar11 = pcVar2 + 1;
        }
        iVar3 = FUN_00424740(pcVar11,lVar6,lVar10);
        FUN_0041ad60(lVar8,"../crypto/asn1/asn_moid.c",0x61);
        if (iVar3 == 0) {
LAB_006162cc:
          FUN_0051f420();
          FUN_0051f540("../crypto/asn1/asn_moid.c",0x26,"oid_module_init");
          FUN_0051f8f0(0xd,0xab,0);
          return 0;
        }
        iVar12 = iVar12 + 1;
        iVar3 = FUN_00436480(lVar5);
      } while (iVar12 < iVar3);
    }
    uVar4 = 1;
  }
  return uVar4;
}

