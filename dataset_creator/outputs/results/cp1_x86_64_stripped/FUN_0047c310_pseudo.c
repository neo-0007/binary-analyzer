
void FUN_0047c310(undefined8 param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined8 uVar3;
  long in_FS_OFFSET;
  long local_48;
  long local_40;
  undefined1 local_38 [16];
  long local_28;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  local_38 = (undefined1  [16])0x0;
  local_28 = 0;
  uVar1 = FUN_00768c70();
  local_38._0_4_ = uVar1;
  uVar3 = thunk_FUN_0070b640();
  local_38._8_8_ = uVar3;
  iVar2 = FUN_00767f90(0,&local_48);
  if (iVar2 != 0) {
    iVar2 = FUN_00760800(&local_48,0);
    if (iVar2 != 0) {
      local_28 = FUN_007607a0(0);
      goto LAB_0047c371;
    }
  }
  local_28 = (local_48 << 0x20) + local_40;
LAB_0047c371:
  FUN_0042a120(param_1,local_38,0x18,0);
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00771f60();
}

