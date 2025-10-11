
bool FUN_00545e30(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  int iVar2;
  long in_FS_OFFSET;
  bool bVar3;
  long local_38;
  long local_30;
  
  bVar3 = false;
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  iVar1 = FUN_004b7d60(param_2);
  if (iVar1 == 0) {
    bVar3 = false;
    iVar1 = FUN_004b7bb0(param_2);
    iVar2 = FUN_00547790(param_1);
    if (iVar2 != 0) {
      iVar2 = FUN_005477a0(param_1,2,1);
      if (iVar2 != 0) {
        if (iVar1 < 0) {
          iVar1 = iVar1 + 7;
        }
        iVar2 = (iVar1 >> 3) + 1;
        iVar1 = FUN_00545da0(param_1,(long)iVar2);
        if (iVar1 != 0) {
          iVar1 = FUN_00547420(param_1,(long)iVar2,&local_38);
          if (iVar1 != 0) {
            iVar1 = FUN_00547aa0(param_1);
            if (iVar1 != 0) {
              bVar3 = true;
              if (local_38 != 0) {
                iVar1 = FUN_004b87b0(param_2,local_38,iVar2);
                bVar3 = iVar2 == iVar1;
              }
            }
          }
        }
      }
    }
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return bVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00771f60();
}

