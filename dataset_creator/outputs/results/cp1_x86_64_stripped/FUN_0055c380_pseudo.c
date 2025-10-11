
bool FUN_0055c380(undefined8 param_1,int param_2,undefined8 param_3,int param_4,undefined4 param_5,
                 undefined4 param_6,int param_7,undefined8 param_8,undefined8 param_9,
                 undefined8 param_10,undefined8 param_11)

{
  int iVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  long in_FS_OFFSET;
  bool bVar5;
  undefined8 local_178;
  undefined8 uStack_170;
  undefined8 local_168;
  undefined8 uStack_160;
  undefined8 local_158;
  undefined4 local_140;
  undefined4 local_13c;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined8 local_f0;
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
  local_140 = param_6;
  local_13c = param_5;
  if (0 < param_7) {
    lVar2 = FUN_0053c390(param_10,"PKCS12KDF",param_11);
    if (lVar2 != 0) {
      lVar3 = FUN_0053ba70(lVar2);
      thunk_FUN_0053bf90(lVar2);
      if (lVar3 != 0) {
        uVar4 = FUN_0040ab30(param_9);
        FUN_0041e290(&local_178,"digest",uVar4,0);
        local_118 = local_158;
        local_138 = local_178;
        uStack_130 = uStack_170;
        local_128 = local_168;
        uStack_120 = uStack_160;
        FUN_0041e2e0(&local_178,"pass",param_1,(long)param_2);
        local_110 = local_178;
        uStack_108 = uStack_170;
        local_100 = local_168;
        uStack_f8 = uStack_160;
        local_f0 = local_158;
        FUN_0041e2e0(&local_178,"salt",param_3,(long)param_4);
        local_e8 = local_178;
        uStack_e0 = uStack_170;
        local_d8 = local_168;
        uStack_d0 = uStack_160;
        local_c8 = local_158;
        FUN_0041cea0(&local_178,"id",&local_13c);
        local_c0 = local_178;
        uStack_b8 = uStack_170;
        local_b0 = local_168;
        uStack_a8 = uStack_160;
        local_a0 = local_158;
        FUN_0041cea0(&local_178,"iter",&local_140);
        local_78 = local_158;
        local_98 = local_178;
        uStack_90 = uStack_170;
        local_88 = local_168;
        uStack_80 = uStack_160;
        FUN_0041e470(&local_178);
        local_50 = local_158;
        local_70 = local_178;
        uStack_68 = uStack_170;
        local_60 = local_168;
        uStack_58 = uStack_160;
        iVar1 = FUN_0053bea0(lVar3,param_8,(long)param_7,&local_138);
        bVar5 = iVar1 != 0;
        FUN_0053bb90(lVar3);
        goto LAB_0055c5c3;
      }
    }
  }
  bVar5 = false;
LAB_0055c5c3:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return bVar5;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00771f60();
}

