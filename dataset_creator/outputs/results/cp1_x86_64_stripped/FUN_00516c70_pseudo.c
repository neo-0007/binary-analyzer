
int FUN_00516c70(long *param_1)

{
  bool bVar1;
  int iVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined1 (*pauVar8) [16];
  undefined8 *puVar9;
  long lVar10;
  int iVar11;
  undefined8 *puVar12;
  long in_FS_OFFSET;
  bool bVar13;
  undefined1 auVar14 [16];
  undefined8 local_278;
  long local_270;
  undefined8 local_268;
  undefined8 local_258;
  undefined8 uStack_250;
  undefined8 local_248;
  undefined8 uStack_240;
  undefined8 local_238;
  undefined1 (*local_228) [16];
  undefined1 local_220 [16];
  undefined1 local_210 [16];
  undefined1 local_200 [16];
  undefined1 local_1f0 [16];
  undefined8 local_1d8;
  undefined8 uStack_1d0;
  undefined8 local_1c8;
  undefined8 uStack_1c0;
  undefined8 local_1b8;
  undefined8 local_1b0;
  undefined8 uStack_1a8;
  undefined8 local_1a0;
  undefined8 uStack_198;
  undefined8 local_190;
  undefined8 local_188 [41];
  long local_40;
  
  bVar1 = false;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_1[3] == 0) {
    bVar1 = true;
    *(uint *)(param_1 + 4) = -(uint)(*(long *)(*param_1 + 0x10) == 0);
    iVar11 = (int)param_1[2] + -1;
    if ((int)param_1[2] < 1) goto LAB_005170cb;
LAB_00516dbf:
    do {
      local_278 = 0;
      if (!bVar1) {
        local_278 = FUN_00516bf0(param_1[3]);
      }
      lVar3 = FUN_004364a0(*(undefined8 *)(*param_1 + 0x18),iVar11);
      local_270 = FUN_00516bf0(lVar3);
      local_268 = FUN_00516c10(lVar3);
      uVar4 = FUN_00516c30(lVar3);
      lVar5 = FUN_00516c50(lVar3);
      pauVar8 = (undefined1 (*) [16])*param_1;
      local_200 = (undefined1  [16])0x0;
      local_1f0 = (undefined1  [16])0x0;
      local_210._8_4_ = (int)param_1[4];
      local_210._0_8_ = lVar3;
      local_210._12_4_ = 0;
      local_220._4_4_ = *(int *)((long)param_1 + 0x14) + 1;
      local_220._0_4_ = iVar11;
      local_220._8_8_ = 0;
      local_220 = local_220 << 0x40;
      local_228 = pauVar8;
      if (bVar1) {
        if (*(long *)(*pauVar8 + 8) != 0) {
          iVar2 = FUN_0041c9c0(uVar4);
          if (iVar2 != 0) goto LAB_00516db5;
          pauVar8 = (undefined1 (*) [16])*param_1;
        }
LAB_00516d67:
        if ((*(long *)pauVar8[1] != 0) && (lVar5 != 0)) {
          iVar2 = FUN_0041c9c0(*(long *)pauVar8[1],lVar5);
          if (iVar2 != 0) goto LAB_00516db5;
          *(int *)(param_1 + 4) = (int)param_1[4] + 1;
        }
        iVar2 = FUN_00516c70(&local_228);
        param_1[6] = local_200._8_8_;
        param_1[5] = local_200._0_8_;
        param_1[7] = local_1f0._0_8_;
        if (iVar2 != 0) {
          if (-1 < iVar11) {
            if (iVar2 == -1) goto LAB_005170e4;
            if (iVar2 != 1) {
              lVar5 = 0;
              goto LAB_00516e30;
            }
            if (param_1[6] == 0) {
              FUN_0051f420();
              iVar11 = 0;
              FUN_0051f540("../crypto/encode_decode/encoder_lib.c",0x246,"encoder_process");
              FUN_0051f8f0(0x3b,0xc0103,0);
              goto LAB_0051712d;
            }
            lVar5 = FUN_00516c50();
            puVar9 = &local_1b0;
            FUN_0041e290(&local_258,"data-type",param_1[8],0);
            local_1d8 = local_258;
            uStack_1d0 = uStack_250;
            local_1b8 = local_238;
            local_1c8 = local_248;
            uStack_1c0 = uStack_240;
            if (lVar5 != 0) {
              FUN_0041e290(&local_258,"data-structure",lVar5,0);
              puVar9 = local_188;
              local_1b0 = local_258;
              uStack_1a8 = uStack_250;
              local_190 = local_238;
              local_1a0 = local_248;
              uStack_198 = uStack_240;
            }
            FUN_0041e2e0(&local_258,"data",param_1[6],param_1[7]);
            puVar12 = &local_1d8;
            *puVar9 = local_258;
            puVar9[1] = uStack_250;
            puVar9[2] = local_248;
            puVar9[3] = uStack_240;
            puVar9[4] = local_238;
            FUN_0041e470(&local_258);
            puVar9[5] = local_258;
            puVar9[6] = uStack_250;
            puVar9[7] = local_248;
            puVar9[8] = uStack_240;
            puVar9[9] = local_238;
            lVar5 = 0;
            goto joined_r0x0051700b;
          }
          break;
        }
      }
      else {
        iVar2 = FUN_00518200(local_278,uVar4);
        if (iVar2 != 0) {
          pauVar8 = (undefined1 (*) [16])*param_1;
          goto LAB_00516d67;
        }
      }
LAB_00516db5:
      bVar13 = iVar11 != 0;
      iVar11 = iVar11 + -1;
    } while (bVar13);
LAB_00517120:
    iVar11 = -1;
  }
  else {
    iVar11 = (int)param_1[2] + -1;
    if (0 < (int)param_1[2]) goto LAB_00516dbf;
LAB_005170cb:
    if (iVar11 < 0) goto LAB_00517120;
    local_270 = 0;
    lVar3 = 0;
    local_268 = 0;
LAB_005170e4:
    iVar11 = (int)param_1[4];
    if (iVar11 == 0) goto LAB_00516ec8;
    iVar11 = 0;
    lVar5 = (**(code **)(*param_1 + 0x20))(lVar3,*(undefined8 *)(*param_1 + 0x30));
    lVar7 = FUN_005181e0(local_270);
    param_1[8] = lVar7;
    if (lVar5 != 0) {
LAB_00516e30:
      puVar12 = (undefined8 *)0x0;
joined_r0x0051700b:
      if (bVar1) {
        lVar10 = param_1[1];
        lVar6 = FUN_004b1490();
        lVar7 = lVar6;
        if (lVar6 == 0) {
LAB_005171f8:
          iVar11 = 0;
          FUN_004b1410(0);
          param_1[5] = lVar3;
          FUN_0041ad60(param_1[6],"../crypto/encode_decode/encoder_lib.c",0x28e);
          param_1[6] = 0;
        }
        else {
          iVar11 = (**(code **)(local_270 + 0x70))
                             (local_268,lVar6,lVar5,puVar12,*(undefined4 *)*param_1,&LAB_00549e40,
                              (undefined4 *)*param_1 + 0xe,lVar10);
          lVar7 = 0;
          FUN_004b1410(lVar6);
          param_1[5] = lVar3;
          FUN_0041ad60(param_1[6],"../crypto/encode_decode/encoder_lib.c",0x28e);
          param_1[6] = 0;
        }
      }
      else {
        uVar4 = FUN_005c0c00();
        lVar7 = FUN_004ab550(uVar4);
        if (lVar7 == 0) goto LAB_005171f8;
        auVar14 = FUN_004b1490(lVar7);
        lVar10 = auVar14._0_8_;
        if (lVar10 == 0) {
          iVar11 = 0;
          FUN_004b1410(0);
          param_1[5] = lVar3;
          FUN_0041ad60(param_1[6],"../crypto/encode_decode/encoder_lib.c",0x28e);
          param_1[6] = 0;
        }
        else {
          iVar11 = (**(code **)(local_270 + 0x70))
                             (local_268,lVar10,lVar5,puVar12,*(undefined4 *)*param_1,&LAB_00549e40,
                              (undefined4 *)*param_1 + 0xe,auVar14._8_8_);
          FUN_004b1410(lVar10);
          param_1[5] = lVar3;
          FUN_0041ad60(param_1[6],"../crypto/encode_decode/encoder_lib.c",0x28e);
          param_1[6] = 0;
        }
        FUN_004abd40(lVar7,0x73,0,&local_228);
        param_1[6] = *(long *)(*local_228 + 8);
        param_1[7] = *(long *)*local_228;
        *local_228 = (undefined1  [16])0x0;
        local_228[1] = (undefined1  [16])0x0;
      }
      FUN_004ab560(lVar7);
      if (lVar5 != 0) {
        (**(code **)(*param_1 + 0x28))(*(undefined8 *)(*param_1 + 0x30));
      }
      goto LAB_00516ec8;
    }
  }
LAB_0051712d:
  FUN_0041ad60(param_1[6],"../crypto/encode_decode/encoder_lib.c",0x28e);
  param_1[6] = 0;
  FUN_004ab560(0);
LAB_00516ec8:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return iVar11;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00771f60();
}

