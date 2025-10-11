
bool FUN_00518ee0(undefined8 *param_1,undefined4 param_2,ulong param_3,char *param_4)

{
  int iVar1;
  int iVar2;
  long *plVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  long *plVar7;
  code *pcVar8;
  ulong uVar9;
  long in_FS_OFFSET;
  bool bVar10;
  undefined8 local_148;
  undefined1 local_140 [8];
  undefined1 local_138 [8];
  undefined1 local_130 [8];
  undefined8 local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (DAT_0093bf38 < 0) {
    iVar2 = FUN_00419290(10,0,0,0,0,FUN_00518e60);
    if (iVar2 == -1) {
      FUN_0051f420();
      FUN_0051f540("../crypto/engine/eng_dyn.c",0xd7,"dynamic_get_data_ctx");
      FUN_0051f8f0(0x26,0x90,0);
    }
    else {
      iVar1 = FUN_004222c0(DAT_00941008);
      if (iVar1 != 0) {
        if (DAT_0093bf38 < 0) {
          DAT_0093bf38 = iVar2;
          FUN_004222e0(DAT_00941008);
        }
        else {
          FUN_004222e0(DAT_00941008);
        }
        plVar3 = (long *)FUN_0051a770(param_1,DAT_0093bf38);
        if (plVar3 == (long *)0x0) goto LAB_00518fcd;
        goto LAB_00518f31;
      }
    }
LAB_00519367:
    FUN_0051f420();
    bVar10 = false;
    FUN_0051f540("../crypto/engine/eng_dyn.c",0x12f,"dynamic_ctrl");
    FUN_0051f8f0(0x26,0x70,0);
    goto LAB_00519093;
  }
  plVar3 = (long *)FUN_0051a770(param_1);
  if (plVar3 != (long *)0x0) goto LAB_00518f31;
LAB_00518fcd:
  plVar3 = (long *)FUN_0041aec0(0x58,"../crypto/engine/eng_dyn.c",0x9f);
  if (plVar3 == (long *)0x0) {
    FUN_0051f420();
    FUN_0051f540("../crypto/engine/eng_dyn.c",0xa3,"dynamic_set_data_ctx");
    FUN_0051f8f0(0x26,0xc0100,0);
    goto LAB_00519367;
  }
  lVar4 = FUN_00436410();
  plVar3[10] = lVar4;
  if (lVar4 == 0) {
    FUN_0051f420();
    FUN_0051f540("../crypto/engine/eng_dyn.c",0xa8,"dynamic_set_data_ctx");
    FUN_0051f8f0(0x26,0xc0100,0);
LAB_0051904a:
    lVar4 = plVar3[10];
LAB_005194e7:
    FUN_004360b0(lVar4);
    FUN_0041ad60(plVar3,"../crypto/engine/eng_dyn.c",0xc3);
    goto LAB_00519367;
  }
  *(undefined4 *)(plVar3 + 9) = 1;
  plVar3[7] = (long)"v_check";
  plVar3[8] = (long)"bind_engine";
  iVar2 = FUN_004222c0(DAT_00941008);
  if (iVar2 == 0) goto LAB_0051904a;
  plVar7 = (long *)FUN_0051a770(param_1,DAT_0093bf38);
  if (plVar7 == (long *)0x0) {
    iVar2 = FUN_0051a760(param_1,DAT_0093bf38,plVar3);
    if (iVar2 != 0) {
      FUN_004222e0(DAT_00941008);
      FUN_0041ad60(0,"../crypto/engine/eng_dyn.c",0xc3);
      goto LAB_00518f31;
    }
    FUN_004222e0(DAT_00941008);
    lVar4 = plVar3[10];
    goto LAB_005194e7;
  }
  FUN_004222e0(DAT_00941008);
  FUN_004360b0(plVar3[10]);
  FUN_0041ad60(plVar3,"../crypto/engine/eng_dyn.c",0xc3);
  plVar3 = plVar7;
LAB_00518f31:
  if (*plVar3 != 0) {
    FUN_0051f420();
    bVar10 = false;
    FUN_0051f540("../crypto/engine/eng_dyn.c",0x135,"dynamic_ctrl");
    FUN_0051f8f0(0x26,100,0);
    goto LAB_00519093;
  }
  switch(param_2) {
  case 200:
    if ((param_4 == (char *)0x0) || (*param_4 == '\0')) {
      bVar10 = false;
      FUN_0041ad60(plVar3[3],"../crypto/engine/eng_dyn.c",0x13d);
      lVar4 = 0;
    }
    else {
      FUN_0041ad60(plVar3[3],"../crypto/engine/eng_dyn.c",0x13d);
      lVar4 = FUN_0041c2c0(param_4,"../crypto/engine/eng_dyn.c",0x13f);
      bVar10 = lVar4 != 0;
    }
    plVar3[3] = lVar4;
    break;
  case 0xc9:
    bVar10 = true;
    *(uint *)(plVar3 + 4) = (uint)(param_3 != 0);
    break;
  case 0xca:
    if ((param_4 == (char *)0x0) || (*param_4 == '\0')) {
      bVar10 = false;
      FUN_0041ad60(plVar3[5],"../crypto/engine/eng_dyn.c",0x14a);
      lVar4 = 0;
    }
    else {
      FUN_0041ad60(plVar3[5],"../crypto/engine/eng_dyn.c",0x14a);
      lVar4 = FUN_0041c2c0(param_4,"../crypto/engine/eng_dyn.c",0x14c);
      bVar10 = lVar4 != 0;
    }
    plVar3[5] = lVar4;
    break;
  case 0xcb:
    if (param_3 < 3) {
      *(int *)(plVar3 + 6) = (int)param_3;
      bVar10 = true;
      break;
    }
    FUN_0051f420();
    uVar5 = 0x152;
    goto LAB_005192f9;
  case 0xcc:
    if (param_3 < 3) {
      *(int *)(plVar3 + 9) = (int)param_3;
      bVar10 = true;
      break;
    }
    FUN_0051f420();
    uVar5 = 0x15b;
    goto LAB_005192f9;
  case 0xcd:
    if ((param_4 != (char *)0x0) && (*param_4 != '\0')) {
      lVar4 = FUN_0041c2c0(param_4,"../crypto/engine/eng_dyn.c",0x167);
      if (lVar4 == 0) {
        FUN_0051f420();
        bVar10 = false;
        FUN_0051f540("../crypto/engine/eng_dyn.c",0x169,"dynamic_ctrl");
        FUN_0051f8f0(0x26,0xc0100,0);
        break;
      }
      iVar2 = FUN_00435f80(plVar3[10],lVar4);
      if (iVar2 == 0) {
        FUN_0041ad60(lVar4,"../crypto/engine/eng_dyn.c",0x16d);
        FUN_0051f420();
        FUN_0051f540("../crypto/engine/eng_dyn.c",0x16e,"dynamic_ctrl");
        FUN_0051f8f0(0x26,0xc0100,0);
        bVar10 = false;
        break;
      }
LAB_0051943a:
      bVar10 = true;
      break;
    }
    FUN_0051f420();
    uVar5 = 0x163;
LAB_005192f9:
    bVar10 = false;
    FUN_0051f540("../crypto/engine/eng_dyn.c",uVar5,"dynamic_ctrl");
    FUN_0051f8f0(0x26,0x8f,0);
    break;
  case 0xce:
    lVar4 = thunk_FUN_004dabe0();
    *plVar3 = lVar4;
    if (lVar4 != 0) {
      if (plVar3[3] == 0) {
        bVar10 = false;
        if (plVar3[5] == 0) break;
        FUN_004daeb0(lVar4,2,2,0);
        lVar4 = FUN_004db3d0(*plVar3,plVar3[5]);
        plVar3[3] = lVar4;
      }
      if ((int)plVar3[9] == 2) {
LAB_00519107:
        iVar1 = 0;
        iVar2 = FUN_00436480(plVar3[10]);
        if (0 < iVar2) {
          do {
            uVar5 = FUN_004364a0(plVar3[10],iVar1);
            lVar4 = FUN_004db360(*plVar3,plVar3[3],uVar5);
            if (lVar4 == 0) break;
            lVar6 = FUN_004db100(*plVar3,lVar4,0,0);
            if (lVar6 != 0) {
              FUN_0041ad60(lVar4,"../crypto/engine/eng_dyn.c",0x18c);
              goto LAB_005195a5;
            }
            iVar1 = iVar1 + 1;
            FUN_0041ad60(lVar4,"../crypto/engine/eng_dyn.c",399);
          } while (iVar2 != iVar1);
        }
      }
      else {
        lVar4 = FUN_004db100(*plVar3,plVar3[3],0,0);
        if (lVar4 != 0) {
LAB_005195a5:
          lVar4 = FUN_004dadd0(*plVar3,plVar3[8]);
          plVar3[2] = lVar4;
          if (lVar4 == 0) {
            bVar10 = false;
            FUN_004daaa0(*plVar3);
            *plVar3 = 0;
            FUN_0051f420();
            FUN_0051f540("../crypto/engine/eng_dyn.c",0x1b3,"dynamic_load");
            FUN_0051f8f0(0x26,0x68,0);
            break;
          }
          if ((int)plVar3[4] == 0) {
            pcVar8 = (code *)FUN_004dadd0(*plVar3,plVar3[7]);
            plVar3[1] = (long)pcVar8;
            if (((pcVar8 == (code *)0x0) || (uVar9 = (*pcVar8)(0x30000), uVar9 < 0x30000)) ||
               (lVar4 = FUN_004dadd0(*plVar3,"EVP_PKEY_base_id"), lVar4 != 0)) {
              plVar3[2] = 0;
              plVar3[1] = 0;
              FUN_004daaa0(*plVar3);
              *plVar3 = 0;
              FUN_0051f420();
              FUN_0051f540("../crypto/engine/eng_dyn.c",0x1d6,"dynamic_load");
              FUN_0051f8f0(0x26,0x91,0);
              bVar10 = false;
              break;
            }
          }
          local_128 = *param_1;
          uStack_120 = param_1[1];
          local_118 = param_1[2];
          uStack_110 = param_1[3];
          local_108 = param_1[4];
          uStack_100 = param_1[5];
          local_f8 = param_1[6];
          uStack_f0 = param_1[7];
          local_e8 = param_1[8];
          uStack_e0 = param_1[9];
          local_d8 = param_1[10];
          uStack_d0 = param_1[0xb];
          local_c8 = param_1[0xc];
          uStack_c0 = param_1[0xd];
          local_b8 = param_1[0xe];
          uStack_b0 = param_1[0xf];
          local_a8 = param_1[0x10];
          uStack_a0 = param_1[0x11];
          local_98 = param_1[0x12];
          uStack_90 = param_1[0x13];
          local_88 = param_1[0x14];
          uStack_80 = param_1[0x15];
          local_78 = param_1[0x16];
          uStack_70 = param_1[0x17];
          local_68 = param_1[0x18];
          uStack_60 = param_1[0x19];
          local_58 = param_1[0x1a];
          uStack_50 = param_1[0x1b];
          local_148 = FUN_0051a930();
          FUN_0041ae80(local_140,local_138,local_130);
          FUN_0051a440(param_1);
          iVar2 = FUN_0051a940(param_1,plVar3[2],1);
          if ((iVar2 == 0) ||
             (iVar2 = (*(code *)plVar3[2])(param_1,plVar3[5],&local_148), iVar2 == 0)) {
            bVar10 = false;
            FUN_0051aa90(param_1,1);
            plVar3[2] = 0;
            plVar3[1] = 0;
            FUN_004daaa0(*plVar3);
            *plVar3 = 0;
            FUN_0051f420();
            FUN_0051f540("../crypto/engine/eng_dyn.c",0x1f7,"dynamic_load");
            FUN_0051f8f0(0x26,0x6d,0);
            *param_1 = local_128;
            param_1[1] = uStack_120;
            param_1[2] = local_118;
            param_1[3] = uStack_110;
            param_1[4] = local_108;
            param_1[5] = uStack_100;
            param_1[6] = local_f8;
            param_1[7] = uStack_f0;
            param_1[8] = local_e8;
            param_1[9] = uStack_e0;
            param_1[10] = local_d8;
            param_1[0xb] = uStack_d0;
            param_1[0xc] = local_c8;
            param_1[0xd] = uStack_c0;
            param_1[0xe] = local_b8;
            param_1[0xf] = uStack_b0;
            param_1[0x10] = local_a8;
            param_1[0x11] = uStack_a0;
            param_1[0x12] = local_98;
            param_1[0x13] = uStack_90;
            param_1[0x14] = local_88;
            param_1[0x15] = uStack_80;
            param_1[0x16] = local_78;
            param_1[0x17] = uStack_70;
            param_1[0x18] = local_68;
            param_1[0x19] = uStack_60;
            param_1[0x1a] = local_58;
            param_1[0x1b] = uStack_50;
            break;
          }
          if ((0 < (int)plVar3[6]) && (iVar2 = FUN_0051ae30(param_1), iVar2 == 0)) {
            if ((int)plVar3[6] < 2) {
              FUN_0051e390();
              bVar10 = true;
            }
            else {
              FUN_0051f420();
              FUN_0051f540("../crypto/engine/eng_dyn.c",0x207,"dynamic_load");
              FUN_0051f8f0(0x26,0x67,0);
              bVar10 = false;
            }
            break;
          }
          goto LAB_0051943a;
        }
        if ((int)plVar3[9] != 0) goto LAB_00519107;
      }
      FUN_0051f420();
      bVar10 = false;
      FUN_0051f540("../crypto/engine/eng_dyn.c",0x1a6,"dynamic_load");
      FUN_0051f8f0(0x26,0x84,0);
      FUN_004daaa0(*plVar3);
      *plVar3 = 0;
      break;
    }
    goto LAB_00519350;
  default:
    FUN_0051f420();
    FUN_0051f540("../crypto/engine/eng_dyn.c",0x176,"dynamic_ctrl");
    FUN_0051f8f0(0x26,0x77,0);
LAB_00519350:
    bVar10 = false;
  }
LAB_00519093:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    FUN_00771f60();
  }
  return bVar10;
}

