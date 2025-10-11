
ulong FUN_005c1cc0(undefined8 param_1,long param_2,undefined8 param_3,long param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,long param_8)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  long lVar11;
  long lVar12;
  ulong uVar13;
  long *plVar14;
  int iVar15;
  int iVar16;
  long in_FS_OFFSET;
  bool bVar17;
  long local_298;
  int local_28c;
  long local_288;
  int local_260;
  long local_248 [32];
  long local_148 [33];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  iVar2 = FUN_004b7d40(param_6);
  if (iVar2 == 0) {
    FUN_0051f420();
    FUN_0051f540("../crypto/bn/bn_exp2.c",0x24,"BN_mod_exp2_mont");
    FUN_0051f8f0(3,0x66,0);
    uVar4 = 0;
  }
  else {
    local_28c = FUN_004b7bb0(param_3);
    iVar2 = FUN_004b7bb0(param_5);
    if (iVar2 == 0 && local_28c == 0) {
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        uVar13 = FUN_004b8190(param_1,1);
        return uVar13;
      }
      goto LAB_005c256b;
    }
    FUN_004b2c00(param_7);
    uVar9 = FUN_004b2df0(param_7);
    uVar10 = FUN_004b2df0(param_7);
    lVar11 = FUN_004b2df0(param_7);
    local_248[0] = lVar11;
    lVar12 = FUN_004b2df0(param_7);
    local_148[0] = lVar12;
    if (lVar12 == 0) {
      local_288 = 0;
      uVar4 = 0;
      goto LAB_005c2220;
    }
    local_288 = param_8;
    if (param_8 == 0) {
      local_288 = FUN_004b9790();
      if (local_288 == 0) {
        uVar4 = 0;
      }
      else {
        iVar3 = FUN_004b9860(local_288,param_6,param_7);
        if (iVar3 != 0) goto LAB_005c1da8;
        uVar4 = 0;
      }
LAB_005c22fa:
      FUN_004b9810(local_288);
    }
    else {
LAB_005c1da8:
      local_260 = 6;
      if (((local_28c < 0x2a0) && (local_260 = 5, local_28c < 0xf0)) &&
         (local_260 = 4, local_28c < 0x50)) {
        local_260 = (0x17 < local_28c) + 1 + (uint)(0x17 < local_28c);
      }
      iVar3 = 6;
      if (((iVar2 < 0x2a0) && (iVar3 = 5, iVar2 < 0xf0)) && (iVar3 = 4, iVar2 < 0x50)) {
        iVar3 = (0x17 < iVar2) + 1 + (uint)(0x17 < iVar2);
      }
      if (((*(int *)(param_2 + 0x10) == 0) && (iVar5 = FUN_004b77f0(param_2,param_6), iVar5 < 0)) ||
         (uVar4 = FUN_004b34a0(0,lVar11,param_2,param_6,param_7), param_2 = lVar11, uVar4 != 0)) {
        iVar5 = FUN_004b7ba0(param_2);
        if (iVar5 == 0) {
          uVar4 = FUN_004b7d70(lVar11,param_2,local_288,param_7);
          if (uVar4 != 0) {
            if (local_260 != 1) {
              uVar4 = FUN_004b9650(uVar9,lVar11,lVar11,local_288,param_7);
              if (uVar4 == 0) goto LAB_005c2220;
              plVar14 = local_248;
              do {
                lVar11 = FUN_004b2df0(param_7);
                plVar14[1] = lVar11;
                if (lVar11 == 0) goto LAB_005c23f0;
                uVar4 = FUN_004b9650(lVar11,*plVar14,uVar9,local_288);
                if (uVar4 == 0) goto LAB_005c2220;
                plVar14 = plVar14 + 1;
              } while (plVar14 != local_248 + (ulong)((1 << ((char)local_260 - 1U & 0x1f)) - 2) + 1)
              ;
            }
            if (((*(int *)(param_4 + 0x10) == 0) &&
                (iVar5 = FUN_004b77f0(param_4,param_6), local_298 = param_4, iVar5 < 0)) ||
               (uVar4 = FUN_004b34a0(0,lVar12,param_4,param_6,param_7), local_298 = lVar12,
               uVar4 != 0)) {
              iVar5 = FUN_004b7ba0(local_298);
              if (iVar5 != 0) goto LAB_005c2210;
              uVar4 = FUN_004b7d70(lVar12,local_298,local_288,param_7);
              if (uVar4 != 0) {
                if (iVar3 != 1) {
                  uVar4 = FUN_004b9650(uVar9,lVar12,lVar12,local_288,param_7);
                  if (uVar4 == 0) goto LAB_005c2220;
                  plVar14 = local_148;
                  do {
                    lVar11 = FUN_004b2df0(param_7);
                    plVar14[1] = lVar11;
                    if (lVar11 == 0) goto LAB_005c23f0;
                    uVar4 = FUN_004b9650(lVar11,*plVar14,uVar9,local_288);
                    if (uVar4 == 0) goto LAB_005c2220;
                    plVar14 = plVar14 + 1;
                  } while (local_148 + (ulong)((1 << ((char)iVar3 - 1U & 0x1f)) - 2) + 1 != plVar14)
                  ;
                }
                uVar9 = FUN_004b75a0();
                uVar4 = FUN_004b7d70(uVar10,uVar9,local_288,param_7);
                if (uVar4 != 0) {
                  if (local_28c < iVar2) {
                    local_28c = iVar2;
                  }
                  iVar2 = local_28c + -1;
                  if (-1 < iVar2) {
                    local_28c = local_28c + -2;
                    iVar5 = 0;
                    iVar7 = 0;
                    iVar16 = 0;
                    bVar1 = true;
                    iVar6 = 0;
                    do {
                      bVar17 = true;
                      if (iVar5 == 0) {
                        iVar5 = FUN_004b78f0(param_3,iVar2);
                        if (iVar5 != 0) {
                          iVar16 = (1 - local_260) + iVar2;
                          while (iVar5 = FUN_004b78f0(param_3,iVar16), iVar5 == 0) {
                            iVar16 = iVar16 + 1;
                          }
                          if (local_28c < iVar16) {
                            bVar17 = true;
                            iVar5 = 1;
                          }
                          else {
                            iVar5 = 1;
                            iVar15 = local_28c;
                            do {
                              iVar8 = FUN_004b78f0(param_3,iVar15);
                              iVar5 = (iVar5 * 2 + 1) - (uint)(iVar8 == 0);
                              iVar15 = iVar15 + -1;
                            } while (iVar16 <= iVar15);
                            bVar17 = iVar5 != 0;
                          }
                          goto LAB_005c20d0;
                        }
                        iVar5 = 0;
                        if (iVar7 == 0) {
                          iVar5 = FUN_004b78f0(param_5,iVar2);
                          if (iVar5 == 0) {
                            iVar5 = 0;
                            goto LAB_005c21b0;
                          }
                          iVar5 = 0;
                          bVar17 = false;
                          goto LAB_005c2490;
                        }
LAB_005c20f4:
                        if (iVar2 == iVar6) {
                          uVar4 = FUN_004b9650(uVar10,uVar10,local_148[iVar7 >> 1],local_288,param_7
                                              );
                          if (uVar4 == 0) goto LAB_005c2220;
                          if (iVar2 != 0) {
                            iVar7 = 0;
                            goto LAB_005c2135;
                          }
                          break;
                        }
LAB_005c21b0:
                        if (iVar2 == 0) break;
                        if (!bVar1) goto LAB_005c2135;
                      }
                      else {
LAB_005c20d0:
                        bVar17 = (bool)(iVar16 == iVar2 & bVar17);
                        if (iVar7 != 0) {
LAB_005c20e2:
                          if (bVar17) {
                            uVar4 = FUN_004b9650(uVar10,uVar10,local_248[iVar5 >> 1],local_288,
                                                 param_7);
                            if (uVar4 == 0) goto LAB_005c2220;
                            bVar1 = false;
                            iVar5 = 0;
                          }
                          if (iVar7 != 0) goto LAB_005c20f4;
                          goto LAB_005c21b0;
                        }
                        iVar7 = FUN_004b78f0(param_5,iVar2);
                        if (iVar7 != 0) {
LAB_005c2490:
                          iVar6 = (1 - iVar3) + iVar2;
                          while (iVar7 = FUN_004b78f0(param_5,iVar6), iVar7 == 0) {
                            iVar6 = iVar6 + 1;
                          }
                          iVar7 = 1;
                          if (iVar6 <= local_28c) {
                            iVar7 = 1;
                            iVar15 = local_28c;
                            do {
                              iVar8 = FUN_004b78f0(param_5,iVar15);
                              iVar7 = (iVar7 * 2 + 1) - (uint)(iVar8 == 0);
                              iVar15 = iVar15 + -1;
                            } while (iVar6 <= iVar15);
                          }
                          goto LAB_005c20e2;
                        }
                        iVar7 = 0;
                        if (!bVar17) goto LAB_005c21b0;
                        uVar4 = FUN_004b9650(uVar10,uVar10,local_248[iVar5 >> 1],local_288,param_7);
                        if (uVar4 == 0) goto LAB_005c2220;
                        if (iVar2 == 0) break;
                        iVar5 = 0;
LAB_005c2135:
                        uVar4 = FUN_004b9650(uVar10,uVar10,uVar10,local_288,param_7);
                        if (uVar4 == 0) goto LAB_005c2220;
                        bVar1 = false;
                      }
                      iVar2 = iVar2 + -1;
                      local_28c = local_28c + -1;
                    } while( true );
                  }
                  iVar2 = FUN_004b96f0(param_1,uVar10,local_288,param_7);
                  uVar4 = (uint)(iVar2 != 0);
                }
              }
            }
          }
        }
        else {
LAB_005c2210:
          FUN_004b7b50(param_1);
          uVar4 = 1;
        }
      }
LAB_005c2220:
      if (param_8 == 0) goto LAB_005c22fa;
    }
    FUN_004b2d50(param_7);
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return (ulong)uVar4;
  }
LAB_005c256b:
                    /* WARNING: Subroutine does not return */
  FUN_00771f60();
LAB_005c23f0:
  uVar4 = 0;
  goto LAB_005c2220;
}

