
/* WARNING: Removing unreachable block (ram,0x006e8600) */

undefined8 FUN_006e8440(undefined8 param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  long in_FS_OFFSET;
  undefined8 local_148;
  long local_140;
  undefined8 local_138;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined8 local_120;
  undefined8 uStack_118;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_a8;
  undefined4 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  undefined8 uStack_28;
  undefined8 local_20;
  undefined8 uStack_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_2 == (undefined8 *)0x0) {
    puVar2 = (undefined8 *)0x0;
    puVar1 = &local_a8;
    if (param_3 == (undefined8 *)0x0) {
      puVar1 = puVar2;
    }
  }
  else {
    local_148 = *param_2;
    local_130 = param_2[1];
    uStack_128 = param_2[2];
    local_120 = param_2[3];
    uStack_118 = param_2[4];
    local_110 = param_2[5];
    uStack_108 = param_2[6];
    local_100 = param_2[7];
    uStack_f8 = param_2[8];
    local_f0 = param_2[9];
    uStack_e8 = param_2[10];
    local_e0 = param_2[0xb];
    uStack_d8 = param_2[0xc];
    local_d0 = param_2[0xd];
    uStack_c8 = param_2[0xe];
    local_c0 = param_2[0xf];
    uStack_b8 = param_2[0x10];
    local_140 = (long)(int)(*(uint *)(param_2 + 0x11) | 0x4000000);
    local_138 = 0x6e8430;
    puVar1 = &local_a8;
    puVar2 = &local_148;
    if (param_3 == (undefined8 *)0x0) {
      puVar1 = (undefined8 *)0x0;
      puVar2 = &local_148;
    }
  }
  syscall();
  if (param_3 != (undefined8 *)0x0) {
    *param_3 = local_a8;
    param_3[1] = local_90;
    param_3[2] = uStack_88;
    param_3[3] = local_80;
    param_3[4] = uStack_78;
    *(undefined4 *)(param_3 + 0x11) = local_a0;
    param_3[5] = local_70;
    param_3[6] = uStack_68;
    param_3[7] = local_60;
    param_3[8] = uStack_58;
    param_3[0x12] = local_98;
    param_3[9] = local_50;
    param_3[10] = uStack_48;
    param_3[0xb] = local_40;
    param_3[0xc] = uStack_38;
    param_3[0xd] = local_30;
    param_3[0xe] = uStack_28;
    param_3[0xf] = local_20;
    param_3[0x10] = uStack_18;
  }
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return 0xd;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00771f60(param_1,puVar2,puVar1);
}

