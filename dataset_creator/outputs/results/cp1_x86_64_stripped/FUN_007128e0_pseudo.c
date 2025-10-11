
undefined8 FUN_007128e0(undefined8 param_1)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  
  lVar1 = thunk_FUN_00712a40();
  lVar2 = FUN_007101b0(lVar1 + 1);
  if (lVar2 != 0) {
    *(undefined1 *)(lVar2 + lVar1) = 0;
    uVar3 = thunk_FUN_00713a50(lVar2,param_1,lVar1);
    return uVar3;
  }
  return 0;
}

