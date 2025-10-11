
bool FUN_004b00b0(undefined8 *param_1)

{
  code *pcVar1;
  long lVar2;
  undefined8 uVar3;
  
  lVar2 = FUN_00417730(*param_1,0x11,&DAT_009023c0);
  if (lVar2 != 0) {
    FUN_004ab650(param_1,0);
    pcVar1 = *(code **)(lVar2 + 0x30);
    uVar3 = FUN_004ab640(param_1);
    (*pcVar1)(uVar3);
  }
  return lVar2 != 0;
}

