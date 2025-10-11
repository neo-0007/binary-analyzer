
bool FUN_005477a0(undefined8 param_1,uint param_2,ulong param_3)

{
  int iVar1;
  ulong uVar2;
  long in_FS_OFFSET;
  bool bVar3;
  long local_28;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_3 < 5) {
    iVar1 = FUN_00547420(param_1,param_3,&local_28);
    if (iVar1 != 0) {
      uVar2 = (ulong)param_2;
      if (local_28 == 0) {
        bVar3 = true;
      }
      else {
        if (param_3 != 0) {
          do {
            *(char *)(local_28 + -1 + param_3) = (char)uVar2;
            uVar2 = uVar2 >> 8;
            param_3 = param_3 - 1;
          } while (param_3 != 0);
        }
        bVar3 = uVar2 == 0;
      }
      goto LAB_005477c2;
    }
  }
  bVar3 = false;
LAB_005477c2:
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return bVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00771f60();
}

