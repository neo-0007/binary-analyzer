
byte FUN_00425390(undefined8 param_1)

{
  long lVar1;
  byte bVar2;
  
  lVar1 = FUN_00417730(param_1,0xe,&DAT_008ea740);
  bVar2 = 0;
  if (lVar1 != 0) {
    bVar2 = *(byte *)(lVar1 + 8) & 1;
  }
  return bVar2;
}

