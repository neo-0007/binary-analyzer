
undefined8 FUN_00515740(undefined8 param_1)

{
  undefined8 uVar1;
  long lVar2;
  
  uVar1 = FUN_00420cf0();
  lVar2 = FUN_00417730(uVar1,0xb,&DAT_00904060);
  if (lVar2 == 0) {
    return 1;
  }
  uVar1 = FUN_00425910(lVar2,param_1);
  return uVar1;
}

