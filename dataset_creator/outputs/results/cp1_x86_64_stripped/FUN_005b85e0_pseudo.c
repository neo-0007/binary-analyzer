
undefined8 FUN_005b85e0(undefined8 param_1,undefined8 param_2,int param_3,long param_4)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  long in_FS_OFFSET;
  undefined8 local_70;
  undefined1 local_68 [56];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  local_70 = param_2;
  lVar2 = FUN_00602a60(&local_70,local_68);
  if (lVar2 == 0) {
LAB_005b8672:
    uVar3 = 0;
  }
  else {
    if ((param_3 != 0) || (param_4 != 0)) {
      iVar1 = FUN_00602a80(lVar2,param_3,param_4);
      if (iVar1 == 0) goto LAB_005b8672;
    }
    uVar3 = FUN_005b7a40(param_1,lVar2,0x17);
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00771f60();
}

