
void _IO_setb(uint *param_1,undefined8 param_2,undefined8 param_3,int param_4)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = *param_1;
  if ((*(void **)(param_1 + 0xe) != (void *)0x0) && ((uVar1 & 1) == 0)) {
    free(*(void **)(param_1 + 0xe));
    uVar1 = *param_1;
  }
  *(undefined8 *)(param_1 + 0xe) = param_2;
  *(undefined8 *)(param_1 + 0x10) = param_3;
  uVar2 = uVar1 | 1;
  if (param_4 != 0) {
    uVar2 = uVar1 & 0xfffffffe;
  }
  *param_1 = uVar2;
  return;
}

