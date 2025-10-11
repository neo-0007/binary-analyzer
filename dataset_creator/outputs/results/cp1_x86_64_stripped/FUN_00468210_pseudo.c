
undefined8 FUN_00468210(long param_1,undefined8 param_2)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  
  lVar4 = 0x40;
  lVar2 = FUN_0043c5c0(param_1 + 8);
  if (lVar2 != 0) {
    iVar1 = FUN_0040a170(lVar2);
    lVar4 = (long)iVar1;
  }
  lVar2 = FUN_0041cdd0(param_2,"size");
  if (lVar2 != 0) {
    uVar3 = thunk_FUN_0041d9c0(lVar2,lVar4);
    return uVar3;
  }
  return 0xfffffffe;
}

