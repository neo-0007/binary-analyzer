
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_006cff80(code *param_1,undefined4 param_2,undefined8 param_3)

{
  int iVar1;
  undefined4 uVar2;
  long in_FS_OFFSET;
  undefined1 local_78 [72];
  undefined8 local_30;
  undefined8 local_28;
  
  iVar1 = FUN_006e82c0(local_78);
  if (iVar1 != 0) goto LAB_006cfff1;
  local_30 = *(undefined8 *)(in_FS_OFFSET + 0x300);
  local_28 = *(undefined8 *)(in_FS_OFFSET + 0x2f8);
  *(undefined1 **)(in_FS_OFFSET + 0x300) = local_78;
  uVar2 = (*param_1)(param_2,param_3,DAT_0094ab80);
  while( true ) {
    FUN_006e91a0(uVar2);
LAB_006cfff1:
    FUN_007096a0();
    LOCK();
    _DAT_0093e080 = _DAT_0093e080 + -1;
    UNLOCK();
    if (_DAT_0093e080 != 0) break;
    uVar2 = 0;
  }
  do {
    syscall();
  } while( true );
}

