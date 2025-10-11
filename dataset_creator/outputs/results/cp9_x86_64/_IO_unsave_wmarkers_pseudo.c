
void _IO_unsave_wmarkers(uint *param_1)

{
  undefined8 *puVar1;
  void *pvVar2;
  undefined8 uVar3;
  long lVar4;
  void *__ptr;
  
  if (*(long *)(param_1 + 0x18) != 0) {
    param_1[0x18] = 0;
    param_1[0x19] = 0;
  }
  if (*(long *)(param_1 + 0x12) != 0) {
    puVar1 = *(undefined8 **)(param_1 + 0x28);
    pvVar2 = (void *)puVar1[8];
    __ptr = pvVar2;
    if ((*param_1 & 0x100) != 0) {
      *param_1 = *param_1 & 0xfffffeff;
      uVar3 = puVar1[1];
      *puVar1 = pvVar2;
      puVar1[1] = puVar1[10];
      puVar1[10] = uVar3;
      __ptr = (void *)puVar1[2];
      puVar1[2] = pvVar2;
      puVar1[8] = __ptr;
    }
    free(__ptr);
    lVar4 = *(long *)(param_1 + 0x28);
    *(undefined8 *)(lVar4 + 0x50) = 0;
    *(undefined1 (*) [16])(lVar4 + 0x40) = (undefined1  [16])0x0;
  }
  return;
}

