
void FUN_004df5e0(undefined8 *param_1,undefined8 param_2)

{
  int iVar1;
  long in_FS_OFFSET;
  undefined1 local_148 [64];
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined1 local_c8 [64];
  undefined1 local_88 [72];
  long local_40;
  
  iVar1 = 4;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_005cda50(&local_108);
  FUN_005cd6f0(local_c8,param_2,&local_108);
  FUN_005cda50(&local_108,local_c8);
  FUN_005cd6f0(local_c8,param_2,&local_108);
  FUN_005cda50(&local_108,local_c8);
  FUN_005cda50(local_88,&local_108);
  FUN_005cda50(&local_108,local_88);
  FUN_005cd6f0(local_148,local_c8,&local_108);
  FUN_005cda50(&local_108,local_148);
  FUN_005cda50(local_88,&local_108);
  FUN_005cda50(&local_108,local_88);
  FUN_005cd6f0(local_148,local_c8,&local_108);
  FUN_005cda50(local_c8,local_148);
  do {
    FUN_005cda50(local_88,local_c8);
    FUN_005cda50(local_c8,local_88);
    iVar1 = iVar1 + -1;
  } while (iVar1 != 0);
  iVar1 = 8;
  FUN_005cd6f0(&local_108,local_148,local_c8);
  FUN_005cda50(local_148,&local_108);
  FUN_005cd6f0(local_c8,param_2,local_148);
  FUN_005cda50(local_88,local_c8);
  FUN_005cda50(local_148,local_88);
  do {
    FUN_005cda50(local_88,local_148);
    FUN_005cda50(local_148,local_88);
    iVar1 = iVar1 + -1;
  } while (iVar1 != 0);
  iVar1 = 0x12;
  FUN_005cd6f0(local_c8,&local_108,local_148);
  FUN_005cda50(local_148,local_c8);
  do {
    FUN_005cda50(local_88,local_148);
    FUN_005cda50(local_148,local_88);
    iVar1 = iVar1 + -1;
  } while (iVar1 != 0);
  iVar1 = 0x12;
  FUN_005cd6f0(&local_108,local_c8,local_148);
  FUN_005cda50(local_148,&local_108);
  do {
    FUN_005cda50(local_88,local_148);
    FUN_005cda50(local_148,local_88);
    iVar1 = iVar1 + -1;
  } while (iVar1 != 0);
  iVar1 = 0x37;
  FUN_005cd6f0(&local_108,local_c8,local_148);
  FUN_005cda50(local_148,&local_108);
  do {
    FUN_005cda50(local_88,local_148);
    FUN_005cda50(local_148,local_88);
    iVar1 = iVar1 + -1;
  } while (iVar1 != 0);
  iVar1 = 0x6f;
  FUN_005cd6f0(local_c8,&local_108,local_148);
  FUN_005cda50(local_148,local_c8);
  FUN_005cd6f0(&local_108,param_2,local_148);
  FUN_005cda50(local_148,&local_108);
  do {
    FUN_005cda50(local_88,local_148);
    FUN_005cda50(local_148,local_88);
    iVar1 = iVar1 + -1;
  } while (iVar1 != 0);
  FUN_005cd6f0(&local_108,local_c8,local_148);
  FUN_005cda50(local_c8,&local_108);
  FUN_005cd6f0(local_148,local_c8,param_2);
  *param_1 = local_108;
  param_1[1] = uStack_100;
  param_1[2] = local_f8;
  param_1[3] = uStack_f0;
  param_1[4] = local_e8;
  param_1[5] = uStack_e0;
  param_1[6] = local_d8;
  param_1[7] = uStack_d0;
  FUN_004df560(local_148,&DAT_007f1120);
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00771f60();
}

