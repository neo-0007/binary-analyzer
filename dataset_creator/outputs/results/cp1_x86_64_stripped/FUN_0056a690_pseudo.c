
uint FUN_0056a690(long param_1,undefined8 param_2)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  undefined8 *puVar11;
  undefined8 uVar12;
  long lVar13;
  uint uVar14;
  bool bVar15;
  int local_40;
  
  if ((((*(long *)(param_1 + 0x40) == 0) || (*(long *)(param_1 + 0x48) == 0)) ||
      (*(long *)(param_1 + 0x28) == 0)) ||
     ((*(long *)(param_1 + 0x30) == 0 || (*(long *)(param_1 + 0x38) == 0)))) {
    FUN_0051f420();
    FUN_0051f540("../crypto/rsa/rsa_chk.c",0x1f,"rsa_validate_keypair_multiprime");
    FUN_0051f8f0(4,0x93,0);
    return 0;
  }
  local_40 = 0;
  if (*(int *)(param_1 + 0x10) == 1) {
    local_40 = FUN_00436480(*(undefined8 *)(param_1 + 0x88));
    if (local_40 < 1) {
LAB_0056a993:
      FUN_0051f420();
      FUN_0051f540("../crypto/rsa/rsa_chk.c",0x28,"rsa_validate_keypair_multiprime");
      FUN_0051f8f0(4,0xa7,0);
      return 0;
    }
    uVar3 = FUN_004b7bb0(*(undefined8 *)(param_1 + 0x28));
    iVar1 = FUN_0042d5f0(uVar3);
    if (iVar1 <= local_40 + 1) goto LAB_0056a993;
  }
  lVar5 = FUN_004b7690();
  lVar6 = FUN_004b7690();
  lVar7 = FUN_004b7690();
  lVar8 = FUN_004b7690();
  lVar9 = FUN_004b7690();
  lVar10 = FUN_004b2a70(*(undefined8 *)(param_1 + 8));
  if (((lVar5 == 0) || (lVar6 == 0)) ||
     ((lVar7 == 0 || (((lVar8 == 0 || (lVar9 == 0)) || (lVar10 == 0)))))) {
    FUN_0051f420();
    FUN_0051f540("../crypto/rsa/rsa_chk.c",0x36,"rsa_validate_keypair_multiprime");
    uVar14 = 0xffffffff;
    FUN_0051f8f0(4,0xc0100,0);
    goto LAB_0056a91e;
  }
  iVar1 = FUN_004b7cc0(*(undefined8 *)(param_1 + 0x30));
  if (iVar1 != 0) {
    FUN_0051f420();
    FUN_0051f540("../crypto/rsa/rsa_chk.c",0x3c,"rsa_validate_keypair_multiprime");
    FUN_0051f8f0(4,0x65,0);
  }
  uVar14 = (uint)(iVar1 == 0);
  iVar1 = FUN_004b7d40(*(undefined8 *)(param_1 + 0x30));
  if (iVar1 == 0) {
    FUN_0051f420();
    uVar14 = 0;
    FUN_0051f540("../crypto/rsa/rsa_chk.c",0x40,"rsa_validate_keypair_multiprime");
    FUN_0051f8f0(4,0x65,0);
  }
  iVar1 = FUN_005c4db0(*(undefined8 *)(param_1 + 0x40),lVar10,param_2);
  if (iVar1 != 1) {
    FUN_0051f420();
    uVar14 = 0;
    FUN_0051f540("../crypto/rsa/rsa_chk.c",0x46,"rsa_validate_keypair_multiprime");
    FUN_0051f8f0(4,0x80,0);
  }
  iVar1 = FUN_005c4db0(*(undefined8 *)(param_1 + 0x48),lVar10,param_2);
  if (iVar1 != 1) {
    FUN_0051f420();
    uVar14 = 0;
    FUN_0051f540("../crypto/rsa/rsa_chk.c",0x4c,"rsa_validate_keypair_multiprime");
    FUN_0051f8f0(4,0x81,0);
  }
  if (local_40 == 0) {
    iVar1 = FUN_004bacf0(lVar5,*(undefined8 *)(param_1 + 0x40),*(undefined8 *)(param_1 + 0x48),
                         lVar10);
    if (iVar1 != 0) {
      iVar1 = FUN_004b7840(lVar5,*(undefined8 *)(param_1 + 0x28));
      if (iVar1 != 0) {
        FUN_0051f420();
        uVar14 = 0;
        FUN_0051f540("../crypto/rsa/rsa_chk.c",0x69,"rsa_validate_keypair_multiprime");
        FUN_0051f8f0(4,0x7f,0);
      }
      goto LAB_0056aae4;
    }
  }
  else {
    iVar1 = 0;
    do {
      iVar4 = iVar1;
      puVar11 = (undefined8 *)FUN_004364a0(*(undefined8 *)(param_1 + 0x88),iVar4);
      iVar1 = FUN_005c4db0(*puVar11,lVar10,param_2);
      if (iVar1 != 1) {
        FUN_0051f420();
        uVar14 = 0;
        FUN_0051f540("../crypto/rsa/rsa_chk.c",0x54,"rsa_validate_keypair_multiprime");
        FUN_0051f8f0(4,0xaa,0);
      }
      iVar1 = iVar4 + 1;
    } while (local_40 != iVar4 + 1);
    iVar2 = FUN_004bacf0(lVar5,*(undefined8 *)(param_1 + 0x40),*(undefined8 *)(param_1 + 0x48),
                         lVar10);
    iVar1 = 0;
    if (iVar2 != 0) {
      do {
        puVar11 = (undefined8 *)FUN_004364a0(*(undefined8 *)(param_1 + 0x88),iVar1);
        iVar2 = FUN_004bacf0(lVar5,lVar5,*puVar11,lVar10);
        if (iVar2 == 0) goto LAB_0056a891;
        bVar15 = iVar4 != iVar1;
        iVar1 = iVar1 + 1;
      } while (bVar15);
      iVar1 = FUN_004b7840(lVar5,*(undefined8 *)(param_1 + 0x28));
      if (iVar1 != 0) {
        FUN_0051f420();
        uVar14 = 0;
        FUN_0051f540("../crypto/rsa/rsa_chk.c",0x67,"rsa_validate_keypair_multiprime");
        FUN_0051f8f0(4,0xac,0);
      }
LAB_0056aae4:
      uVar12 = FUN_004b75a0();
      iVar1 = FUN_004b18d0(lVar5,*(undefined8 *)(param_1 + 0x40),uVar12);
      if (iVar1 != 0) {
        uVar12 = FUN_004b75a0();
        iVar1 = FUN_004b18d0(lVar6,*(undefined8 *)(param_1 + 0x48),uVar12);
        if (((iVar1 != 0) && (iVar1 = FUN_004bacf0(lVar8,lVar5,lVar6,lVar10), iVar1 != 0)) &&
           (iVar1 = FUN_004b6d50(lVar9,lVar5,lVar6,lVar10), iVar1 != 0)) {
          if (local_40 != 0) {
            iVar1 = 0;
            do {
              puVar11 = (undefined8 *)FUN_004364a0(*(undefined8 *)(param_1 + 0x88),iVar1);
              uVar12 = FUN_004b75a0();
              iVar4 = FUN_004b18d0(lVar7,*puVar11,uVar12);
              if (((iVar4 == 0) || (iVar4 = FUN_004bacf0(lVar8,lVar8,lVar7,lVar10), iVar4 == 0)) ||
                 (iVar4 = FUN_004b6d50(lVar9,lVar9,lVar7,lVar10), iVar4 == 0)) goto LAB_0056a891;
              iVar1 = iVar1 + 1;
            } while (local_40 != iVar1);
          }
          iVar1 = FUN_004b34a0(lVar7,0,lVar8,lVar9,lVar10);
          if ((iVar1 != 0) &&
             (iVar1 = FUN_004b8fe0(lVar5,*(undefined8 *)(param_1 + 0x38),
                                   *(undefined8 *)(param_1 + 0x30),lVar7,lVar10), iVar1 != 0)) {
            iVar1 = FUN_004b7cc0(lVar5);
            if (iVar1 == 0) {
              FUN_0051f420();
              uVar14 = 0;
              FUN_0051f540("../crypto/rsa/rsa_chk.c",0x99,"rsa_validate_keypair_multiprime");
              FUN_0051f8f0(4,0x7b,0);
            }
            if (((*(long *)(param_1 + 0x50) == 0) || (*(long *)(param_1 + 0x58) == 0)) ||
               (*(long *)(param_1 + 0x60) == 0)) {
LAB_0056adde:
              for (iVar1 = 0; local_40 != iVar1; iVar1 = iVar1 + 1) {
                puVar11 = (undefined8 *)FUN_004364a0(*(undefined8 *)(param_1 + 0x88),iVar1);
                uVar12 = FUN_004b75a0();
                iVar4 = FUN_004b18d0(lVar5,*puVar11,uVar12);
                if ((iVar4 == 0) ||
                   (iVar4 = FUN_004b34a0(0,lVar6,*(undefined8 *)(param_1 + 0x38),lVar5,lVar10),
                   iVar4 == 0)) goto LAB_0056a891;
                iVar4 = FUN_004b7840(lVar6,puVar11[1]);
                if (iVar4 != 0) {
                  FUN_0051f420();
                  uVar14 = 0;
                  FUN_0051f540("../crypto/rsa/rsa_chk.c",0xd1,"rsa_validate_keypair_multiprime");
                  FUN_0051f8f0(4,0xa9,0);
                }
                lVar13 = FUN_004b6c40(lVar5,puVar11[3],*puVar11,lVar10);
                if (lVar13 == 0) goto LAB_0056a891;
                iVar4 = FUN_004b7840(lVar5,puVar11[2]);
                if (iVar4 != 0) {
                  FUN_0051f420();
                  uVar14 = 0;
                  FUN_0051f540("../crypto/rsa/rsa_chk.c",0xda,"rsa_validate_keypair_multiprime");
                  FUN_0051f8f0(4,0xa8,0);
                }
              }
              goto LAB_0056a91e;
            }
            uVar12 = FUN_004b75a0();
            iVar1 = FUN_004b18d0(lVar5,*(undefined8 *)(param_1 + 0x40),uVar12);
            if ((iVar1 != 0) &&
               (iVar1 = FUN_004b34a0(0,lVar6,*(undefined8 *)(param_1 + 0x38),lVar5,lVar10),
               iVar1 != 0)) {
              iVar1 = FUN_004b7840(lVar6,*(undefined8 *)(param_1 + 0x50));
              if (iVar1 != 0) {
                FUN_0051f420();
                uVar14 = 0;
                FUN_0051f540("../crypto/rsa/rsa_chk.c",0xa8,"rsa_validate_keypair_multiprime");
                FUN_0051f8f0(4,0x7c,0);
              }
              uVar12 = FUN_004b75a0();
              iVar1 = FUN_004b18d0(lVar5,*(undefined8 *)(param_1 + 0x48),uVar12);
              if ((iVar1 != 0) &&
                 (iVar1 = FUN_004b34a0(0,lVar6,*(undefined8 *)(param_1 + 0x38),lVar5,lVar10),
                 iVar1 != 0)) {
                iVar1 = FUN_004b7840(lVar6,*(undefined8 *)(param_1 + 0x58));
                if (iVar1 != 0) {
                  FUN_0051f420();
                  uVar14 = 0;
                  FUN_0051f540("../crypto/rsa/rsa_chk.c",0xb6,"rsa_validate_keypair_multiprime");
                  FUN_0051f8f0(4,0x7d,0);
                }
                lVar13 = FUN_004b6c40(lVar5,*(undefined8 *)(param_1 + 0x48),
                                      *(undefined8 *)(param_1 + 0x40),lVar10);
                if (lVar13 != 0) {
                  iVar1 = FUN_004b7840(lVar5,*(undefined8 *)(param_1 + 0x60));
                  if (iVar1 != 0) {
                    FUN_0051f420();
                    uVar14 = 0;
                    FUN_0051f540("../crypto/rsa/rsa_chk.c",0xc0,"rsa_validate_keypair_multiprime");
                    FUN_0051f8f0(4,0x7e,0);
                  }
                  goto LAB_0056adde;
                }
              }
            }
          }
        }
      }
    }
  }
LAB_0056a891:
  uVar14 = 0xffffffff;
LAB_0056a91e:
  FUN_004b7fa0(lVar5);
  FUN_004b7fa0(lVar6);
  FUN_004b7fa0(lVar7);
  FUN_004b7fa0(lVar8);
  FUN_004b7fa0(lVar9);
  FUN_004b2b50(lVar10);
  return uVar14;
}

