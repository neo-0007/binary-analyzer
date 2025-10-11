
undefined8 * FUN_00631050(undefined8 *param_1,long param_2)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  long in_FS_OFFSET;
  undefined1 local_69;
  undefined4 *local_68;
  long local_60;
  code *local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_48 = (code *)0x0;
                    /* try { // try from 00631091 to 006310d8 has its CatchHandler @ 006311aa */
  FUN_00652100(*(undefined8 *)(param_2 + 0x20),&local_68);
  if (local_48 == (code *)0x0) {
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 00631194 to 006311a9 has its CatchHandler @ 006311aa */
    FUN_00403890("uninitialized __any_string");
  }
  lVar3 = local_60 * 4;
  if (lVar3 == 0) {
    *param_1 = &DAT_009452d8;
  }
  else {
    if (local_68 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_00403890("basic_string::_S_construct null not valid");
    }
    lVar1 = lVar3 >> 2;
    plVar2 = (long *)FUN_0063af10(lVar1,0,&local_69);
    if (lVar1 == 1) {
      *(undefined4 *)(plVar2 + 3) = *local_68;
    }
    else if (lVar1 != 0) {
      FUN_00771ea0(plVar2 + 3,local_68,lVar1,0x3fffffffffffffff);
    }
    if (plVar2 != &DAT_009452c0) {
      *(undefined4 *)(plVar2 + 2) = 0;
      *plVar2 = lVar1;
      *(undefined4 *)((long)plVar2 + lVar3 + 0x18) = 0;
    }
    *param_1 = plVar2 + 3;
    if (local_48 == (code *)0x0) goto LAB_00631109;
  }
  (*local_48)(&local_68);
LAB_00631109:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00771f60();
}

