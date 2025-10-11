
void _IO_wsetb(long param_1,undefined8 param_2,undefined8 param_3,int param_4)

{
  uint uVar1;
  uint uVar2;
  long lVar3;
  
  lVar3 = *(long *)(param_1 + 0xa0);
  uVar1 = *(uint *)(param_1 + 0x74);
  if ((*(void **)(lVar3 + 0x30) != (void *)0x0) && ((uVar1 & 8) == 0)) {
    free(*(void **)(lVar3 + 0x30));
    lVar3 = *(long *)(param_1 + 0xa0);
    uVar1 = *(uint *)(param_1 + 0x74);
  }
  *(undefined8 *)(lVar3 + 0x30) = param_2;
  *(undefined8 *)(lVar3 + 0x38) = param_3;
  uVar2 = uVar1 | 8;
  if (param_4 != 0) {
    uVar2 = uVar1 & 0xfffffff7;
  }
  *(uint *)(param_1 + 0x74) = uVar2;
  return;
}

