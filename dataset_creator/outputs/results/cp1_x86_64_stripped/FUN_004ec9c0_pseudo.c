
long * FUN_004ec9c0(undefined8 param_1,undefined8 param_2,int param_3)

{
  undefined4 uVar1;
  code *pcVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  long *plVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long *plVar14;
  int *piVar15;
  long lVar16;
  long local_80;
  long local_70;
  long local_68;
  
  if (param_3 < 1) goto LAB_004ecd90;
  lVar6 = 0;
  iVar5 = 0x2c0;
  piVar15 = &DAT_0092aea0;
  while (param_3 != iVar5) {
    lVar6 = lVar6 + 1;
    if (lVar6 == 0x52) goto LAB_004ecd90;
    iVar5 = *piVar15;
    piVar15 = piVar15 + 8;
  }
  uVar1 = (&DAT_0092ae80)[lVar6 * 8];
  piVar15 = (int *)(&PTR_DAT_0092ae88)[lVar6 * 4];
  pcVar2 = (code *)(&DAT_0092ae90)[lVar6 * 4];
  if (piVar15 == (int *)0x0) {
    uVar9 = 0;
    if (pcVar2 != (code *)0x0) {
      uVar9 = (*pcVar2)();
    }
    plVar14 = (long *)FUN_004ef460(param_1,param_2,uVar9);
  }
  else {
    lVar6 = FUN_004b2a70(param_1);
    if (lVar6 == 0) {
      FUN_0051f420();
      lVar12 = 0;
      lVar8 = 0;
      lVar16 = 0;
      plVar10 = (long *)0x0;
      FUN_0051f540("../crypto/ec/ec_curve.c",0xc52,"ec_group_new_from_data");
      FUN_0051f8f0(0x10,0xc0100,0);
      lVar11 = 0;
      local_68 = 0;
      local_80 = 0;
      local_70 = 0;
      goto LAB_004ecd6f;
    }
    iVar5 = piVar15[1];
    iVar4 = piVar15[2];
    lVar16 = (long)piVar15 + (long)iVar5 + 0x10;
    local_70 = FUN_004b84d0(lVar16,iVar4,0);
    if (local_70 == 0) {
LAB_004ecd20:
      local_80 = 0;
LAB_004ecd29:
      FUN_0051f420();
      lVar12 = 0;
      lVar8 = 0;
      lVar16 = 0;
      plVar10 = (long *)0x0;
      FUN_0051f540("../crypto/ec/ec_curve.c",0xc5f,"ec_group_new_from_data");
      FUN_0051f8f0(0x10,0x80003,0);
      lVar11 = 0;
      local_68 = 0;
LAB_004ecd6f:
      plVar14 = (long *)0x0;
      FUN_004efd00(plVar10);
    }
    else {
      lVar7 = (long)iVar4;
      lVar16 = lVar16 + lVar7;
      local_80 = FUN_004b84d0(lVar16,iVar4,0);
      if (local_80 == 0) goto LAB_004ecd20;
      lVar16 = lVar16 + lVar7;
      lVar8 = FUN_004b84d0(lVar16,iVar4,0);
      if (lVar8 == 0) goto LAB_004ecd29;
      if (pcVar2 == (code *)0x0) {
        if (*piVar15 == 0x196) {
          plVar10 = (long *)FUN_004ed500(local_70,local_80,lVar8,lVar6);
          if (plVar10 == (long *)0x0) {
            FUN_0051f420();
            uVar9 = 0xc6c;
            goto LAB_004ecec1;
          }
        }
        else {
          plVar10 = (long *)FUN_004ed580();
          if (plVar10 == (long *)0x0) {
            FUN_0051f420();
            uVar9 = 0xc75;
LAB_004ecec1:
            lVar16 = 0;
            lVar12 = 0;
            FUN_0051f540("../crypto/ec/ec_curve.c",uVar9,"ec_group_new_from_data");
            FUN_0051f8f0(0x10,0x80010,0);
            lVar11 = 0;
            local_68 = 0;
            goto LAB_004ecd6f;
          }
        }
      }
      else {
        uVar9 = (*pcVar2)();
        plVar10 = (long *)FUN_004ef460(param_1,param_2,uVar9);
        if ((plVar10 == (long *)0x0) ||
           (iVar3 = (**(code **)(*plVar10 + 0x28))(plVar10,local_70,local_80,lVar8,lVar6),
           iVar3 == 0)) {
          FUN_0051f420();
          uVar9 = 0xc67;
          goto LAB_004ecec1;
        }
      }
      FUN_004ef850(plVar10,uVar1);
      lVar11 = FUN_004efb90(plVar10);
      if (lVar11 == 0) {
        lVar16 = 0;
        lVar12 = 0;
        FUN_0051f420();
        FUN_0051f540("../crypto/ec/ec_curve.c",0xc7e,"ec_group_new_from_data");
        FUN_0051f8f0(0x10,0x80010,0);
        local_68 = 0;
        goto LAB_004ecd6f;
      }
      lVar16 = lVar16 + lVar7;
      lVar12 = FUN_004b84d0(lVar16,iVar4,0);
      if (lVar12 == 0) {
LAB_004ecf60:
        lVar16 = 0;
        FUN_0051f420();
        FUN_0051f540("../crypto/ec/ec_curve.c",0xc84,"ec_group_new_from_data");
        FUN_0051f8f0(0x10,0x80003,0);
        local_68 = 0;
        goto LAB_004ecd6f;
      }
      lVar16 = lVar16 + lVar7;
      local_68 = FUN_004b84d0(lVar16,iVar4,0);
      if (local_68 == 0) goto LAB_004ecf60;
      iVar3 = FUN_004f0f80(plVar10,lVar11,lVar12,local_68,lVar6);
      if (iVar3 == 0) {
        lVar16 = 0;
        FUN_0051f420();
        FUN_0051f540("../crypto/ec/ec_curve.c",0xc88,"ec_group_new_from_data");
        FUN_0051f8f0(0x10,0x80010,0);
        goto LAB_004ecd6f;
      }
      lVar16 = FUN_004b84d0(lVar16 + lVar7,iVar4,0);
      if ((lVar16 == 0) || (iVar4 = FUN_004b8190(lVar12,piVar15[3]), iVar4 == 0)) {
        FUN_0051f420();
        FUN_0051f540("../crypto/ec/ec_curve.c",0xc8d,"ec_group_new_from_data");
        FUN_0051f8f0(0x10,0x80003,0);
        goto LAB_004ecd6f;
      }
      iVar4 = FUN_004f03b0(plVar10,lVar11,lVar16,lVar12);
      if (iVar4 == 0) {
        FUN_0051f420();
        uVar9 = 0xc91;
LAB_004ed048:
        FUN_0051f540("../crypto/ec/ec_curve.c",uVar9,"ec_group_new_from_data");
        FUN_0051f8f0(0x10,0x80010,0);
        goto LAB_004ecd6f;
      }
      if ((iVar5 != 0) && (lVar7 = FUN_004ef8e0(plVar10,piVar15 + 4,(long)iVar5), lVar7 == 0)) {
        FUN_0051f420();
        uVar9 = 0xc96;
        goto LAB_004ed048;
      }
      iVar5 = FUN_004ef8b0(plVar10);
      plVar14 = plVar10;
      if (iVar5 == 1) {
        lVar7 = FUN_004239c0(uVar1);
        if (lVar7 == 0) {
          FUN_0051f420();
          FUN_0051f540("../crypto/ec/ec_curve.c",0xcac,"ec_group_new_from_data");
          FUN_0051f8f0(0x10,0x80008,0);
          goto LAB_004ecd6f;
        }
        lVar13 = FUN_00424a00(lVar7);
        if (lVar13 == 0) {
          FUN_004ef8a0(plVar10,0);
        }
        FUN_004a06b0(lVar7);
      }
    }
    FUN_004efcc0(lVar11);
    FUN_004b2b50(lVar6);
    FUN_004b7fa0(local_70);
    FUN_004b7fa0(local_80);
    FUN_004b7fa0(lVar8);
    FUN_004b7fa0(lVar16);
    FUN_004b7fa0(lVar12);
    FUN_004b7fa0(local_68);
  }
  if (plVar14 != (long *)0x0) {
    return plVar14;
  }
LAB_004ecd90:
  FUN_0051f420();
  FUN_0051f540("../crypto/ec/ec_curve.c",0xcd9,"EC_GROUP_new_by_curve_name_ex");
  uVar9 = FUN_00423b00(param_3);
  FUN_0051f8f0(0x10,0x81,"name=%s",uVar9);
  return (long *)0x0;
}

