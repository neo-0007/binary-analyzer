
void FUN_00669270(long *param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = *param_1;
  *(undefined4 *)(lVar1 + 0x78) = 0;
  *(undefined1 *)(lVar1 + 0xc0) = 0;
  FUN_00665d90();
  lVar1 = *param_1;
  *(undefined2 *)(lVar1 + 0xa9) = 0;
  uVar2 = *(undefined8 *)(lVar1 + 0x98);
  *(undefined8 *)(lVar1 + 0x28) = 0;
  *(undefined8 *)(lVar1 + 8) = uVar2;
  *(undefined8 *)(lVar1 + 0x10) = uVar2;
  *(undefined8 *)(lVar1 + 0x18) = uVar2;
  *(undefined8 *)(lVar1 + 0x20) = 0;
  *(undefined8 *)(lVar1 + 0x84) = *(undefined8 *)(lVar1 + 0x7c);
  *(undefined8 *)(lVar1 + 0x30) = 0;
  *(undefined8 *)(*param_1 + 0x8c) = *(undefined8 *)(*param_1 + 0x84);
  return;
}

