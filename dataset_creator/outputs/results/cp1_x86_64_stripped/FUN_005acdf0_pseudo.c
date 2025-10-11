
int FUN_005acdf0(undefined8 *param_1)

{
  int *piVar1;
  int iVar2;
  byte bVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  long lVar7;
  undefined8 *puVar8;
  long *plVar9;
  long lVar10;
  ulong uVar11;
  byte *pbVar12;
  byte *pbVar13;
  undefined8 uVar14;
  byte *pbVar15;
  byte *pbVar16;
  long in_FS_OFFSET;
  int local_74;
  long local_68;
  int local_54;
  long local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  lVar7 = FUN_00436410();
  local_54 = -1;
  local_74 = 0;
  local_68 = 0;
  if (lVar7 == 0) {
    FUN_0051f420();
    plVar9 = (long *)0x0;
    iVar4 = 0;
    FUN_0051f540("../crypto/x509/x_name.c",0x141,"x509_name_canon");
    FUN_0051f8f0(0xb,0xc0100,0);
  }
  else {
    for (; iVar4 = FUN_00436480(*param_1), local_74 < iVar4; local_74 = local_74 + 1) {
      puVar8 = (undefined8 *)FUN_004364a0(*param_1,local_74);
      if (*(int *)(puVar8 + 2) != local_54) {
        local_68 = FUN_00436410();
        if (local_68 == 0) goto LAB_005ad0d7;
        iVar4 = FUN_00435f80(lVar7,local_68);
        if (iVar4 == 0) {
          plVar9 = (long *)0x0;
          FUN_004360b0(local_68);
          FUN_0051f420();
          FUN_0051f540("../crypto/x509/x_name.c",0x14c,"x509_name_canon");
          FUN_0051f8f0(0xb,0xc0100,0);
          iVar4 = 0;
          goto LAB_005acf01;
        }
        local_54 = *(int *)(puVar8 + 2);
      }
      plVar9 = (long *)FUN_005acdd0();
      if (plVar9 == (long *)0x0) {
        FUN_0051f420();
        uVar14 = 0x153;
        goto LAB_005ad160;
      }
      lVar10 = FUN_00424a40(*puVar8);
      *plVar9 = lVar10;
      if (lVar10 == 0) {
        FUN_0051f420();
        uVar14 = 0x158;
        goto LAB_005ad160;
      }
      lVar10 = puVar8[1];
      piVar1 = (int *)plVar9[1];
      uVar11 = FUN_004a3ed0(*(undefined4 *)(lVar10 + 4));
      if ((uVar11 & 0x2956) == 0) {
        iVar4 = FUN_004a20e0(piVar1,lVar10);
        if (iVar4 == 0) goto LAB_005acf01;
      }
      else {
        piVar1[1] = 0xc;
        iVar4 = FUN_005b7230(piVar1 + 2,lVar10);
        *piVar1 = iVar4;
        if (iVar4 == -1) {
          iVar4 = 0;
          goto LAB_005acf01;
        }
        pbVar16 = *(byte **)(piVar1 + 2);
        if (0 < iVar4) {
          do {
            iVar5 = FUN_005466b0(*pbVar16,8);
            if (iVar5 == 0) {
              pbVar12 = pbVar16 + iVar4;
              goto LAB_005acfed;
            }
            pbVar16 = pbVar16 + 1;
            iVar4 = iVar4 + -1;
          } while (iVar4 != 0);
        }
LAB_005ad0d0:
        iVar4 = 0;
LAB_005acf48:
        *piVar1 = iVar4;
      }
      iVar4 = FUN_00435f80(local_68);
      if (iVar4 == 0) {
        FUN_0051f420();
        FUN_0051f540("../crypto/x509/x_name.c",0x15e,"x509_name_canon");
        FUN_0051f8f0(0xb,0xc0100,0);
        iVar4 = 0;
        goto LAB_005acf01;
      }
    }
    iVar4 = FUN_005acb50(lVar7,0);
    if (iVar4 < 0) {
LAB_005ad0d7:
      iVar4 = 0;
      plVar9 = (long *)0x0;
    }
    else {
      *(int *)(param_1 + 4) = iVar4;
      local_48 = FUN_0041ad90((long)iVar4,"../crypto/x509/x_name.c",0x16a);
      if (local_48 == 0) {
        FUN_0051f420();
        uVar14 = 0x16c;
        plVar9 = (long *)0x0;
LAB_005ad160:
        FUN_0051f540("../crypto/x509/x_name.c",uVar14,"x509_name_canon");
        iVar4 = 0;
        FUN_0051f8f0(0xb,0xc0100,0);
      }
      else {
        iVar4 = 1;
        param_1[3] = local_48;
        plVar9 = (long *)0x0;
        FUN_005acb50(lVar7,&local_48);
      }
    }
  }
LAB_005acf01:
  FUN_005acaf0(plVar9);
  FUN_00436430(lVar7,&LAB_005acc00);
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    FUN_00771f60();
  }
  return iVar4;
LAB_005acfed:
  iVar5 = FUN_005466b0(pbVar12[-1],8);
  if (iVar5 != 0) goto LAB_005acfe0;
  iVar5 = 0;
  pbVar12 = *(byte **)(piVar1 + 2);
  do {
    bVar3 = *pbVar16;
    pbVar13 = pbVar12 + 1;
    pbVar15 = pbVar16 + 1;
    iVar2 = iVar5 + 1;
    if ((bVar3 & 0x80) == 0) {
      iVar6 = FUN_005466b0(bVar3,8);
      if (iVar6 == 0) {
        bVar3 = FUN_00546710(*pbVar16);
        *pbVar12 = bVar3;
      }
      else {
        *pbVar12 = 0x20;
        pbVar15 = pbVar16;
        do {
          pbVar15 = pbVar15 + 1;
          iVar6 = FUN_005466b0(*pbVar15,8);
          iVar2 = (iVar5 + (int)pbVar15) - (int)pbVar16;
        } while (iVar6 != 0);
      }
    }
    else {
      *pbVar12 = bVar3;
    }
    iVar5 = iVar2;
    pbVar12 = pbVar13;
    pbVar16 = pbVar15;
  } while (iVar5 < iVar4);
  iVar4 = (int)pbVar13 - piVar1[2];
  goto LAB_005acf48;
LAB_005acfe0:
  pbVar12 = pbVar12 + -1;
  iVar4 = iVar4 + -1;
  if (iVar4 == 0) goto LAB_005ad0d0;
  goto LAB_005acfed;
}

