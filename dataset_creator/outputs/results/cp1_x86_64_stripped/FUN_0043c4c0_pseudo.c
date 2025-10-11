
bool FUN_0043c4c0(long *param_1,long param_2,undefined8 param_3)

{
  int iVar1;
  long lVar2;
  long lVar3;
  long in_FS_OFFSET;
  bool bVar4;
  undefined8 local_38;
  long local_30;
  
  bVar4 = true;
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_2 == 0) goto LAB_0043c508;
  iVar1 = FUN_0043c330(param_2,&local_38,param_1 + 2);
  if (iVar1 == 0) {
LAB_0043c505:
    bVar4 = false;
    goto LAB_0043c508;
  }
  lVar2 = thunk_FUN_0041cdd0(param_2,"cipher");
  if (lVar2 == 0) goto LAB_0043c508;
  if (*(int *)(lVar2 + 8) != 4) goto LAB_0043c505;
  FUN_00537a40(param_1[1]);
  FUN_0051f000();
  lVar3 = FUN_00537960(param_3,*(undefined8 *)(lVar2 + 0x10),local_38);
  param_1[1] = lVar3;
  *param_1 = lVar3;
  if (lVar3 == 0) {
    lVar2 = FUN_0040d740(*(undefined8 *)(lVar2 + 0x10));
    if ((lVar2 != 0) && (*(int *)(lVar2 + 0x18) != 1)) {
      *param_1 = lVar2;
      goto LAB_0043c577;
    }
    if (*param_1 != 0) goto LAB_0043c577;
    FUN_0051f1a0();
  }
  else {
LAB_0043c577:
    FUN_0051f050();
  }
  bVar4 = *param_1 != 0;
LAB_0043c508:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return bVar4;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00771f60();
}

