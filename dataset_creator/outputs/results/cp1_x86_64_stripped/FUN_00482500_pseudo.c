
undefined8 FUN_00482500(long param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  long in_FS_OFFSET;
  undefined4 local_7c;
  undefined1 local_78 [72];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  local_7c = 0;
  if ((param_1 == 0) || (lVar3 = *(long *)(param_1 + 0x168), lVar3 == 0)) {
LAB_0048257c:
    uVar2 = 0;
  }
  else {
    if (param_2 != 0) {
      if ((*(byte *)(param_1 + 0x18) & 1) != 0) {
        iVar1 = FUN_004820d0(param_1);
        if (iVar1 == 0) goto LAB_0048257c;
        lVar3 = *(long *)(param_1 + 0x168);
      }
      iVar1 = FUN_00406090(lVar3,local_78,&local_7c);
      if (iVar1 == 0) goto LAB_0048257c;
    }
    uVar2 = FUN_004821c0(param_1,param_2,param_3,param_4,local_78,local_7c);
  }
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    FUN_00771f60();
  }
  return uVar2;
}

