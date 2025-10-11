
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_006d27d0(undefined8 param_1,long *param_2,long *param_3,long *param_4,long *param_5)

{
  long lVar1;
  long lVar2;
  undefined4 uVar3;
  long in_FS_OFFSET;
  undefined8 local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_4 == (long *)0x0) {
    if ((param_2 != (long *)0x0) && (lVar1 = *param_2, lVar1 != 0)) {
      uVar3 = FUN_006d2e40(param_1,param_2,*param_3 + lVar1,0,*param_5 + _SUB_00000000,&local_48);
      *param_3 = *param_3 + (lVar1 - *param_2);
      goto code_r0x006d28d2;
    }
LAB_006d2920:
    uVar3 = FUN_006d2e40(param_1,0,0,0,0,&local_48);
  }
  else {
    lVar1 = *param_4;
    if ((param_2 == (long *)0x0) || (lVar2 = *param_2, lVar2 == 0)) {
      if (lVar1 == 0) goto LAB_006d2920;
      uVar3 = FUN_006d2e40(param_1,0,0,param_4,*param_5 + lVar1,&local_48);
    }
    else {
      uVar3 = FUN_006d2e40(param_1,param_2,*param_3 + lVar2,param_4,*param_5 + lVar1,&local_48);
      *param_3 = *param_3 + (lVar2 - *param_2);
      if (lVar1 == 0) goto code_r0x006d28d2;
    }
    *param_5 = *param_5 + (lVar1 - *param_4);
  }
code_r0x006d28d2:
  switch(uVar3) {
  case 0:
  case 4:
    break;
  default:
                    /* WARNING: Subroutine does not return */
    FUN_006e2220("!\"Nothing like this should happen\"","iconv.c",0x5a,"iconv");
  case 5:
    *(undefined4 *)(in_FS_OFFSET + -0x58) = 7;
    local_48 = 0xffffffffffffffff;
    break;
  case 6:
    *(undefined4 *)(in_FS_OFFSET + -0x58) = 0x54;
    local_48 = 0xffffffffffffffff;
    break;
  case 7:
    *(undefined4 *)(in_FS_OFFSET + -0x58) = 0x16;
    local_48 = 0xffffffffffffffff;
    break;
  case 8:
    *(undefined4 *)(in_FS_OFFSET + -0x58) = 9;
    local_48 = 0xffffffffffffffff;
  }
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    FUN_00771f60();
  }
  return local_48;
}

