
undefined8 FUN_00437020(undefined8 param_1)

{
  undefined8 uVar1;
  long lVar2;
  
  uVar1 = FUN_00420cf0();
  lVar2 = FUN_00417730(uVar1,0xf,&DAT_008eaa30);
  if (lVar2 == 0) {
    return 1;
  }
  uVar1 = FUN_00425910(lVar2,param_1);
  return uVar1;
}

