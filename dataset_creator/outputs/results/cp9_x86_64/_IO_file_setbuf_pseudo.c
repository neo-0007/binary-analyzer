
long _IO_file_setbuf(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = _IO_default_setbuf();
  if (lVar2 != 0) {
    uVar1 = *(undefined8 *)(param_1 + 0x38);
    *(undefined8 *)(param_1 + 8) = uVar1;
    *(undefined8 *)(param_1 + 0x10) = uVar1;
    *(undefined8 *)(param_1 + 0x18) = uVar1;
    *(undefined8 *)(param_1 + 0x20) = uVar1;
    *(undefined8 *)(param_1 + 0x28) = uVar1;
    *(undefined8 *)(param_1 + 0x30) = uVar1;
    lVar2 = param_1;
  }
  return lVar2;
}

