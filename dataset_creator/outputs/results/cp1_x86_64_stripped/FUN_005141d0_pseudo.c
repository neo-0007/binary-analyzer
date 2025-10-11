
int FUN_005141d0(long param_1,long *param_2)

{
  long *plVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long lVar9;
  long lVar10;
  ulong uVar11;
  long in_FS_OFFSET;
  long local_a8;
  int local_98;
  undefined4 local_7c;
  long local_78;
  long local_70;
  long *local_68;
  undefined1 local_60 [16];
  undefined1 local_50 [16];
  long local_40;
  
  plVar1 = (long *)*param_2;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  *(byte *)(param_2 + 4) = *(byte *)(param_2 + 4) | 1;
  local_78 = 0;
  local_70 = 0;
  local_50._8_8_ = 0;
  local_50._0_8_ = param_2[3] + 1;
  local_60 = (undefined1  [16])0x0;
  local_68 = plVar1;
  if (param_1 == 0) {
    iVar2 = FUN_00513b40(plVar1);
    local_a8 = param_2[1];
    lVar6 = (long)iVar2;
    param_2[2] = lVar6;
    lVar5 = 0;
LAB_00514317:
    if (lVar6 != 0) {
      iVar2 = FUN_004abd40(local_a8,0x85,0,0);
      if ((long)iVar2 < 0) {
        FUN_0051f420();
        lVar10 = 0;
        FUN_0051f540("../crypto/encode_decode/decoder_lib.c",0x32e,"decoder_process");
        FUN_0051f8f0(0x3c,0x80020,0);
        local_98 = 0;
      }
      else {
        lVar10 = FUN_004b1490(local_a8);
        if (lVar10 == 0) {
          FUN_0051f420();
          FUN_0051f540("../crypto/encode_decode/decoder_lib.c",0x333,"decoder_process");
          FUN_0051f8f0(0x3c,0xc0100,0);
          local_98 = 0;
        }
        else {
          uVar11 = param_2[2];
          local_98 = 0;
          if (uVar11 != 0) {
            do {
              uVar11 = uVar11 - 1;
              uVar4 = FUN_004364a0(plVar1[3],uVar11 & 0xffffffff);
              lVar6 = FUN_00513cf0(uVar4);
              uVar7 = FUN_00513d10(uVar4);
              uVar8 = FUN_00513df0(uVar4);
              local_7c = 0;
              lVar9 = FUN_005141a0(uVar4,&local_7c);
              if (lVar5 == 0) {
                if ((*plVar1 == 0) || (iVar3 = FUN_0041c9c0(*plVar1,uVar8), iVar3 == 0)) {
LAB_005143a5:
                  if (((local_78 == 0) || (iVar3 = FUN_005158f0(lVar6), iVar3 != 0)) &&
                     ((local_70 == 0 ||
                      ((lVar9 != 0 && (iVar3 = FUN_0041c9c0(local_70,lVar9), iVar3 == 0)))))) {
                    if (((*(byte *)(param_2 + 4) & 4) == 0) && ((lVar9 != 0 && (plVar1[1] != 0)))) {
                      *(byte *)(param_2 + 4) = *(byte *)(param_2 + 4) | 4;
                      iVar3 = FUN_0041c9c0(lVar9);
                      if (iVar3 != 0) goto LAB_005144dd;
                    }
                    FUN_004abd40(local_a8,0x80,(long)iVar2,0);
                    iVar3 = FUN_004abd40(local_a8,0x85,0,0);
                    if (iVar2 != iVar3) break;
                    FUN_0051f000();
                    local_60._8_8_ = uVar11;
                    local_50[8] = local_50[8] & 0xfb | *(byte *)(param_2 + 4) & 4;
                    local_98 = (**(code **)(lVar6 + 0x70))
                                         (uVar7,lVar10,(int)local_68[2],FUN_005141d0,&local_68,
                                          FUN_00549e60);
                    *(byte *)(param_2 + 4) = *(byte *)(param_2 + 4) & 0xfd | local_50[8] & 2;
                    if ((local_98 == 0) ||
                       ((local_50 & (undefined1  [16])0x2) != (undefined1  [16])0x0)) {
                      FUN_0051f1a0();
                      break;
                    }
                    FUN_0051f050();
                    if ((local_50 & (undefined1  [16])0x1) != (undefined1  [16])0x0) break;
                  }
                }
              }
              else {
                iVar3 = FUN_005158f0(lVar5,uVar8);
                if (iVar3 != 0) goto LAB_005143a5;
              }
LAB_005144dd:
            } while (uVar11 != 0);
          }
        }
      }
      goto LAB_005142ab;
    }
LAB_005142a0:
    local_98 = 0;
  }
  else {
    uVar4 = FUN_004364a0(plVar1[3],(int)param_2[2]);
    lVar5 = FUN_00513cf0(uVar4);
    *(byte *)(param_2 + 4) = *(byte *)(param_2 + 4) & 0xfd;
    if ((code *)plVar1[4] != (code *)0x0) {
      iVar2 = (*(code *)plVar1[4])(uVar4,param_1,plVar1[6]);
      *(byte *)(param_2 + 4) = *(byte *)(param_2 + 4) | 2;
      if (0 < iVar2) {
        local_98 = 1;
        lVar10 = 0;
        goto LAB_005142ab;
      }
    }
    lVar6 = thunk_FUN_0041cdd0(param_1,"data");
    if (lVar6 == 0) {
      local_98 = 0;
      lVar10 = 0;
      goto LAB_005142ab;
    }
    if (*(int *)(lVar6 + 8) != 5) goto LAB_005142a0;
    lVar10 = FUN_005c0c20(*(undefined8 *)(lVar6 + 0x10),*(undefined4 *)(lVar6 + 0x18));
    local_98 = 0;
    local_60._0_8_ = lVar10;
    if (lVar10 == 0) goto LAB_005142ab;
    lVar6 = thunk_FUN_0041cdd0(param_1,"data-type");
    if (((lVar6 == 0) || (local_98 = FUN_0041e4a0(lVar6,&local_78), local_98 != 0)) &&
       ((lVar6 = thunk_FUN_0041cdd0(param_1,"data-structure"), lVar6 == 0 ||
        (local_98 = FUN_0041e4a0(lVar6,&local_70), local_98 != 0)))) {
      if (((local_78 != 0) && (local_70 != 0)) &&
         (iVar2 = FUN_0041c9c0(local_70,"type-specific"), iVar2 == 0)) {
        local_70 = 0;
      }
      lVar6 = param_2[2];
      local_a8 = lVar10;
      goto LAB_00514317;
    }
  }
  lVar10 = 0;
LAB_005142ab:
  FUN_004b1410(lVar10);
  FUN_004ab560(local_60._0_8_);
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    FUN_00771f60();
  }
  return local_98;
}

