
long * FUN_00789c90(undefined *param_1,long param_2)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  
  lVar1 = *(long *)(param_1 + -0x10);
  if (param_1 == &DAT_009458b0) {
    plVar2 = (long *)FUN_007101b0((param_2 + 0x10) * 0x10);
    if (plVar2 == (long *)0x0) goto LAB_00789d2d;
    lVar3 = (lVar1 + 2) * 0x10;
    thunk_FUN_00713a50(plVar2,&DAT_009458a0,lVar3);
  }
  else {
    plVar2 = (long *)FUN_00710840(param_1 + -0x10);
    if (plVar2 == (long *)0x0) {
LAB_00789d2d:
                    /* WARNING: Subroutine does not return */
      FUN_007873c0("cannot allocate memory for thread-local data: ABORT\n");
    }
    lVar3 = (lVar1 + 2) * 0x10;
  }
  *plVar2 = param_2 + 0xe;
  thunk_FUN_00713720((long)plVar2 + lVar3,0,((param_2 + 0xe) - lVar1) * 0x10);
  return plVar2 + 2;
}

