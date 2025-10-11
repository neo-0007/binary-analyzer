
undefined * FUN_0057cd40(undefined8 param_1,undefined8 param_2,undefined *param_3)

{
  int iVar1;
  undefined *puVar2;
  long in_FS_OFFSET;
  undefined1 auStack_98 [104];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_3 == (undefined *)0x0) {
    param_3 = &DAT_00941360;
  }
  iVar1 = FUN_004348c0(auStack_98);
  puVar2 = (undefined *)0x0;
  if (iVar1 != 0) {
    FUN_00434550(auStack_98,param_1,param_2);
    FUN_00434750(param_3,auStack_98);
    FUN_004227b0(auStack_98,0x60);
    puVar2 = param_3;
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return puVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00771f60();
}

