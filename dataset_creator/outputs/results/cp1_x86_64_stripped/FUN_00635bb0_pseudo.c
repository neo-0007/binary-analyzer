
void FUN_00635bb0(undefined8 *param_1,undefined1 *param_2,long param_3)

{
  long *plVar1;
  long *plVar2;
  long in_FS_OFFSET;
  undefined1 local_31;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_3 == 0) {
    plVar2 = (long *)&DAT_009452b8;
  }
  else {
    if (param_2 == (undefined1 *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_00403890("basic_string::_S_construct null not valid");
    }
    plVar1 = (long *)FUN_00637be0(param_3,0,&local_31);
    plVar2 = plVar1 + 3;
    if (param_3 == 1) {
      *(undefined1 *)(plVar1 + 3) = *param_2;
    }
    else {
      plVar2 = (long *)thunk_FUN_00713a50(plVar2,param_2,param_3);
    }
    if (plVar1 != &DAT_009452a0) {
      *(undefined4 *)(plVar1 + 2) = 0;
      *plVar1 = param_3;
      *(undefined1 *)((long)plVar1 + param_3 + 0x18) = 0;
    }
  }
  *param_1 = plVar2;
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00771f60();
}

