
undefined8 FUN_0053efb0(long *param_1,undefined8 param_2)

{
  code *pcVar1;
  int iVar2;
  undefined8 uVar3;
  long in_FS_OFFSET;
  undefined1 local_a8 [32];
  undefined8 local_88;
  undefined8 local_70;
  undefined1 local_68 [16];
  undefined1 local_58 [16];
  undefined1 local_48 [16];
  undefined1 local_38 [16];
  undefined1 local_28 [16];
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  uVar3 = 0;
  local_70 = 0;
  if (param_1[1] == 0) goto LAB_0053f04a;
  local_68 = (undefined1  [16])0x0;
  local_58 = (undefined1  [16])0x0;
  local_48 = (undefined1  [16])0x0;
  local_38 = (undefined1  [16])0x0;
  local_28 = (undefined1  [16])0x0;
  FUN_0041dba0(local_a8,param_2,&local_70);
  local_48._0_8_ = local_88;
  pcVar1 = *(code **)(*param_1 + 0x80);
  if (pcVar1 == (code *)0x0) {
    pcVar1 = *(code **)(*param_1 + 0x78);
    if (pcVar1 != (code *)0x0) {
      iVar2 = (*pcVar1)(local_68);
      uVar3 = local_70;
      goto joined_r0x0053f082;
    }
  }
  else {
    iVar2 = (*pcVar1)(param_1[1],local_68);
    uVar3 = local_70;
joined_r0x0053f082:
    local_70 = uVar3;
    if (iVar2 != 0) goto LAB_0053f04a;
  }
  uVar3 = 0;
LAB_0053f04a:
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00771f60();
}

