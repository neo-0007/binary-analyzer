
long FUN_007b5ab0(undefined8 param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  lVar3 = 0;
  lVar1 = thunk_FUN_00712710(param_1,0x24);
  if (lVar1 != 0) {
    do {
      lVar1 = lVar1 + 1;
      lVar2 = FUN_007b2d50(lVar1,"ORIGIN");
      if (((lVar2 != 0) || (lVar2 = FUN_007b2d50(lVar1,"PLATFORM"), lVar2 != 0)) ||
         (lVar2 = FUN_007b2d50(lVar1,&DAT_007d043b), lVar2 != 0)) {
        lVar3 = lVar3 + 1;
        lVar1 = lVar1 + lVar2;
      }
      lVar1 = thunk_FUN_00712710(lVar1,0x24);
    } while (lVar1 != 0);
    return lVar3;
  }
  return 0;
}

