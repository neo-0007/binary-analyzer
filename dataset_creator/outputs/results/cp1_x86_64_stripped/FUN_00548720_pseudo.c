
undefined8 * FUN_00548720(long *param_1)

{
  int iVar1;
  int iVar2;
  ulong uVar3;
  int iVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  long lVar8;
  undefined8 *puVar9;
  long lVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  int iVar15;
  long in_FS_OFFSET;
  undefined8 *local_98;
  undefined8 *local_90;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  iVar4 = FUN_00436480(param_1[2]);
  lVar5 = FUN_0041e570((long)(iVar4 + 1) * 0x28);
  lVar8 = *param_1;
  lVar10 = param_1[1] << 3;
  if (lVar10 == 0) {
    local_90 = (undefined8 *)0x0;
  }
  else {
    local_90 = (undefined8 *)FUN_0041bc60(lVar10,"../crypto/param_build.c",0x16c);
    if (local_90 == (undefined8 *)0x0) {
      FUN_0051f420();
      FUN_0051f540("../crypto/param_build.c",0x16e,"OSSL_PARAM_BLD_to_param");
      FUN_0051f8f0(0xf,0x6f,0);
      local_98 = (undefined8 *)0x0;
      goto LAB_0054894a;
    }
  }
  local_98 = (undefined8 *)FUN_0041ad90((lVar5 + lVar8) * 8,"../crypto/param_build.c",0x172);
  if (local_98 == (undefined8 *)0x0) {
    FUN_0051f420();
    FUN_0051f540("../crypto/param_build.c",0x174,"OSSL_PARAM_BLD_to_param");
    FUN_0051f8f0(0xf,0xc0100,0);
    FUN_0041c010(local_90,"../crypto/param_build.c",0x175);
  }
  else {
    iVar4 = FUN_00436480(param_1[2]);
    puVar12 = local_98 + lVar5;
    puVar9 = local_98;
    if (0 < iVar4) {
      iVar15 = 0;
      puVar14 = local_90;
      do {
        while( true ) {
          puVar6 = (undefined8 *)FUN_004364a0(param_1[2],iVar15);
          uVar3 = puVar6[2];
          *puVar9 = *puVar6;
          iVar1 = *(int *)(puVar6 + 1);
          puVar9[3] = uVar3;
          *(int *)(puVar9 + 1) = iVar1;
          iVar2 = *(int *)((long)puVar6 + 0xc);
          puVar9[4] = 0xffffffffffffffff;
          if (iVar2 == 0) break;
          puVar13 = puVar14 + puVar6[3];
          puVar9[2] = puVar14;
          lVar8 = puVar6[4];
          puVar11 = puVar14;
          if (lVar8 == 0) goto LAB_0054886b;
LAB_00548805:
          thunk_FUN_004b87e0(lVar8,puVar11);
LAB_0054880d:
          iVar15 = iVar15 + 1;
          puVar9 = puVar9 + 5;
          puVar14 = puVar13;
          if (iVar4 == iVar15) goto LAB_005488b8;
        }
        puVar13 = puVar12 + puVar6[3];
        puVar9[2] = puVar12;
        lVar8 = puVar6[4];
        puVar11 = puVar12;
        puVar12 = puVar13;
        puVar13 = puVar14;
        if (lVar8 != 0) goto LAB_00548805;
LAB_0054886b:
        if (iVar1 - 6U < 2) {
          *puVar11 = puVar6[5];
          goto LAB_0054880d;
        }
        if (iVar1 - 4U < 2) {
          if (puVar6[5] == 0) {
            lVar8 = thunk_FUN_00713720(puVar11,0);
          }
          else {
            lVar8 = thunk_FUN_00713a50(puVar11);
          }
          if (*(int *)(puVar6 + 1) == 4) {
            *(undefined1 *)(lVar8 + puVar6[2]) = 0;
          }
          goto LAB_0054880d;
        }
        if (8 < uVar3) {
          thunk_FUN_00713720(puVar11,0);
          goto LAB_0054880d;
        }
        if (uVar3 == 0) goto LAB_0054880d;
        iVar15 = iVar15 + 1;
        puVar9 = puVar9 + 5;
        thunk_FUN_00713a50(puVar11,puVar6 + 6);
        puVar14 = puVar13;
      } while (iVar4 != iVar15);
LAB_005488b8:
      puVar9 = local_98 + (long)iVar4 * 5;
    }
    FUN_0041e470(&local_78);
    *puVar9 = local_78;
    puVar9[1] = uStack_70;
    puVar9[2] = local_68;
    puVar9[3] = uStack_60;
    puVar9[4] = local_58;
    FUN_0041e6d0(puVar9,local_90,lVar10);
    *param_1 = 0;
    param_1[1] = 0;
    iVar4 = FUN_00436480(param_1[2]);
    if (0 < iVar4) {
      iVar15 = 0;
      do {
        iVar15 = iVar15 + 1;
        uVar7 = FUN_00436020(param_1[2]);
        FUN_0041ad60(uVar7,"../crypto/param_build.c",0x6e);
      } while (iVar4 != iVar15);
    }
  }
LAB_0054894a:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    FUN_00771f60();
  }
  return local_98;
}

