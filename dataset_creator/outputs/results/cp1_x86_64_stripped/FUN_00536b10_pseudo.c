
bool FUN_00536b10(long *param_1,int param_2)

{
  int iVar1;
  ulong uVar2;
  long in_FS_OFFSET;
  bool bVar3;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  int local_6c;
  undefined1 local_68 [16];
  undefined1 local_58 [16];
  undefined1 local_48 [16];
  undefined1 local_38 [16];
  undefined1 local_28 [16];
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_68 = (undefined1  [16])0x0;
  local_58 = (undefined1  [16])0x0;
  local_48 = (undefined1  [16])0x0;
  uVar2 = param_1[0xe] | 0x100;
  if (param_2 != 0) {
    uVar2 = param_1[0xe] & 0xfffffffffffffeff;
  }
  local_38 = (undefined1  [16])0x0;
  local_28 = (undefined1  [16])0x0;
  param_1[0xe] = uVar2;
  local_6c = param_2;
  if ((*param_1 == 0) || (*(long *)(*param_1 + 0x78) != 0)) {
    FUN_0041ced0(&local_a8,"padding",&local_6c);
    local_68._8_8_ = uStack_a0;
    local_68._0_8_ = local_a8;
    local_48._0_8_ = local_88;
    local_58._8_8_ = uStack_90;
    local_58._0_8_ = local_98;
    iVar1 = FUN_0040b8d0(*param_1,param_1[0x15],local_68);
    bVar3 = iVar1 != 0;
  }
  else {
    bVar3 = true;
  }
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return bVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00771f60();
}

