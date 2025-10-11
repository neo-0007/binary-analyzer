
int FUN_00455db0(undefined8 *param_1,undefined8 param_2,undefined8 param_3,code *param_4,
                undefined8 param_5)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  long in_FS_OFFSET;
  undefined8 local_1a8;
  undefined8 uStack_1a0;
  undefined8 local_198;
  undefined8 uStack_190;
  undefined8 local_188;
  undefined4 local_174;
  undefined8 local_170;
  undefined8 local_168;
  undefined8 local_160;
  undefined8 local_158;
  undefined8 local_150;
  undefined8 local_148;
  undefined8 uStack_140;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined8 local_128;
  undefined8 local_120;
  undefined8 uStack_118;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 local_100;
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
  undefined4 local_78 [14];
  long local_40;
  
  iVar2 = 1;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_174 = 2;
  local_158 = 0;
  local_150 = 0;
  iVar1 = FUN_004643c0(*param_1,param_2,&local_170,&local_160);
  if (iVar1 == 0) goto LAB_00455e17;
  local_168 = local_170;
  uVar3 = FUN_00485290(*param_1);
  lVar4 = FUN_005ae170(&local_168,local_160,uVar3);
  lVar5 = lVar4;
  if (lVar4 != 0) {
    iVar2 = FUN_005afa30(0,0,0,&local_158,lVar4);
    if (iVar2 != 0) {
      FUN_004a8930(&local_150,0,0,local_158);
      iVar1 = FUN_00423da0(local_150);
      if (iVar1 == 0x198) {
        iVar1 = FUN_004ec250(local_158);
        if (iVar1 == 0) goto LAB_00455ee0;
        local_78[0] = 0x324d53;
      }
      else {
LAB_00455ee0:
        iVar2 = 0;
        iVar1 = FUN_00423e90(local_78,0x32,local_150,0);
        if (iVar1 < 1) goto LAB_00455e8e;
      }
      lVar5 = 0;
      FUN_005ae1f0(lVar4);
      FUN_0041e290(&local_1a8,"data-type",local_78,0);
      local_148 = local_1a8;
      uStack_140 = uStack_1a0;
      local_138 = local_198;
      uStack_130 = uStack_190;
      local_128 = local_188;
      FUN_0041e290(&local_1a8,"data-structure","SubjectPublicKeyInfo",0);
      local_120 = local_1a8;
      uStack_118 = uStack_1a0;
      local_110 = local_198;
      uStack_108 = uStack_190;
      local_100 = local_188;
      FUN_0041e2e0(&local_1a8,"data",local_170,local_160);
      local_f8 = local_1a8;
      uStack_f0 = uStack_1a0;
      local_e8 = local_198;
      uStack_e0 = uStack_190;
      local_d8 = local_188;
      FUN_0041cea0(&local_1a8,"type",&local_174);
      local_b0 = local_188;
      local_d0 = local_1a8;
      uStack_c8 = uStack_1a0;
      local_c0 = local_198;
      uStack_b8 = uStack_190;
      FUN_0041e470(&local_1a8);
      local_a8 = local_1a8;
      uStack_a0 = uStack_1a0;
      local_88 = local_188;
      local_98 = local_198;
      uStack_90 = uStack_190;
      iVar2 = (*param_4)(&local_148,param_5);
    }
  }
LAB_00455e8e:
  FUN_005ae1f0(lVar5);
  FUN_0041ad60(local_170,"../providers/implementations/encode_decode/decode_spki2typespki.c",0x73);
LAB_00455e17:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return iVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00771f60();
}

