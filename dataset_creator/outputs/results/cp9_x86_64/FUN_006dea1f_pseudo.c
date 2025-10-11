
/* WARNING: Removing unreachable block (ram,0x006debf0) */

undefined8 FUN_006dea1f(undefined1 *param_1,undefined8 *param_2,undefined8 *param_3,char param_4)

{
  char *in_RAX;
  undefined8 *puVar1;
  undefined8 *puVar2;
  long in_FS_OFFSET;
  undefined8 uStack_148;
  long lStack_140;
  code *pcStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_a8;
  undefined4 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  long lStack_10;
  
  in_RAX[-0x39] = in_RAX[-0x39] + param_4;
  *param_1 = *param_1;
  *in_RAX = *in_RAX + (char)in_RAX;
  syscall();
  lStack_10 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_2 == (undefined8 *)0x0) {
    puVar2 = (undefined8 *)0x0;
    puVar1 = &uStack_a8;
    if (param_3 == (undefined8 *)0x0) {
      puVar1 = puVar2;
    }
  }
  else {
    uStack_148 = *param_2;
    uStack_130 = param_2[1];
    uStack_128 = param_2[2];
    uStack_120 = param_2[3];
    uStack_118 = param_2[4];
    uStack_110 = param_2[5];
    uStack_108 = param_2[6];
    uStack_100 = param_2[7];
    uStack_f8 = param_2[8];
    uStack_f0 = param_2[9];
    uStack_e8 = param_2[10];
    uStack_e0 = param_2[0xb];
    uStack_d8 = param_2[0xc];
    uStack_d0 = param_2[0xd];
    uStack_c8 = param_2[0xe];
    uStack_c0 = param_2[0xf];
    uStack_b8 = param_2[0x10];
    lStack_140 = (long)(int)(*(uint *)(param_2 + 0x11) | 0x4000000);
    pcStack_138 = __restore_rt;
    puVar1 = &uStack_a8;
    puVar2 = &uStack_148;
    if (param_3 == (undefined8 *)0x0) {
      puVar1 = (undefined8 *)0x0;
      puVar2 = &uStack_148;
    }
  }
  syscall();
  if (param_3 != (undefined8 *)0x0) {
    *param_3 = uStack_a8;
    param_3[1] = uStack_90;
    param_3[2] = uStack_88;
    param_3[3] = uStack_80;
    param_3[4] = uStack_78;
    *(undefined4 *)(param_3 + 0x11) = uStack_a0;
    param_3[5] = uStack_70;
    param_3[6] = uStack_68;
    param_3[7] = uStack_60;
    param_3[8] = uStack_58;
    param_3[0x12] = uStack_98;
    param_3[9] = uStack_50;
    param_3[10] = uStack_48;
    param_3[0xb] = uStack_40;
    param_3[0xc] = uStack_38;
    param_3[0xd] = uStack_30;
    param_3[0xe] = uStack_28;
    param_3[0xf] = uStack_20;
    param_3[0x10] = uStack_18;
  }
  if (lStack_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return 0xd;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail_local(param_1,puVar2,puVar1);
}

