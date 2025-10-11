
undefined8 FUN_004cd3e0(long param_1,long param_2,ulong param_3)

{
  undefined8 uVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  ulong uVar11;
  ulong *puVar12;
  ulong uVar13;
  ulong uVar14;
  code *pcVar15;
  int iVar16;
  undefined8 uVar17;
  int iVar18;
  
  if (param_1 == 0) {
    return 1;
  }
  lVar5 = FUN_004ccf20(param_1,0,"config_diagnostics");
  uVar6 = param_3 & 0xffffffffffffffe8;
  if (lVar5 == 0) {
    uVar6 = param_3;
  }
  FUN_0051f000();
  if (param_2 != 0) {
    lVar5 = FUN_004ccb80(param_1,0,param_2);
    if (lVar5 != 0) goto LAB_004cd463;
    if ((uVar6 & 0x20) == 0) goto LAB_004cd5bf;
  }
  lVar5 = FUN_004ccb80(param_1,0,"openssl_conf");
  if (lVar5 == 0) {
LAB_004cd5bf:
    FUN_0051f050();
    return 1;
  }
LAB_004cd463:
  lVar7 = FUN_004cca80(param_1,lVar5);
  if (lVar7 == 0) {
    if ((uVar6 & 4) != 0) {
      FUN_0051f050();
      return 0;
    }
    FUN_0051f1a0();
    FUN_0051f420();
    FUN_0051f540("../crypto/conf/conf_mod.c",0x7d,"CONF_modules_load");
    FUN_0051f8f0(0xe,0x7c,"openssl_conf=%s",lVar5);
    return 0;
  }
  FUN_0051f050();
  iVar16 = 0;
  iVar3 = FUN_00436480(lVar7);
  if (0 < iVar3) {
    do {
      lVar5 = FUN_004364a0(lVar7,iVar16);
      FUN_0051f000();
      uVar1 = *(undefined8 *)(lVar5 + 0x10);
      lVar5 = *(long *)(lVar5 + 8);
      iVar3 = FUN_00422340(&DAT_00940fe4,FUN_004cd270);
      if ((iVar3 == 0) || (DAT_00940fe0 == 0)) {
joined_r0x004cd565:
        if ((uVar6 & 1) == 0) {
          FUN_0051f1a0();
          return 0xffffffff;
        }
      }
      else {
        lVar8 = thunk_FUN_00712bd0(lVar5,0x2e);
        if (lVar8 == 0) {
          iVar3 = thunk_FUN_007129d0(lVar5);
        }
        else {
          iVar3 = (int)lVar8 - (int)lVar5;
        }
        for (iVar18 = 0; iVar4 = FUN_00436480(DAT_00940ff0), iVar18 < iVar4; iVar18 = iVar18 + 1) {
          uVar11 = FUN_004364a0(DAT_00940ff0,iVar18);
          iVar4 = thunk_FUN_00712ab0(*(undefined8 *)(uVar11 + 8),lVar5,(long)iVar3);
          if (iVar4 == 0) goto LAB_004cd660;
        }
        if ((uVar6 & 8) != 0) {
LAB_004cd555:
          if ((uVar6 & 4) == 0) {
            FUN_0051f420();
            FUN_0051f540("../crypto/conf/conf_mod.c",0xe9,"module_run");
            FUN_0051f8f0(0xe,0x71,"module=%s");
          }
          goto joined_r0x004cd565;
        }
        lVar8 = FUN_005c9770(param_1,uVar1,"path");
        if (lVar8 == 0) {
          lVar8 = lVar5;
        }
        lVar9 = FUN_004db100(0,lVar8,0,0);
        if (lVar9 == 0) {
          uVar11 = 0x6e;
LAB_004cd869:
          FUN_004daaa0(lVar9);
          FUN_0051f420();
          FUN_0051f540("../crypto/conf/conf_mod.c",0x120,"module_load_dso");
          FUN_0051f8f0(0xe,uVar11 & 0xffffffff,"module=%s, path=%s",lVar5,lVar8);
          goto LAB_004cd555;
        }
        lVar10 = FUN_004dadd0(lVar9,"OPENSSL_init");
        if (lVar10 == 0) {
          uVar11 = 0x70;
          goto LAB_004cd869;
        }
        FUN_004dadd0(lVar9,"OPENSSL_finish");
        uVar11 = FUN_004cd2a0(lVar9,lVar5,lVar10);
        if (uVar11 == 0) goto LAB_004cd869;
LAB_004cd660:
        puVar12 = (ulong *)FUN_0041ad90(0x28,"../crypto/conf/conf_mod.c",0x169);
        if (puVar12 == (ulong *)0x0) {
LAB_004cd77f:
          if ((uVar6 & 4) == 0) {
            FUN_0051f420();
            FUN_0051f540("../crypto/conf/conf_mod.c",0xf3,"module_run");
            FUN_0051f8f0(0xe,0x6d,"module=%s, value=%s retcode=%-8d",lVar5,uVar1,0xffffffff);
          }
          goto joined_r0x004cd565;
        }
        *puVar12 = uVar11;
        uVar13 = FUN_0041c2c0(lVar5,"../crypto/conf/conf_mod.c",0x16e);
        puVar12[1] = uVar13;
        uVar14 = FUN_0041c2c0(uVar1,"../crypto/conf/conf_mod.c",0x16f);
        uVar13 = puVar12[1];
        puVar12[4] = 0;
        puVar12[2] = uVar14;
        if ((uVar13 == 0) || (uVar14 == 0)) {
LAB_004cd751:
          FUN_0041ad60(uVar13,"../crypto/conf/conf_mod.c",0x197);
          FUN_0041ad60(puVar12[2],"../crypto/conf/conf_mod.c",0x198);
          FUN_0041ad60(puVar12,"../crypto/conf/conf_mod.c",0x199);
          goto LAB_004cd77f;
        }
        if (*(code **)(uVar11 + 0x10) != (code *)0x0) {
          bVar2 = true;
          iVar3 = (**(code **)(uVar11 + 0x10))(puVar12,param_1);
          if (0 < iVar3) goto joined_r0x004cd81d;
          pcVar15 = *(code **)(uVar11 + 0x18);
          if (pcVar15 != (code *)0x0) goto LAB_004cd748;
LAB_004cd74d:
          uVar13 = puVar12[1];
          goto LAB_004cd751;
        }
        bVar2 = false;
joined_r0x004cd81d:
        if ((DAT_00940fe8 == 0) && (DAT_00940fe8 = FUN_00436410(), DAT_00940fe8 == 0)) {
          FUN_0051f420(0);
          uVar17 = 0x181;
LAB_004cd71f:
          FUN_0051f540("../crypto/conf/conf_mod.c",uVar17,"module_init");
          FUN_0051f8f0(0xe,0xc0100,0);
          pcVar15 = *(code **)(uVar11 + 0x18);
          if ((pcVar15 != (code *)0x0) && (bVar2)) {
LAB_004cd748:
            (*pcVar15)(puVar12);
          }
          goto LAB_004cd74d;
        }
        iVar3 = FUN_00435f80(DAT_00940fe8,puVar12);
        if (iVar3 == 0) {
          FUN_0051f420();
          uVar17 = 0x187;
          goto LAB_004cd71f;
        }
        *(int *)(uVar11 + 0x20) = *(int *)(uVar11 + 0x20) + 1;
      }
      FUN_0051f050();
      iVar16 = iVar16 + 1;
      iVar3 = FUN_00436480(lVar7);
    } while (iVar16 < iVar3);
  }
  return 1;
}

