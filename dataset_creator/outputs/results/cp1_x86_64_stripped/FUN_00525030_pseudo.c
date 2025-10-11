
int FUN_00525030(int *param_1,ulong param_2,undefined8 param_3)

{
  int iVar1;
  int *piVar2;
  long lVar3;
  code *pcVar4;
  int **ppiVar5;
  long in_FS_OFFSET;
  undefined4 local_168;
  int local_164;
  int local_160;
  int local_15c;
  undefined1 local_158 [16];
  undefined1 local_148 [16];
  undefined1 local_138 [16];
  undefined1 local_128 [16];
  undefined1 local_118 [16];
  undefined1 local_108 [16];
  undefined1 local_f8 [16];
  undefined1 local_e8 [16];
  int *local_d8;
  int local_d0;
  ulong local_c8;
  uint local_c0;
  undefined4 local_bc;
  undefined8 local_b8;
  undefined1 *local_a8;
  long local_60;
  long local_40;
  
  local_164 = param_1[0x1d];
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_158._8_8_ = 0;
  local_158._0_8_ = param_2;
  local_158 = local_158 << 0x40;
  local_148._8_8_ = 0;
  local_148._0_8_ = param_2;
  ppiVar5 = &local_d8;
  for (lVar3 = 0x12; lVar3 != 0; lVar3 = lVar3 + -1) {
    *ppiVar5 = (int *)0x0;
    ppiVar5 = ppiVar5 + 1;
  }
  local_15c = *param_1;
  local_168 = 2;
  local_138 = (undefined1  [16])0x0;
  if (local_15c == 0) {
    local_15c = -1;
  }
  local_128 = (undefined1  [16])0x0;
  local_118 = (undefined1  [16])0x0;
  local_108 = (undefined1  [16])0x0;
  local_f8 = (undefined1  [16])0x0;
  local_e8 = (undefined1  [16])0x0;
  local_160 = local_164;
  piVar2 = (int *)FUN_00521980(&local_168,&DAT_00904d80,0x48);
  if (piVar2 == (int *)0x0) {
    local_d0 = 2;
    pcVar4 = FUN_00521e40;
  }
  else {
    pcVar4 = *(code **)(piVar2 + 0xe);
    if (pcVar4 == (code *)0x0) {
      pcVar4 = FUN_00521e40;
    }
    local_d0 = *piVar2;
    local_c0 = (uint)(local_148._0_8_ != 0);
  }
  local_c8 = param_2;
  local_bc = thunk_FUN_007129d0(param_3);
  local_a8 = local_128;
  local_d8 = param_1;
  local_b8 = param_3;
  iVar1 = (*pcVar4)(4,piVar2,&local_d8);
  if ((0 < iVar1) && ((local_d0 != 2 || (iVar1 = FUN_00414250(param_1,local_a8), 0 < iVar1)))) {
    iVar1 = (*pcVar4)(5,piVar2,&local_d8);
  }
  if (local_60 != 0) {
    FUN_0041ad60(local_60,"../crypto/evp/ctrl_params_translate.c",0x2c8);
  }
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    FUN_00771f60();
  }
  return iVar1;
}

