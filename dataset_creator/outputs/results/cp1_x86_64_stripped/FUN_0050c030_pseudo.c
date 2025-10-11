
int FUN_0050c030(long *param_1,long param_2)

{
  long lVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  undefined8 *puVar5;
  long lVar6;
  long lVar7;
  long in_FS_OFFSET;
  long local_d0;
  long local_c8;
  ulong local_c0;
  int local_b4;
  undefined1 local_88 [32];
  undefined1 local_68 [40];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_004ef690();
  lVar4 = FUN_004ef780(param_1);
  if (lVar4 == 0) {
    FUN_0051f420();
    iVar2 = 0;
    FUN_0051f540("../crypto/ec/ecp_nistz256.c",0x344,"ecp_nistz256_mult_precompute");
    FUN_0051f8f0(0x10,0x71,0);
  }
  else {
    iVar2 = FUN_0050aa70(lVar4);
    if (iVar2 == 0) {
      iVar2 = 0;
      if (param_1 != (long *)0x0) {
        puVar5 = (undefined8 *)FUN_0041aec0(0x30,"../crypto/ec/ecp_nistz256.c",0x4ca);
        if (puVar5 == (undefined8 *)0x0) {
          FUN_0051f420();
          FUN_0051f540("../crypto/ec/ecp_nistz256.c",0x4cd,"ecp_nistz256_pre_comp_new");
          FUN_0051f8f0(0x10,0xc0100,0);
        }
        else {
          *puVar5 = param_1;
          puVar5[1] = 6;
          LOCK();
          *(undefined4 *)(puVar5 + 4) = 1;
          UNLOCK();
          lVar6 = FUN_00422240();
          puVar5[5] = lVar6;
          if (lVar6 == 0) {
            FUN_0051f420();
            FUN_0051f540("../crypto/ec/ecp_nistz256.c",0x4d7,"ecp_nistz256_pre_comp_new");
            FUN_0051f8f0(0x10,0xc0100,0);
            FUN_0041ad60(puVar5,"../crypto/ec/ecp_nistz256.c",0x4d8);
          }
          else {
            local_d0 = 0;
            lVar6 = local_d0;
            if ((param_2 == 0) &&
               (param_2 = FUN_004b2a70(param_1[0x15]), lVar6 = param_2, param_2 == 0)) {
              local_c0 = 0;
              lVar6 = 0;
              local_c8 = 0;
            }
            else {
              local_d0 = lVar6;
              FUN_004b2c00(param_2);
              lVar6 = FUN_004ef7e0(param_1);
              if (lVar6 == 0) {
                local_c0 = 0;
                local_c8 = 0;
                lVar6 = 0;
              }
              else {
                iVar3 = FUN_004b7ba0(lVar6);
                if (iVar3 == 0) {
                  local_c0 = FUN_0041ad90(0x25040,"../crypto/ec/ecp_nistz256.c",0x367);
                  if (local_c0 == 0) {
                    FUN_0051f420();
                    iVar2 = 0;
                    lVar6 = 0;
                    FUN_0051f540("../crypto/ec/ecp_nistz256.c",0x368,"ecp_nistz256_mult_precompute")
                    ;
                    FUN_0051f8f0(0x10,0xc0100,0);
                    local_c8 = 0;
                  }
                  else {
                    lVar6 = FUN_004efb90(param_1);
                    local_c8 = FUN_004efb90(param_1);
                    if ((lVar6 == 0) || (local_c8 == 0)) {
LAB_0050c445:
                      iVar2 = 0;
                    }
                    else {
                      iVar2 = FUN_004efec0(local_c8,lVar4);
                      if (iVar2 != 0) {
                        local_b4 = 0;
                        lVar1 = (local_c0 & 0xffffffffffffffc0) + 0x40;
                        do {
                          iVar2 = FUN_004efec0(lVar6,local_c8);
                          lVar7 = lVar1;
                          if (iVar2 == 0) goto LAB_0050c375;
                          do {
                            if ((*(code **)(*param_1 + 0xd0) == (code *)0x0) ||
                               (iVar2 = (**(code **)(*param_1 + 0xd0))(param_1,lVar6,param_2),
                               iVar2 == 0)) goto LAB_0050c445;
                            iVar2 = FUN_004b73e0(local_88,*(undefined8 *)(lVar6 + 0x10),4);
                            if ((iVar2 == 0) ||
                               (iVar2 = FUN_004b73e0(local_68,*(undefined8 *)(lVar6 + 0x18),4),
                               iVar2 == 0)) {
                              FUN_0051f420();
                              FUN_0051f540("../crypto/ec/ecp_nistz256.c",0x388,
                                           "ecp_nistz256_mult_precompute");
                              FUN_0051f8f0(0x10,0x92,0);
                              goto LAB_0050c445;
                            }
                            iVar2 = 7;
                            FUN_005f7d60(lVar7,local_88,local_b4);
                            do {
                              iVar3 = FUN_004f0b30(param_1,lVar6,lVar6,param_2);
                              if (iVar3 == 0) goto LAB_0050c445;
                              iVar2 = iVar2 + -1;
                            } while (iVar2 != 0);
                            lVar7 = lVar7 + 0x1000;
                          } while (lVar7 != (local_c0 & 0xffffffffffffffc0) + 0x25040);
                          iVar2 = FUN_004f0a30(param_1,local_c8,local_c8,lVar4,param_2);
                          if (iVar2 == 0) goto LAB_0050c375;
                          local_b4 = local_b4 + 1;
                        } while (local_b4 != 0x40);
                        iVar2 = 1;
                        puVar5[2] = lVar1;
                        *puVar5 = param_1;
                        puVar5[1] = 7;
                        puVar5[3] = local_c0;
                        local_c0 = 0;
                        param_1[0x14] = (long)puVar5;
                        puVar5 = (undefined8 *)0x0;
                        *(undefined4 *)(param_1 + 0x13) = 4;
                      }
                    }
                  }
                }
                else {
                  FUN_0051f420();
                  lVar6 = 0;
                  FUN_0051f540("../crypto/ec/ecp_nistz256.c",0x360,"ecp_nistz256_mult_precompute");
                  FUN_0051f8f0(0x10,0x72,0);
                  local_c0 = 0;
                  local_c8 = 0;
                }
              }
            }
LAB_0050c375:
            FUN_004b2d50(param_2);
            FUN_004b2b50(local_d0);
            FUN_0050bfb0(puVar5);
            FUN_0041ad60(local_c0,"../crypto/ec/ecp_nistz256.c",0x3a3);
            FUN_004efcc0(lVar6);
            FUN_004efcc0(local_c8);
          }
        }
      }
    }
    else {
      iVar2 = 1;
    }
  }
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    FUN_00771f60();
  }
  return iVar2;
}

