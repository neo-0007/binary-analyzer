
long FUN_004b0110(undefined8 *param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4)

{
  code *pcVar1;
  int iVar2;
  long lVar3;
  undefined8 uVar4;
  
  lVar3 = FUN_00417730(*param_1,0x11,&DAT_009023c0);
  if ((lVar3 == 0) || (pcVar1 = *(code **)(lVar3 + 0x20), pcVar1 == (code *)0x0)) {
    lVar3 = -1;
  }
  else {
    uVar4 = FUN_004ab640(param_1);
    iVar2 = (*pcVar1)(uVar4,param_2,param_3,param_4);
    lVar3 = (long)iVar2;
  }
  return lVar3;
}

