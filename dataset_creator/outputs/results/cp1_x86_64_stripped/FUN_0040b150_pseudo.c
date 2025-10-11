
void FUN_0040b150(long param_1,int param_2)

{
  ulong uVar1;
  ulong uVar2;
  long in_FS_OFFSET;
  undefined1 local_a8 [32];
  undefined8 local_88;
  undefined4 local_6c;
  undefined1 local_68 [16];
  undefined1 local_58 [16];
  undefined1 local_48 [16];
  undefined1 local_38 [16];
  undefined1 local_28 [16];
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  uVar1 = *(ulong *)(param_1 + 0x70);
  uVar2 = (long)param_2 | uVar1;
  *(ulong *)(param_1 + 0x70) = uVar2;
  if (((uVar1 ^ uVar2) & 0x2000) != 0) {
    local_6c = 1;
    local_68 = (undefined1  [16])0x0;
    local_58 = (undefined1  [16])0x0;
    local_48 = (undefined1  [16])0x0;
    local_38 = (undefined1  [16])0x0;
    local_28 = (undefined1  [16])0x0;
    FUN_0041ced0(local_a8,"use-bits",&local_6c);
    local_48._0_8_ = local_88;
    FUN_005374c0(param_1,local_68);
  }
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00771f60();
}

