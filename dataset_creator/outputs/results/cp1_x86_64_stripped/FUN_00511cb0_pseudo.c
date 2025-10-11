
bool FUN_00511cb0(long param_1,undefined8 param_2,undefined4 param_3)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uStack_20;
  
  lVar2 = *(long *)(param_1 + 0x60);
  if (lVar2 != 0) {
    uVar1 = FUN_0053e6e0(lVar2);
    uStack_20 = 0x511cda;
    lVar2 = FUN_00420cf0(uVar1);
  }
  lVar2 = FUN_00510f50(0,param_2,param_3,**(undefined4 **)(param_1 + 8),1,lVar2,0);
  if (lVar2 != 0) {
    FUN_0040f1c0(param_1,**(undefined4 **)(param_1 + 8),lVar2,uStack_20);
  }
  return lVar2 != 0;
}

