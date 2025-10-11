
void FUN_006ca830(undefined8 param_1,undefined1 *param_2)

{
  int iVar1;
  long lVar2;
  long *plVar3;
  long in_FS_OFFSET;
  undefined1 local_3a;
  undefined1 local_39;
  long *local_38;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_2 == (undefined1 *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00403890("basic_string::_S_construct null not valid");
  }
  lVar2 = thunk_FUN_007129d0(param_2);
  if (lVar2 == 0) {
    local_38 = (long *)&DAT_009452b8;
  }
  else {
    plVar3 = (long *)FUN_00637be0(lVar2,0,&local_3a);
    local_38 = plVar3 + 3;
    if (lVar2 == 1) {
      *(undefined1 *)(plVar3 + 3) = *param_2;
    }
    else {
      local_38 = (long *)thunk_FUN_00713a50(local_38,param_2,lVar2);
    }
    if (plVar3 != &DAT_009452a0) {
      *(undefined4 *)(plVar3 + 2) = 0;
      *plVar3 = lVar2;
      *(undefined1 *)((long)plVar3 + lVar2 + 0x18) = 0;
    }
  }
  FUN_006ca780(param_1,&local_38);
  if (local_38 + -3 != &DAT_009452a0) {
    if (DAT_0093ea10 == '\0') {
      LOCK();
      plVar3 = local_38 + -1;
      iVar1 = (int)*plVar3;
      *(int *)plVar3 = (int)*plVar3 + -1;
      UNLOCK();
    }
    else {
      iVar1 = (int)local_38[-1];
      *(int *)(local_38 + -1) = iVar1 + -1;
    }
    if (iVar1 < 1) {
      thunk_FUN_007104f0(local_38 + -3,&local_39);
    }
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00771f60();
}

