
undefined8 * FUN_00711c30(undefined8 *param_1)

{
  int iVar1;
  int *piVar2;
  long in_FS_OFFSET;
  undefined1 local_88 [16];
  undefined1 local_78 [16];
  undefined1 local_68 [16];
  undefined1 local_58 [16];
  undefined1 local_48 [16];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (DAT_0094a9a8 == '\0') {
    FUN_0070d5c0();
  }
  local_88 = (undefined1  [16])0x0;
  piVar2 = &DAT_0093e160;
  local_78 = (undefined1  [16])0x0;
  local_68 = (undefined1  [16])0x0;
  local_58 = (undefined1  [16])0x0;
  local_48 = (undefined1  [16])0x0;
  do {
    while( true ) {
      LOCK();
      iVar1 = *piVar2;
      if (iVar1 == 0) {
        *piVar2 = 1;
      }
      UNLOCK();
      if (iVar1 != 0) {
        FUN_00709590(piVar2);
      }
      FUN_0070bdf0(piVar2,local_88);
      LOCK();
      iVar1 = *piVar2;
      *piVar2 = 0;
      UNLOCK();
      if (1 < iVar1) break;
      piVar2 = *(int **)(piVar2 + 0x21c);
      if (piVar2 == &DAT_0093e160) goto LAB_00711ce8;
    }
    FUN_00709660(piVar2);
    piVar2 = *(int **)(piVar2 + 0x21c);
  } while (piVar2 != &DAT_0093e160);
LAB_00711ce8:
  *param_1 = local_88._0_8_;
  param_1[1] = local_88._8_8_;
  param_1[2] = local_78._0_8_;
  param_1[3] = local_78._8_8_;
  param_1[4] = local_68._0_8_;
  param_1[5] = local_68._8_8_;
  param_1[6] = local_58._0_8_;
  param_1[7] = local_58._8_8_;
  param_1[8] = local_48._0_8_;
  param_1[9] = local_48._8_8_;
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    FUN_00771f60();
  }
  return param_1;
}

