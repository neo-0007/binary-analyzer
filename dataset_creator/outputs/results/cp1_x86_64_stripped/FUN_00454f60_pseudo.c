
int FUN_00454f60(undefined8 *param_1,undefined8 param_2,uint param_3,code *param_4,
                undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  long lVar4;
  undefined1 *puVar5;
  long in_FS_OFFSET;
  undefined8 local_178;
  undefined8 uStack_170;
  undefined8 local_168;
  undefined8 uStack_160;
  undefined8 local_158;
  undefined4 local_148;
  undefined1 local_144 [4];
  int local_140;
  int local_13c;
  undefined1 *local_138;
  long local_130;
  undefined1 local_128 [16];
  undefined1 local_118 [16];
  undefined1 local_108 [16];
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined1 local_58 [24];
  long local_40;
  
  iVar1 = 0;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  lVar4 = FUN_0043bf50(*param_1);
  local_140 = -1;
  local_13c = -1;
  local_130 = 0;
  if (lVar4 == 0) goto LAB_00455198;
  iVar1 = FUN_004ab770(lVar4,local_58,0x10);
  if (iVar1 == 0x10) {
    FUN_0051f000();
    local_138 = local_58;
    iVar1 = FUN_005594b0(&local_138,0x10,local_144,&local_148,&local_140,&local_13c);
    FUN_0051f050();
    if (iVar1 < 1) {
LAB_004552e1:
      puVar5 = (undefined1 *)0x0;
      goto LAB_0045502f;
    }
    *(uint *)(param_1 + 2) = param_3;
    if (local_140 == 0) {
      if (*(int *)param_1[1] != 6) goto LAB_004552e1;
    }
    else if (*(int *)param_1[1] != 0x74) goto LAB_004552e1;
    uVar2 = FUN_00559780(local_148,local_140,local_13c);
    if (0x19000 < uVar2) {
      FUN_0051f420();
      puVar5 = (undefined1 *)0x0;
      FUN_0051f540("../providers/implementations/encode_decode/decode_msblob2key.c",0x77,
                   "msblob2key_decode");
      FUN_0051f8f0(9,0x80,0);
      goto LAB_0045502f;
    }
    puVar5 = (undefined1 *)
             FUN_0041ad90(uVar2,"../providers/implementations/encode_decode/decode_msblob2key.c",
                          0x7a);
    if (puVar5 != (undefined1 *)0x0) {
      local_138 = puVar5;
      uVar3 = FUN_004ab770(lVar4,puVar5,uVar2);
      if (uVar2 == uVar3) {
        if ((param_3 == 0) || ((param_3 & 1) != 0)) {
          if ((local_13c == 0) && (*(long *)(param_1[1] + 0x18) != 0)) {
            local_128 = (undefined1  [16])0x0;
            local_118 = (undefined1  [16])0x0;
            local_108 = (undefined1  [16])0x0;
            iVar1 = FUN_00549540(local_128,param_6,param_7);
            if (iVar1 == 0) goto LAB_00455174;
            local_138 = puVar5;
            local_130 = (**(code **)(param_1[1] + 0x18))(&local_138,local_148,local_13c);
            if (param_3 == 0) goto LAB_004553fd;
          }
          else {
LAB_004553fd:
            if (local_130 != 0) goto LAB_004552a7;
            if (param_3 != 0) goto LAB_0045547c;
            if (local_13c == 0) goto LAB_0045502f;
            if (*(code **)(param_1[1] + 0x20) != (code *)0x0) {
              local_138 = puVar5;
              local_130 = (**(code **)(param_1[1] + 0x20))(&local_138,local_148);
            }
          }
joined_r0x004553e9:
          if (local_130 != 0) {
LAB_004552a7:
            if (*(code **)(param_1[1] + 0x28) != (code *)0x0) {
              (**(code **)(param_1[1] + 0x28))(local_130,param_1);
            }
          }
        }
        else {
          if (local_130 != 0) goto LAB_004552a7;
LAB_0045547c:
          if ((param_3 & 2) != 0) {
            if ((local_13c != 0) && (*(code **)(param_1[1] + 0x20) != (code *)0x0)) {
              local_138 = puVar5;
              local_130 = (**(code **)(param_1[1] + 0x20))(&local_138,local_148);
            }
            goto joined_r0x004553e9;
          }
        }
      }
      else {
        FUN_0051f420();
        FUN_0051f540("../providers/implementations/encode_decode/decode_msblob2key.c",0x81,
                     "msblob2key_decode");
        FUN_0051f8f0(9,0x7b,0);
      }
      goto LAB_0045502f;
    }
    FUN_0051f420();
    iVar1 = 0;
    FUN_0051f540("../providers/implementations/encode_decode/decode_msblob2key.c",0x7c,
                 "msblob2key_decode");
    FUN_0051f8f0(9,0xc0100,0);
  }
  else {
    FUN_0051f420();
    puVar5 = (undefined1 *)0x0;
    FUN_0051f540("../providers/implementations/encode_decode/decode_msblob2key.c",100,
                 "msblob2key_decode");
    FUN_0051f8f0(9,0x7b,0);
LAB_0045502f:
    FUN_0041ad60(puVar5,"../providers/implementations/encode_decode/decode_msblob2key.c",0xac);
    FUN_004ab560(lVar4);
    if (local_130 == 0) {
      puVar5 = (undefined1 *)0x0;
      iVar1 = 1;
      lVar4 = 0;
    }
    else {
      puVar5 = (undefined1 *)0x0;
      local_128._0_4_ = 2;
      FUN_0041cea0(&local_178,"type",local_128);
      local_d8 = local_158;
      local_f8 = local_178;
      uStack_f0 = uStack_170;
      local_e8 = local_168;
      uStack_e0 = uStack_160;
      FUN_0041e290(&local_178,"data-type",*(undefined8 *)(param_1[1] + 8),0);
      local_d0 = local_178;
      uStack_c8 = uStack_170;
      local_c0 = local_168;
      uStack_b8 = uStack_160;
      local_b0 = local_158;
      FUN_0041e2e0(&local_178,"reference",&local_130,8);
      lVar4 = 0;
      local_88 = local_158;
      local_a8 = local_178;
      uStack_a0 = uStack_170;
      local_98 = local_168;
      uStack_90 = uStack_160;
      FUN_0041e470(&local_178);
      local_60 = local_158;
      local_80 = local_178;
      uStack_78 = uStack_170;
      local_70 = local_168;
      uStack_68 = uStack_160;
      iVar1 = (*param_4)(&local_f8,param_5);
    }
  }
LAB_00455174:
  FUN_004ab560(lVar4);
  FUN_0041ad60(puVar5,"../providers/implementations/encode_decode/decode_msblob2key.c",0xc5);
  (**(code **)(param_1[1] + 0x30))(local_130);
LAB_00455198:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    FUN_00771f60();
  }
  return iVar1;
}

