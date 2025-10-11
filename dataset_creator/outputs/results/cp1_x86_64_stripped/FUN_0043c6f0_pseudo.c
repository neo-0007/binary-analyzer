
bool FUN_0043c6f0(long *param_1,long param_2,undefined8 param_3)

{
  int iVar1;
  long lVar2;
  long in_FS_OFFSET;
  bool bVar3;
  undefined8 local_38;
  long local_30;
  
  bVar3 = true;
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_2 == 0) goto LAB_0043c738;
  iVar1 = FUN_0043c330(param_2,&local_38,param_1 + 2);
  if (iVar1 == 0) {
LAB_0043c735:
    bVar3 = false;
    goto LAB_0043c738;
  }
  lVar2 = thunk_FUN_0041cdd0(param_2,"digest");
  if (lVar2 == 0) goto LAB_0043c738;
  if (*(int *)(lVar2 + 8) != 4) goto LAB_0043c735;
  FUN_0051f000();
  FUN_0043c6a0(param_1,param_3,*(undefined8 *)(lVar2 + 0x10),local_38);
  if (*param_1 == 0) {
    lVar2 = FUN_0040d800(*(undefined8 *)(lVar2 + 0x10));
    if ((lVar2 != 0) && (*(int *)(lVar2 + 0x18) != 1)) {
      *param_1 = lVar2;
      goto LAB_0043c79b;
    }
    if (*param_1 != 0) goto LAB_0043c79b;
    FUN_0051f1a0();
  }
  else {
LAB_0043c79b:
    FUN_0051f050();
  }
  bVar3 = *param_1 != 0;
LAB_0043c738:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return bVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00771f60();
}

