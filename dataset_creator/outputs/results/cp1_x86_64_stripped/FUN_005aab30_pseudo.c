
void FUN_005aab30(undefined8 param_1,long *param_2)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  
  if (param_2 == (long *)0x0) {
    lVar2 = 0;
    uVar3 = 0;
  }
  else {
    lVar2 = *param_2;
    uVar3 = 0;
    if (lVar2 != 0) {
      uVar3 = *(undefined8 *)(lVar2 + 0x68);
      lVar2 = *(long *)(lVar2 + 0x70);
    }
  }
  uVar1 = FUN_005afca0();
  FUN_0049e6c0(uVar1,param_1,param_2,uVar3,lVar2);
  return;
}

