
long * FUN_00639a20(undefined1 *param_1,undefined1 *param_2)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  
  if (param_1 == param_2) {
    return (long *)&DAT_009452b8;
  }
  if (param_1 != (undefined1 *)0x0) {
    lVar3 = (long)param_2 - (long)param_1;
    plVar1 = (long *)FUN_00637be0(lVar3,0);
    plVar2 = plVar1 + 3;
    if (lVar3 == 1) {
      *(undefined1 *)(plVar1 + 3) = *param_1;
    }
    else {
      plVar2 = (long *)thunk_FUN_00713a50(plVar2,param_1,lVar3);
    }
    if (plVar1 != &DAT_009452a0) {
      *(undefined4 *)(plVar1 + 2) = 0;
      *plVar1 = lVar3;
      *(undefined1 *)((long)plVar1 + lVar3 + 0x18) = 0;
    }
    return plVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00403890("basic_string::_S_construct null not valid");
}

