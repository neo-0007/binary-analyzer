
undefined8 FUN_0044ae00(long param_1)

{
  undefined8 uVar1;
  long in_FS_OFFSET;
  undefined1 local_38 [16];
  undefined1 auStack_28 [8];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  *(byte *)(param_1 + 0x330) = *(byte *)(param_1 + 0x330) & 0xfc;
  uVar1 = 1;
  *(undefined8 *)(param_1 + 800) = 0;
  *(undefined8 *)(param_1 + 0x328) = 0;
  *(undefined8 *)(param_1 + 0x348) = 0xffffffffffffffff;
  local_38 = (undefined1  [16])0x0;
  if (*(ulong *)(param_1 + 0x340) < 0x11) {
    thunk_FUN_00713a50(auStack_28 + -*(ulong *)(param_1 + 0x340),param_1 + 0x74);
    if ((*(byte *)(param_1 + 0x3c) & 2) == 0) {
      uVar1 = FUN_0044a010();
    }
    else {
      uVar1 = FUN_00449fa0(param_1 + 0xc0,0,0,local_38,0x10,0);
    }
    *(byte *)(param_1 + 0x3c) = *(byte *)(param_1 + 0x3c) | 4;
    *(undefined8 *)(param_1 + 0x2f0) = *(undefined8 *)(param_1 + 0x1a4);
    *(undefined4 *)(param_1 + 0x2f8) = *(undefined4 *)(param_1 + 0x1ac);
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00771f60();
}

