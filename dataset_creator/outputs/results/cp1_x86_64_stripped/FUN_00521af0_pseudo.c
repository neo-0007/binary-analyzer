
undefined8 FUN_00521af0(int *param_1,undefined4 param_2,ulong *param_3)

{
  int iVar1;
  ulong uVar2;
  int iVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined8 uVar6;
  long lVar7;
  int **ppiVar8;
  code *pcVar9;
  long in_FS_OFFSET;
  byte bVar10;
  undefined4 local_118;
  int local_114;
  int local_110;
  int local_10c;
  undefined1 local_108 [16];
  undefined1 local_f8 [16];
  undefined1 local_e8 [16];
  int *local_d8;
  undefined4 local_d0;
  undefined4 local_cc;
  int local_bc;
  undefined8 local_b8;
  ulong *local_a8;
  long local_60;
  long local_40;
  
  bVar10 = 0;
  iVar1 = param_1[0x1d];
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  iVar3 = *param_1;
  if (*param_1 == 0) {
    iVar3 = -1;
  }
  if (param_3 != (ulong *)0x0) {
    for (; uVar2 = *param_3, uVar2 != 0; param_3 = param_3 + 5) {
      pcVar9 = FUN_00521e40;
      ppiVar8 = &local_d8;
      for (lVar7 = 0x12; lVar7 != 0; lVar7 = lVar7 + -1) {
        *ppiVar8 = (int *)0x0;
        ppiVar8 = ppiVar8 + (ulong)bVar10 * -2 + 1;
      }
      local_f8._8_8_ = 0;
      local_f8._0_8_ = uVar2;
      local_f8 = local_f8 << 0x40;
      local_108 = (undefined1  [16])0x0;
      local_e8 = (undefined1  [16])0x0;
      local_118 = param_2;
      local_114 = iVar1;
      local_110 = iVar1;
      local_10c = iVar3;
      puVar5 = (undefined4 *)FUN_00521980(&local_118,&DAT_00904d80,0x48);
      if (puVar5 != (undefined4 *)0x0) {
        pcVar9 = *(code **)(puVar5 + 0xe);
        if (pcVar9 == (code *)0x0) {
          pcVar9 = FUN_00521e40;
        }
        local_d0 = *puVar5;
      }
      local_d8 = param_1;
      local_a8 = param_3;
      iVar4 = (*pcVar9)(7,puVar5,&local_d8);
      if ((iVar4 < 1) ||
         (iVar4 = FUN_00414800(param_1,iVar1,iVar3,local_cc,local_bc,local_b8), iVar4 < 1)) {
        if (local_60 != 0) goto LAB_00521b59;
LAB_00521cb0:
        uVar6 = 0;
        goto LAB_00521c85;
      }
      local_bc = iVar4;
      (*pcVar9)(8,puVar5,&local_d8);
      iVar4 = local_bc;
      if (local_60 != 0) {
LAB_00521b59:
        FUN_0041ad60(local_60,"../crypto/evp/ctrl_params_translate.c",0x2c8);
      }
      if (iVar4 < 1) goto LAB_00521cb0;
    }
  }
  uVar6 = 1;
LAB_00521c85:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    FUN_00771f60();
  }
  return uVar6;
}

