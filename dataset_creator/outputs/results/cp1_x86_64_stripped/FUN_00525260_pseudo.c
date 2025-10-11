
undefined4 FUN_00525260(undefined8 param_1,ulong *param_2)

{
  ulong uVar1;
  undefined4 uVar2;
  int *piVar3;
  long lVar4;
  undefined8 *puVar5;
  long in_FS_OFFSET;
  byte bVar6;
  undefined4 local_118;
  undefined1 auStack_114 [12];
  undefined1 local_108 [16];
  undefined1 local_f8 [16];
  undefined1 local_e8 [16];
  undefined8 local_d8;
  int local_d0;
  undefined8 local_b8;
  ulong *local_a8;
  long local_60;
  long local_40;
  
  bVar6 = 0;
  uVar2 = 1;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_2 != (ulong *)0x0) {
    for (; uVar1 = *param_2, uVar1 != 0; param_2 = param_2 + 5) {
      puVar5 = &local_d8;
      for (lVar4 = 0x12; lVar4 != 0; lVar4 = lVar4 + -1) {
        *puVar5 = 0;
        puVar5 = puVar5 + (ulong)bVar6 * -2 + 1;
      }
      local_f8._8_8_ = 0;
      local_f8._0_8_ = uVar1;
      local_f8 = local_f8 << 0x40;
      local_108 = (undefined1  [16])0x0;
      auStack_114 = SUB1612((undefined1  [16])0x0,4);
      local_118 = 1;
      local_e8 = (undefined1  [16])0x0;
      piVar3 = (int *)FUN_00521980(&local_118,&DAT_009043c0,0x27);
      if ((piVar3 == (int *)0x0) || (*(code **)(piVar3 + 0xe) == (code *)0x0)) {
LAB_0052536f:
        uVar2 = 0xfffffffe;
        break;
      }
      local_d0 = *piVar3;
      local_b8 = param_1;
      local_a8 = param_2;
      if (local_d0 != 1) goto LAB_0052536f;
      uVar2 = (**(code **)(piVar3 + 0xe))(0,piVar3,&local_d8);
      if (local_60 != 0) {
        FUN_0041ad60(local_60,"../crypto/evp/ctrl_params_translate.c",0x2c8);
      }
    }
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00771f60();
}

