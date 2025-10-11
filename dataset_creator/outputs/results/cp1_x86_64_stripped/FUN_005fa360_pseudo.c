
/* WARNING: Removing unreachable block (ram,0x005fa760) */
/* WARNING: Removing unreachable block (ram,0x005fa771) */

undefined8 FUN_005fa360(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined8 *puVar9;
  long lVar10;
  long lVar11;
  long in_FS_OFFSET;
  long local_78;
  long local_70;
  int local_64;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  uVar5 = FUN_004cdb50();
  lVar6 = FUN_004cca80(param_2,uVar5);
  local_64 = 0;
  if (lVar6 == 0) {
    FUN_0051f420();
    FUN_0051f540("../crypto/engine/eng_cnf.c",0x9e,"int_engine_module_init");
    FUN_0051f8f0(0x26,0x94,0);
    uVar5 = 0;
  }
  else {
    iVar3 = FUN_00436480(lVar6);
    if (0 < iVar3) {
      do {
        lVar7 = FUN_004364a0(lVar6,local_64);
        lVar8 = *(long *)(lVar7 + 8);
        uVar5 = *(undefined8 *)(lVar7 + 0x10);
        lVar7 = thunk_FUN_00712710(lVar8,0x2e);
        local_70 = lVar7 + 1;
        if (lVar7 == 0) {
          local_70 = lVar8;
        }
        lVar8 = FUN_004cca80(param_2,uVar5);
        if (lVar8 == 0) {
          FUN_0051f420();
          FUN_0051f540("../crypto/engine/eng_cnf.c",0x3c,"int_engine_configure");
          FUN_0051f8f0(0x26,0x95,0);
          uVar5 = 0;
          goto LAB_005fa621;
        }
        bVar2 = false;
        local_78 = 0;
        for (iVar3 = 0; iVar4 = FUN_00436480(lVar8), iVar3 < iVar4; iVar3 = iVar3 + 1) {
          puVar9 = (undefined8 *)FUN_004364a0(lVar8,iVar3);
          lVar7 = puVar9[1];
          lVar10 = thunk_FUN_00712710(lVar7,0x2e);
          lVar11 = puVar9[2];
          if (lVar10 != 0) {
            lVar7 = lVar10 + 1;
          }
          iVar4 = thunk_FUN_00712780(lVar7,"engine_id");
          if (iVar4 != 0) {
            iVar4 = thunk_FUN_00712780(lVar7,"soft_load");
            if (iVar4 != 0) {
              iVar4 = thunk_FUN_00712780(lVar7,"dynamic_path");
              if (iVar4 == 0) {
                local_78 = FUN_0051b290("dynamic");
                if (local_78 == 0) {
LAB_005fa70e:
                  local_78 = 0;
                }
                else {
                  iVar4 = FUN_005fae50(local_78,"SO_PATH",lVar11,0);
                  if ((iVar4 != 0) && (iVar4 = FUN_005fae50(local_78,"LIST_ADD","2",0), iVar4 != 0))
                  {
                    iVar4 = FUN_005fae50(local_78,"LOAD",0,0);
joined_r0x005fa4e1:
                    lVar11 = local_70;
                    if (iVar4 != 0) goto LAB_005fa4f0;
                  }
                }
              }
              else {
                if ((local_78 == 0) && (local_78 = FUN_0051b290(local_70), local_78 == 0)) {
                  if (!bVar2) goto LAB_005fa70e;
                  FUN_0051e390();
                  goto LAB_005fa73c;
                }
                iVar4 = thunk_FUN_00712780(lVar11,"EMPTY");
                if (iVar4 == 0) {
                  lVar11 = 0;
                }
                iVar4 = thunk_FUN_00712780(lVar7,"init");
                if (iVar4 != 0) {
                  iVar4 = thunk_FUN_00712780(lVar7,"default_algorithms");
                  if (iVar4 == 0) {
                    iVar4 = FUN_00519ef0(local_78,lVar11);
                  }
                  else {
                    iVar4 = FUN_005fae50(local_78,lVar7,lVar11,0);
                  }
                  goto joined_r0x005fa4e1;
                }
                iVar3 = FUN_004ccce0(param_2,uVar5,"init");
                if (iVar3 != 0) {
                  FUN_0051f420();
                  FUN_0051f540("../crypto/engine/eng_cnf.c",0x76,"int_engine_configure");
                  FUN_0051f8f0(0x26,0x97,0);
                }
              }
              FUN_0051f420();
              FUN_0051f540("../crypto/engine/eng_cnf.c",0x8b,"int_engine_configure");
              FUN_0051f8f0(0x26,0x66,"section=%s, name=%s, value=%s",*puVar9,puVar9[1],puVar9[2]);
              goto LAB_005fa616;
            }
            bVar2 = true;
            lVar11 = local_70;
          }
LAB_005fa4f0:
          local_70 = lVar11;
        }
        if ((local_78 != 0) && (iVar3 = FUN_005fa310(local_78), iVar3 == 0)) {
          FUN_0051f420();
          FUN_0051f540("../crypto/engine/eng_cnf.c",0x89,"int_engine_configure");
          FUN_0051f8f0(0x26,0x66,0);
LAB_005fa616:
          FUN_0051a5a0(local_78);
          uVar5 = 0;
          goto LAB_005fa621;
        }
        FUN_0051a5a0(local_78);
LAB_005fa73c:
        local_64 = local_64 + 1;
        iVar3 = FUN_00436480(lVar6);
      } while (local_64 < iVar3);
    }
    uVar5 = 1;
  }
LAB_005fa621:
  if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar5;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00771f60();
}

