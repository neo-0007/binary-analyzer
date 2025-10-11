
void FUN_006b9130(long param_1,undefined1 param_2)

{
  long lVar1;
  long lVar2;
  
  lVar1 = *(long *)(param_1 + 0x100);
  if (lVar1 == 0xff) {
    *(undefined1 *)(param_1 + 0xff) = 0;
    (**(code **)(param_1 + 0x110))(param_1,0xff,*(undefined8 *)(param_1 + 0x118));
    *(long *)(param_1 + 0x140) = *(long *)(param_1 + 0x140) + 1;
    lVar2 = 1;
    lVar1 = 0;
  }
  else {
    lVar2 = lVar1 + 1;
  }
  *(long *)(param_1 + 0x100) = lVar2;
  *(undefined1 *)(param_1 + lVar1) = param_2;
  *(undefined1 *)(param_1 + 0x108) = param_2;
  return;
}

