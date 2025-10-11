
bool FUN_00511d20(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uStack_20;
  
  lVar1 = FUN_00510f50(0,0,0,**(undefined4 **)(param_1 + 0x78),0,0,0);
  if (lVar1 != 0) {
    FUN_0040f1c0(param_2,**(undefined4 **)(param_1 + 0x78),lVar1,uStack_20);
  }
  return lVar1 != 0;
}

