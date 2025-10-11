
undefined8 FUN_007b5cf0(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  
  lVar1 = thunk_FUN_00712710(param_2,0x24);
  if (lVar1 == 0) {
LAB_007b5d16:
    uVar2 = FUN_007128a0(param_2);
    return uVar2;
  }
  lVar6 = 0;
  do {
    lVar1 = lVar1 + 1;
    lVar3 = FUN_007b2d50(lVar1,"ORIGIN");
    if (((lVar3 != 0) || (lVar3 = FUN_007b2d50(lVar1,"PLATFORM"), lVar3 != 0)) ||
       (lVar3 = FUN_007b2d50(lVar1,&DAT_007d043b), lVar3 != 0)) {
      lVar6 = lVar6 + 1;
      lVar1 = lVar1 + lVar3;
    }
    lVar1 = thunk_FUN_00712710(lVar1,0x24);
  } while (lVar1 != 0);
  if (lVar6 == 0) goto LAB_007b5d16;
  lVar3 = thunk_FUN_007129d0(param_2);
  lVar1 = *(long *)(param_1 + 0x350);
  if (lVar1 == 0) {
    if (**(char **)(param_1 + 8) != '\0') {
                    /* WARNING: Subroutine does not return */
      FUN_006e2220("(l)->l_name[0] == \'\\0\' || IS_RTLD (l)","dl-load.c",0x192,
                   "expand_dynamic_string_token");
    }
    lVar1 = FUN_007b99f0();
    *(long *)(param_1 + 0x350) = lVar1;
    if (0xfffffffffffffffd < lVar1 - 1U) goto LAB_007b5e3c;
  }
  else if (lVar1 == -1) {
LAB_007b5e3c:
    uVar4 = 0;
    goto LAB_007b5dc5;
  }
  uVar4 = thunk_FUN_007129d0(lVar1);
LAB_007b5dc5:
  uVar5 = DAT_0094b0e8;
  if (DAT_0094b0e8 < 0x14) {
    uVar5 = 0x14;
  }
  if (uVar5 < uVar4) {
    uVar5 = uVar4;
  }
  lVar1 = FUN_007101b0(lVar3 + 1 + (uVar5 - 4) * lVar6);
  if (lVar1 == 0) {
    return 0;
  }
  uVar2 = FUN_007b5b60(param_1,param_2,lVar1);
  return uVar2;
}

