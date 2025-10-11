
undefined4
FUN_00455a20(undefined8 *param_1,undefined8 param_2,uint param_3,code *param_4,undefined8 param_5,
            undefined8 param_6,undefined8 param_7)

{
  code *pcVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  long lVar5;
  undefined8 uVar6;
  long in_FS_OFFSET;
  undefined8 local_158;
  undefined8 uStack_150;
  undefined8 local_148;
  undefined8 uStack_140;
  undefined8 local_138;
  long local_120;
  undefined1 local_118 [16];
  undefined1 local_108 [16];
  undefined1 local_f8 [16];
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  lVar5 = FUN_0043bf50(*param_1);
  local_120 = 0;
  if (lVar5 == 0) {
    uVar3 = 0;
    goto LAB_00455ae3;
  }
  *(uint *)(param_1 + 2) = param_3;
  if (param_3 == 0) {
    if (*(long *)(param_1[1] + 0x18) == 0) goto LAB_00455b27;
LAB_00455a99:
    local_118 = (undefined1  [16])0x0;
    local_108 = (undefined1  [16])0x0;
    local_f8 = (undefined1  [16])0x0;
    iVar2 = FUN_00549540(local_118,param_6,param_7);
    if (iVar2 != 0) {
      pcVar1 = *(code **)(param_1[1] + 0x18);
      uVar6 = FUN_00485290(*param_1);
      local_120 = (*pcVar1)(lVar5,&LAB_00549d80,local_118,uVar6,0);
      uVar4 = FUN_0051e9f0();
      if ((((int)uVar4 < 0) || ((char)((ulong)(long)(int)uVar4 >> 0x17) != '\t')) ||
         (((uVar4 & 0x7fffff) != 0x68 && ((uVar4 & 0x7fffff) != 0x65)))) {
        if ((local_120 != 0) && (*(code **)(param_1[1] + 0x20) != (code *)0x0)) {
          (**(code **)(param_1[1] + 0x20))(local_120,param_1);
        }
        goto LAB_00455b27;
      }
      FUN_0051f1a0();
    }
    uVar3 = 0;
  }
  else {
    if (((param_3 & 1) != 0) && (*(long *)(param_1[1] + 0x18) != 0)) goto LAB_00455a99;
LAB_00455b27:
    uVar3 = 1;
    FUN_004ab560(lVar5);
    lVar5 = local_120;
    if (local_120 != 0) {
      local_118._0_4_ = 2;
      FUN_0041cea0(&local_158,"type",local_118);
      local_c8 = local_138;
      local_e8 = local_158;
      uStack_e0 = uStack_150;
      local_d8 = local_148;
      uStack_d0 = uStack_140;
      FUN_0041e290(&local_158,"data-type",*(undefined8 *)(param_1[1] + 8),0);
      local_c0 = local_158;
      uStack_b8 = uStack_150;
      local_b0 = local_148;
      uStack_a8 = uStack_140;
      local_a0 = local_138;
      FUN_0041e2e0(&local_158,"reference",&local_120,8);
      lVar5 = 0;
      local_78 = local_138;
      local_98 = local_158;
      uStack_90 = uStack_150;
      local_88 = local_148;
      uStack_80 = uStack_140;
      FUN_0041e470(&local_158);
      local_50 = local_138;
      local_70 = local_158;
      uStack_68 = uStack_150;
      local_60 = local_148;
      uStack_58 = uStack_140;
      uVar3 = (*param_4)(&local_e8,param_5);
    }
  }
  FUN_004ab560(lVar5);
  (**(code **)(param_1[1] + 0x28))(local_120);
LAB_00455ae3:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00771f60();
}

