
void FUN_004253d0(undefined8 param_1)

{
  long lVar1;
  
  lVar1 = FUN_00417730(param_1,0xe,&DAT_008ea740);
  if (lVar1 != 0) {
    *(byte *)(lVar1 + 8) = *(byte *)(lVar1 + 8) | 1;
  }
  return;
}

