
long FUN_00605fc0(long param_1)

{
  long *plVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined8 *puVar5;
  long *plVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  int iVar12;
  long in_FS_OFFSET;
  int local_44;
  long local_40;
  
  lVar11 = *(long *)(param_1 + 0x108);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if ((lVar11 != 0) || (iVar2 = FUN_004222c0(*(undefined8 *)(param_1 + 0x158)), iVar2 == 0))
  goto LAB_00605fee;
  if (*(long *)(param_1 + 0x108) == 0) {
    puVar5 = (undefined8 *)FUN_0041ad90(0x28,"../crypto/x509/pcy_cache.c",0x5c);
    if (puVar5 == (undefined8 *)0x0) {
      FUN_0051f420();
      FUN_0051f540("../crypto/x509/pcy_cache.c",0x5e,"policy_cache_new");
      FUN_0051f8f0(0x22,0xc0100,0);
    }
    else {
      *puVar5 = 0;
      puVar5[1] = 0;
      puVar5[2] = 0xffffffffffffffff;
      puVar5[3] = 0xffffffffffffffff;
      puVar5[4] = 0xffffffffffffffff;
      *(undefined8 **)(param_1 + 0x108) = puVar5;
      plVar6 = (long *)FUN_0059f590(param_1,0x191,&local_44,0);
      lVar11 = 0;
      lVar10 = lVar11;
      if (plVar6 == (long *)0x0) {
        if (local_44 != -1) goto LAB_00606255;
LAB_006060f8:
        lVar8 = FUN_0059f590(param_1,0x59,&local_44,0);
        iVar2 = local_44;
        if (lVar8 == 0) {
          if (local_44 == -1) goto LAB_00606037;
          goto LAB_00606255;
        }
        plVar1 = *(long **)(param_1 + 0x108);
        iVar3 = FUN_00436480(lVar8);
        if (iVar3 < 1) {
          FUN_00606480(0);
          FUN_00436430(lVar8,FUN_0060c3b0);
LAB_00606228:
          FUN_00436430(plVar1[1],FUN_00606480);
          plVar1[1] = 0;
          goto LAB_00606037;
        }
        iVar12 = 0;
        lVar9 = FUN_00436420(FUN_00605f50);
        plVar1[1] = lVar9;
        if (lVar9 == 0) {
          FUN_0051f420();
          uVar7 = 0x26;
LAB_006063be:
          FUN_0051f540("../crypto/x509/pcy_cache.c",uVar7,"policy_cache_create");
          FUN_0051f8f0(0x22,0xc0100,0);
          FUN_00436430(lVar8,FUN_0060c3b0);
          goto LAB_00606228;
        }
        do {
          uVar7 = FUN_004364a0(lVar8,iVar12);
          lVar9 = FUN_006064f0(uVar7,0,iVar2);
          if (lVar9 == 0) {
            FUN_0051f420();
            uVar7 = 0x2d;
            goto LAB_006063be;
          }
          iVar4 = FUN_00423da0(*(undefined8 *)(lVar9 + 8));
          if (iVar4 != 0x2ea) {
            iVar4 = FUN_00435f40(plVar1[1],lVar9);
            if (-1 < iVar4) goto LAB_0060639d;
            iVar4 = FUN_00435f80(plVar1[1],lVar9);
            if (iVar4 != 0) goto LAB_0060616d;
            FUN_0051f420();
            FUN_0051f540("../crypto/x509/pcy_cache.c",0x3d,"policy_cache_create");
            FUN_0051f8f0(0x22,0xc0100,0);
LAB_00606210:
            FUN_00606480(lVar9);
            FUN_00436430(lVar8,FUN_0060c3b0);
            goto LAB_00606228;
          }
          if (*plVar1 != 0) {
LAB_0060639d:
            *(uint *)(param_1 + 0xe8) = *(uint *)(param_1 + 0xe8) | 0x800;
            goto LAB_00606210;
          }
          *plVar1 = lVar9;
LAB_0060616d:
          iVar12 = iVar12 + 1;
        } while (iVar3 != iVar12);
        FUN_00606480(0);
        FUN_00436430(lVar8,FUN_0060c3b0);
        local_44 = 1;
        lVar8 = FUN_0059f590(param_1,0x2eb,&local_44,0);
        if (lVar8 == 0) {
          if (local_44 == -1) goto LAB_00606325;
          goto LAB_00606255;
        }
        local_44 = FUN_00606650(param_1,lVar8);
        if (local_44 < 1) goto LAB_00606255;
LAB_00606325:
        lVar10 = FUN_0059f590(param_1,0x2ec,&local_44,0);
        if (lVar10 == 0) {
          lVar10 = lVar11;
          if (local_44 != -1) goto LAB_00606255;
          lVar10 = 0;
        }
        else {
          if (*(int *)(lVar10 + 4) == 0x102) goto LAB_00606255;
          uVar7 = FUN_0049fa00(lVar10);
          puVar5[2] = uVar7;
        }
      }
      else {
        if (*plVar6 == 0) {
          lVar8 = plVar6[1];
          if (lVar8 != 0) goto LAB_0060627e;
        }
        else if (*(int *)(*plVar6 + 4) != 0x102) {
          uVar7 = FUN_0049fa00();
          lVar8 = plVar6[1];
          puVar5[3] = uVar7;
          if (lVar8 == 0) goto LAB_006060f8;
LAB_0060627e:
          if (*(int *)(lVar8 + 4) != 0x102) {
            uVar7 = FUN_0049fa00();
            puVar5[4] = uVar7;
            goto LAB_006060f8;
          }
        }
LAB_00606255:
        *(uint *)(param_1 + 0xe8) = *(uint *)(param_1 + 0xe8) | 0x800;
      }
      FUN_006116f0(plVar6);
      thunk_FUN_004a2270(lVar10);
    }
  }
LAB_00606037:
  FUN_004222e0(*(undefined8 *)(param_1 + 0x158));
  lVar11 = *(long *)(param_1 + 0x108);
LAB_00605fee:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    FUN_00771f60();
  }
  return lVar11;
}

