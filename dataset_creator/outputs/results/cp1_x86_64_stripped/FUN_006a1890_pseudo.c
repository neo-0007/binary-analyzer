
undefined8 * FUN_006a1890(undefined8 *param_1,long param_2)

{
  undefined1 *puVar1;
  long lVar2;
  long *plVar3;
  long *plVar4;
  long in_FS_OFFSET;
  undefined1 local_31;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  puVar1 = *(undefined1 **)(*(long *)(param_2 + 0x10) + 0x10);
  if (puVar1 == (undefined1 *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00403890("basic_string::_S_construct null not valid");
  }
  lVar2 = thunk_FUN_007129d0(puVar1);
  if (lVar2 == 0) {
    plVar4 = (long *)&DAT_009452b8;
  }
  else {
    plVar3 = (long *)FUN_00637be0(lVar2,0,&local_31);
    plVar4 = plVar3 + 3;
    if (lVar2 == 1) {
      *(undefined1 *)(plVar3 + 3) = *puVar1;
    }
    else {
      plVar4 = (long *)thunk_FUN_00713a50(plVar4,puVar1,lVar2);
    }
    if (plVar3 != &DAT_009452a0) {
      *(undefined4 *)(plVar3 + 2) = 0;
      *plVar3 = lVar2;
      *(undefined1 *)((long)plVar3 + lVar2 + 0x18) = 0;
    }
  }
  *param_1 = plVar4;
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00771f60();
}

