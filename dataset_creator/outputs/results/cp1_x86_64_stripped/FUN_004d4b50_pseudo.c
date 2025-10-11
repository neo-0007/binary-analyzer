
bool FUN_004d4b50(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,long param_6,undefined8 param_7,undefined8 param_8,
                 undefined8 param_9,undefined8 param_10)

{
  bool bVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 *puVar6;
  long in_FS_OFFSET;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 local_90 [10];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  uVar3 = FUN_0040ab30(param_8);
  uVar4 = FUN_0053c390(param_9,"X942KDF-ASN1",param_10);
  lVar5 = FUN_0053ba70(uVar4);
  bVar1 = false;
  if (lVar5 != 0) {
    FUN_0041e290(&local_138,"digest",uVar3,0);
    local_e8 = local_118;
    puVar6 = &local_b8;
    local_108 = local_138;
    uStack_100 = uStack_130;
    local_f8 = local_128;
    uStack_f0 = uStack_120;
    FUN_0041e2e0(&local_138,"key",param_3,param_4);
    local_e0 = local_138;
    uStack_d8 = uStack_130;
    local_c0 = local_118;
    local_d0 = local_128;
    uStack_c8 = uStack_120;
    if (param_6 != 0) {
      puVar6 = local_90;
      FUN_0041e2e0(&local_138,&DAT_007e431f,param_6,param_7);
      local_98 = local_118;
      local_b8 = local_138;
      uStack_b0 = uStack_130;
      local_a8 = local_128;
      uStack_a0 = uStack_120;
    }
    FUN_0041e290(&local_138,"cekalg",param_5,0);
    *puVar6 = local_138;
    puVar6[1] = uStack_130;
    puVar6[2] = local_128;
    puVar6[3] = uStack_120;
    puVar6[4] = local_118;
    FUN_0041e470(&local_138);
    puVar6[5] = local_138;
    puVar6[6] = uStack_130;
    puVar6[7] = local_128;
    puVar6[8] = uStack_120;
    puVar6[9] = local_118;
    iVar2 = FUN_0053bea0(lVar5,param_1,param_2,&local_108);
    bVar1 = 0 < iVar2;
  }
  FUN_0053bb90(lVar5);
  thunk_FUN_0053bf90(uVar4);
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return bVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00771f60();
}

