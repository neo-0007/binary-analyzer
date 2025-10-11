
bool FUN_00478410(long param_1,undefined8 param_2)

{
  int iVar1;
  int iVar2;
  long lVar3;
  long in_FS_OFFSET;
  bool bVar4;
  undefined8 local_28;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  lVar3 = thunk_FUN_0041cdd0(param_2,"size");
  if (lVar3 == 0) {
LAB_00478481:
    lVar3 = thunk_FUN_0041cdd0(param_2,"c-rounds");
    if (lVar3 != 0) {
      iVar2 = thunk_FUN_0041d240(lVar3,param_1 + 0x48);
      if (iVar2 == 0) goto LAB_0047844f;
    }
    lVar3 = thunk_FUN_0041cdd0(param_2,"d-rounds");
    if (lVar3 != 0) {
      iVar2 = thunk_FUN_0041d240(lVar3,param_1 + 0x4c);
      if (iVar2 == 0) goto LAB_0047844f;
    }
    lVar3 = thunk_FUN_0041cdd0(param_2,"key");
    if (lVar3 == 0) {
      bVar4 = true;
      goto LAB_00478451;
    }
    if ((*(int *)(lVar3 + 8) == 5) && (*(long *)(lVar3 + 0x18) == 0x10)) {
      iVar2 = *(int *)(param_1 + 0x4c);
      if (*(int *)(param_1 + 0x4c) == 0) {
        iVar2 = 4;
      }
      iVar1 = *(int *)(param_1 + 0x48);
      if (*(int *)(param_1 + 0x48) == 0) {
        iVar1 = 2;
      }
      iVar2 = FUN_0058ea50(param_1 + 8,*(undefined8 *)(lVar3 + 0x10),iVar1,iVar2);
      bVar4 = iVar2 != 0;
      goto LAB_00478451;
    }
  }
  else {
    iVar2 = thunk_FUN_0041d830(lVar3,&local_28);
    if (iVar2 != 0) {
      iVar2 = FUN_0058e9e0(param_1 + 8,local_28);
      if (iVar2 != 0) goto LAB_00478481;
    }
  }
LAB_0047844f:
  bVar4 = false;
LAB_00478451:
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return bVar4;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00771f60();
}

