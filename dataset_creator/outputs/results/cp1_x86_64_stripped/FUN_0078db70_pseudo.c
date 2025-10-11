
undefined4 FUN_0078db70(undefined1 (*param_1) [16],code *param_2,undefined8 param_3)

{
  undefined8 uVar1;
  int iVar2;
  long in_FS_OFFSET;
  undefined4 local_ec;
  undefined1 (*local_e8) [16];
  undefined4 *local_e0;
  undefined1 local_d8 [200];
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  uVar1 = *(undefined8 *)(in_FS_OFFSET + -8);
  if (param_1 == (undefined1 (*) [16])0x0) {
    *(undefined8 *)(in_FS_OFFSET + -8) = 0;
    (*param_2)(param_3);
    *(undefined8 *)(in_FS_OFFSET + -8) = uVar1;
    local_ec = 0;
  }
  else {
    local_e0 = &local_ec;
    *(undefined1 (***) [16])(in_FS_OFFSET + -8) = &local_e8;
    local_e8 = param_1;
    iVar2 = FUN_007909a0(local_d8,0);
    if (iVar2 == 0) {
      (*param_2)(param_3);
      *(undefined8 *)(in_FS_OFFSET + -8) = uVar1;
      *(undefined8 *)param_1[1] = 0;
      *param_1 = (undefined1  [16])0x0;
      local_ec = 0;
    }
    else {
      *(undefined8 *)(in_FS_OFFSET + -8) = uVar1;
    }
  }
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return local_ec;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00771f60();
}

