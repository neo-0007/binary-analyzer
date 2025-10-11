
int FUN_0062e060(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                long param_5)

{
  uint uVar1;
  int iVar2;
  long in_FS_OFFSET;
  bool bVar3;
  undefined8 local_38;
  undefined8 local_30;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  local_38 = param_3;
  local_30 = param_4;
  if (param_5 == 0) {
    iVar2 = 0;
  }
  else {
    param_5 = param_5 + -1;
    do {
      uVar1 = FUN_0062c540(&local_38,0x10ffff);
      bVar3 = param_5 != 0;
      param_5 = param_5 + -1;
    } while (uVar1 < 0x110000 && bVar3);
    iVar2 = (int)local_38 - (int)param_3;
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return iVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00771f60();
}

