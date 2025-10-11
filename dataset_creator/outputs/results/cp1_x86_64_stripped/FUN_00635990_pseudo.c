
void FUN_00635990(undefined8 *param_1,undefined1 *param_2)

{
  long lVar1;
  long *plVar2;
  long *plVar3;
  long in_FS_OFFSET;
  undefined1 local_31;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  *param_1 = &PTR_FUN_009341c8;
  if (param_2 == (undefined1 *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00403890("basic_string::_S_construct null not valid");
  }
  lVar1 = thunk_FUN_007129d0(param_2);
  if (lVar1 == 0) {
    plVar3 = (long *)&DAT_009452b8;
  }
  else {
                    /* try { // try from 006359e3 to 00635a74 has its CatchHandler @ 00635a75 */
    plVar2 = (long *)FUN_00637be0(lVar1,0,&local_31);
    plVar3 = plVar2 + 3;
    if (lVar1 == 1) {
      *(undefined1 *)(plVar2 + 3) = *param_2;
    }
    else {
      plVar3 = (long *)thunk_FUN_00713a50(plVar3,param_2,lVar1);
    }
    if (plVar2 != &DAT_009452a0) {
      *(undefined4 *)(plVar2 + 2) = 0;
      *plVar2 = lVar1;
      *(undefined1 *)((long)plVar2 + lVar1 + 0x18) = 0;
    }
  }
  param_1[1] = plVar3;
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00771f60();
}

