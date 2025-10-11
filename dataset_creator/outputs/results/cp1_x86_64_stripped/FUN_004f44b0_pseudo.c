
undefined4 FUN_004f44b0(long *param_1,long param_2)

{
  int iVar1;
  undefined8 *puVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  long *plVar7;
  long lVar8;
  byte bVar9;
  undefined8 uVar10;
  long *plVar11;
  long *plVar12;
  undefined4 local_94;
  long local_90;
  long local_88;
  ulong local_80;
  long local_68;
  long local_60;
  
  FUN_004ef690();
  if (param_1 == (long *)0x0) {
    return 0;
  }
  puVar2 = (undefined8 *)FUN_0041aec0(0x40,"../crypto/ec/ec_mult.c",0x3a);
  if (puVar2 == (undefined8 *)0x0) {
    FUN_0051f420();
    FUN_0051f540("../crypto/ec/ec_mult.c",0x3c,"ec_pre_comp_new");
    FUN_0051f8f0(0x10,0xc0100,0);
    return 0;
  }
  *puVar2 = param_1;
  puVar2[1] = 8;
  puVar2[3] = 4;
  LOCK();
  *(undefined4 *)(puVar2 + 6) = 1;
  UNLOCK();
  lVar3 = FUN_00422240();
  puVar2[7] = lVar3;
  if (lVar3 == 0) {
    FUN_0051f420();
    FUN_0051f540("../crypto/ec/ec_mult.c",0x47,"ec_pre_comp_new");
    FUN_0051f8f0(0x10,0xc0100,0);
    FUN_0041ad60(puVar2,"../crypto/ec/ec_mult.c",0x48);
    return 0;
  }
  lVar3 = FUN_004ef780(param_1);
  if (lVar3 == 0) {
    FUN_0051f420();
    FUN_0051f540("../crypto/ec/ec_mult.c",0x353,"ossl_ec_wNAF_precompute_mult");
    FUN_0051f8f0(0x10,0x71,0);
  }
  else {
    local_88 = 0;
    if ((param_2 != 0) || (param_2 = FUN_004b2b10(), local_88 = param_2, param_2 != 0)) {
      FUN_004b2c00(param_2);
      lVar4 = FUN_004ef7e0(param_1);
      if (lVar4 == 0) {
        local_90 = 0;
        local_94 = 0;
        lVar4 = 0;
      }
      else {
        iVar1 = FUN_004b7ba0(lVar4);
        if (iVar1 == 0) {
          iVar1 = FUN_004b7bb0(lVar4);
          uVar5 = (ulong)iVar1;
          if (uVar5 < 2000) {
            local_68 = (-(ulong)(uVar5 < 800) & 0xfffffffffffffff8) + 0x10;
            bVar9 = 4 - (uVar5 < 800);
            local_60 = 5 - (ulong)(uVar5 < 800);
          }
          else {
            local_68 = 0x20;
            bVar9 = 5;
            local_60 = 6;
          }
          uVar5 = uVar5 + 7 >> 3;
          lVar6 = uVar5 << (bVar9 & 0x3f);
          plVar7 = (long *)FUN_0041ad90(lVar6 * 8 + 8,"../crypto/ec/ec_mult.c",0x37f);
          local_94 = 0;
          if (plVar7 != (long *)0x0) {
            plVar7[lVar6] = 0;
            lVar4 = 0;
            if (lVar6 != 0) {
              do {
                lVar8 = FUN_004efb90(param_1);
                plVar7[lVar4] = lVar8;
                if (lVar8 == 0) {
                  FUN_0051f420();
                  uVar10 = 0x389;
                  lVar4 = 0;
                  goto LAB_004f4668;
                }
                lVar4 = lVar4 + 1;
              } while (lVar6 != lVar4);
            }
            lVar4 = FUN_004efb90(param_1);
            if ((lVar4 == 0) || (local_90 = FUN_004efb90(param_1), local_90 == 0)) {
              FUN_0051f420();
              uVar10 = 0x390;
LAB_004f4668:
              FUN_0051f540("../crypto/ec/ec_mult.c",uVar10,"ossl_ec_wNAF_precompute_mult");
              FUN_0051f8f0(0x10,0xc0100,0);
              local_90 = 0;
            }
            else {
              iVar1 = FUN_004efec0(local_90,lVar3);
              if (iVar1 != 0) {
                if (uVar5 != 0) {
                  local_80 = 0;
                  plVar11 = plVar7;
                  do {
                    iVar1 = FUN_004f0b30(param_1,lVar4,local_90,param_2);
                    if (iVar1 == 0) goto LAB_004f468c;
                    iVar1 = FUN_004efec0(*plVar11,local_90);
                    if (iVar1 == 0) goto LAB_004f468c;
                    plVar12 = plVar11 + local_68;
                    plVar11 = plVar11 + 1;
                    do {
                      iVar1 = FUN_004f0a30(param_1,*plVar11,lVar4,plVar11[-1],param_2);
                      if (iVar1 == 0) goto LAB_004f468c;
                      plVar11 = plVar11 + 1;
                    } while (plVar12 != plVar11);
                    if (local_80 < uVar5 - 1) {
                      iVar1 = FUN_004f0b30(param_1,local_90,lVar4,param_2);
                      if (iVar1 == 0) goto LAB_004f468c;
                      lVar3 = 6;
                      do {
                        iVar1 = FUN_004f0b30(param_1,local_90,local_90,param_2);
                        if (iVar1 == 0) goto LAB_004f468c;
                        lVar3 = lVar3 + -1;
                      } while (lVar3 != 0);
                    }
                    local_80 = local_80 + 1;
                  } while (uVar5 != local_80);
                }
                if ((*(code **)(*param_1 + 0xd8) != (code *)0x0) &&
                   (iVar1 = (**(code **)(*param_1 + 0xd8))(param_1,lVar6,plVar7,param_2), iVar1 != 0
                   )) {
                  *puVar2 = param_1;
                  puVar2[4] = plVar7;
                  puVar2[2] = uVar5;
                  puVar2[1] = 8;
                  puVar2[3] = local_60;
                  puVar2[5] = lVar6;
                  local_94 = 1;
                  param_1[0x14] = (long)puVar2;
                  puVar2 = (undefined8 *)0x0;
                  *(undefined4 *)(param_1 + 0x13) = 5;
                  goto LAB_004f4711;
                }
              }
            }
LAB_004f468c:
            FUN_004b2d50(param_2);
            FUN_004b2b50(local_88);
            FUN_004f2960(puVar2);
            lVar3 = *plVar7;
            plVar11 = plVar7;
            while (lVar3 != 0) {
              FUN_004efcc0();
              plVar12 = plVar11 + 1;
              plVar11 = plVar11 + 1;
              lVar3 = *plVar12;
            }
            FUN_0041ad60(plVar7,"../crypto/ec/ec_mult.c",0x3d8);
            goto LAB_004f46da;
          }
          FUN_0051f420();
          FUN_0051f540("../crypto/ec/ec_mult.c",0x381,"ossl_ec_wNAF_precompute_mult");
          FUN_0051f8f0(0x10,0xc0100,0);
          local_90 = 0;
          lVar4 = 0;
        }
        else {
          FUN_0051f420();
          lVar4 = 0;
          FUN_0051f540("../crypto/ec/ec_mult.c",0x365,"ossl_ec_wNAF_precompute_mult");
          FUN_0051f8f0(0x10,0x72,0);
          local_94 = 0;
          local_90 = 0;
        }
      }
LAB_004f4711:
      FUN_004b2d50(param_2);
      FUN_004b2b50(local_88);
      FUN_004f2960(puVar2);
      goto LAB_004f46da;
    }
  }
  lVar4 = 0;
  FUN_004b2b50(0);
  FUN_004f2960(puVar2);
  local_94 = 0;
  local_90 = 0;
LAB_004f46da:
  FUN_004efcc0(lVar4);
  FUN_004efcc0(local_90);
  return local_94;
}

