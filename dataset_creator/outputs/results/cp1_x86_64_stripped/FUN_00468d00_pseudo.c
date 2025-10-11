
void FUN_00468d00(undefined8 *param_1)

{
  int iVar1;
  undefined8 uVar2;
  long in_FS_OFFSET;
  undefined1 local_a8 [32];
  undefined8 local_88;
  undefined1 local_78 [16];
  undefined1 local_68 [16];
  undefined1 local_58 [16];
  undefined1 local_48 [16];
  undefined1 local_38 [16];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  local_78 = (undefined1  [16])0x0;
  local_68 = (undefined1  [16])0x0;
  local_58 = (undefined1  [16])0x0;
  local_48 = (undefined1  [16])0x0;
  local_38 = (undefined1  [16])0x0;
  uVar2 = FUN_00485290(*param_1);
  FUN_0041e290(local_a8,"digest",&DAT_007d039e,0);
  local_58._0_8_ = local_88;
  iVar1 = FUN_0043c6f0(param_1 + 6,local_78,uVar2);
  if (iVar1 == 0) {
    FUN_0043c5e0(param_1 + 6);
  }
  param_1[5] = 0x800;
  *(undefined4 *)(param_1 + 9) = DAT_007e47ec;
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00771f60();
}

