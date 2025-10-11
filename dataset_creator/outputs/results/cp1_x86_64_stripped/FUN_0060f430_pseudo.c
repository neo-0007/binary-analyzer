
long FUN_0060f430(undefined8 param_1)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  long in_FS_OFFSET;
  undefined8 local_28;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  lVar2 = FUN_0060f270();
  if (lVar2 != 0) {
    uVar3 = FUN_005a2b20(param_1);
    local_28 = FUN_004a23e0(uVar3);
    iVar1 = FUN_004a23b0(uVar3);
    if (*(code **)(lVar2 + 8) == (code *)0x0) {
      lVar2 = (**(code **)(lVar2 + 0x20))(0,&local_28,(long)iVar1);
    }
    else {
      uVar3 = (**(code **)(lVar2 + 8))();
      lVar2 = FUN_004a55c0(0,&local_28,(long)iVar1,uVar3);
    }
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return lVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00771f60();
}

