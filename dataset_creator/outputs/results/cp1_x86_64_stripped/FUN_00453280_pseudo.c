
undefined4
FUN_00453280(undefined8 *param_1,undefined8 param_2,uint param_3,code *param_4,undefined8 param_5)

{
  code *pcVar1;
  int iVar2;
  undefined4 uVar3;
  long lVar4;
  uint uVar5;
  uint uVar6;
  long in_FS_OFFSET;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  undefined4 local_fc;
  undefined8 local_f8;
  undefined8 local_f0;
  undefined8 local_e8;
  long local_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  *(uint *)(param_1 + 2) = param_3;
  local_f8 = 0;
  local_e8 = 0;
  uVar5 = *(uint *)(param_1[1] + 0x1c);
  local_e0 = 0;
  uVar6 = uVar5;
  if (param_3 != 0) {
    uVar5 = uVar5 & param_3;
    uVar6 = param_3;
  }
  if (uVar5 == 0) {
    FUN_0051f420();
    FUN_0051f540("../providers/implementations/encode_decode/decode_der2key.c",199,"der2key_decode")
    ;
    FUN_0051f8f0(0x39,0x80106,0);
    uVar3 = 0;
    goto LAB_00453459;
  }
  iVar2 = FUN_004643c0(*param_1,param_2,&local_f8,&local_e8);
  if (iVar2 == 0) {
LAB_00453305:
    uVar3 = 1;
    FUN_0041ad60(local_f8,"../providers/implementations/encode_decode/decode_der2key.c",0x118);
    local_f8 = 0;
    if (local_e0 != 0) {
      local_fc = 2;
      FUN_0041cea0(&local_138,"type",&local_fc);
      local_b8 = local_118;
      local_d8 = local_138;
      uStack_d0 = uStack_130;
      local_c8 = local_128;
      uStack_c0 = uStack_120;
      FUN_0041e290(&local_138,"data-type",*(undefined8 *)param_1[1],0);
      local_b0 = local_138;
      uStack_a8 = uStack_130;
      local_a0 = local_128;
      uStack_98 = uStack_120;
      local_90 = local_118;
      FUN_0041e2e0(&local_138,"reference",&local_e0,8);
      local_68 = local_118;
      local_88 = local_138;
      uStack_80 = uStack_130;
      local_78 = local_128;
      uStack_70 = uStack_120;
      FUN_0041e470(&local_138);
      local_60 = local_138;
      uStack_58 = uStack_130;
      local_40 = local_118;
      local_50 = local_128;
      uStack_48 = uStack_120;
      uVar3 = (*param_4)(&local_d8,param_5);
    }
  }
  else {
    FUN_0051f000();
    if ((uVar6 & 1) == 0) {
      if (local_e0 == 0) {
LAB_00453573:
        if ((uVar6 & 2) != 0) {
          local_f0 = local_f8;
          pcVar1 = *(code **)(param_1[1] + 0x40);
          if (pcVar1 == (code *)0x0) {
            local_e0 = (**(code **)(param_1[1] + 0x28))(0,&local_f0,local_e8);
          }
          else {
            local_e0 = (*pcVar1)();
          }
          if (local_e0 != 0) goto LAB_004534a3;
          if (*(int *)(param_1 + 2) != 0) goto LAB_004535c0;
        }
        if ((uVar6 & 0x84) != 0) {
          local_f0 = local_f8;
          if ((*(code **)(param_1[1] + 0x30) != (code *)0x0) &&
             (local_e0 = (**(code **)(param_1[1] + 0x30))(0,&local_f0,local_e8), local_e0 != 0))
          goto LAB_004534a3;
          if (*(int *)(param_1 + 2) != 0) goto LAB_004535c0;
        }
        FUN_0051f1a0();
      }
      else {
LAB_004534a3:
        FUN_0051f050();
      }
      if (local_e0 != 0) {
        lVar4 = param_1[1];
        if (*(code **)(lVar4 + 0x48) == (code *)0x0) {
LAB_004535e2:
          if (*(code **)(lVar4 + 0x50) != (code *)0x0) {
            (**(code **)(lVar4 + 0x50))(local_e0,param_1);
          }
        }
        else {
          iVar2 = (**(code **)(lVar4 + 0x48))(local_e0,param_1);
          if (iVar2 == 0) {
            (**(code **)(param_1[1] + 0x58))(local_e0);
            local_e0 = 0;
          }
          else if (local_e0 != 0) {
            lVar4 = param_1[1];
            goto LAB_004535e2;
          }
        }
      }
      goto LAB_00453305;
    }
    local_f0 = local_f8;
    pcVar1 = *(code **)(param_1[1] + 0x38);
    if (pcVar1 == (code *)0x0) {
      pcVar1 = *(code **)(param_1[1] + 0x20);
      if (pcVar1 != (code *)0x0) {
        local_e0 = (*pcVar1)(0,&local_f0,local_e8);
      }
LAB_00453563:
      if (local_e0 != 0) goto LAB_004534a3;
      if (*(int *)(param_1 + 2) == 0) goto LAB_00453573;
LAB_004535c0:
      FUN_0051f1a0();
      goto LAB_00453305;
    }
    local_e0 = (*pcVar1)(0,&local_f0,local_e8,param_1);
    if ((*(byte *)((long)param_1 + 0x14) & 1) == 0) goto LAB_00453563;
    FUN_0051f1a0();
    uVar3 = 0;
  }
  (**(code **)(param_1[1] + 0x58))(local_e0);
  FUN_0041ad60(local_f8,"../providers/implementations/encode_decode/decode_der2key.c",0x130);
LAB_00453459:
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    FUN_00771f60();
  }
  return uVar3;
}

