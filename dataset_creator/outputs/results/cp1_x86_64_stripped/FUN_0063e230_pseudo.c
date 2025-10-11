
uint * FUN_0063e230(long param_1,uint *param_2,uint *param_3,undefined1 param_4,undefined1 *param_5)

{
  long lVar1;
  undefined1 uVar2;
  int iVar3;
  undefined8 uVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  
  uVar4 = FUN_006e1eb0(*(undefined8 *)(param_1 + 0x10));
  if (*(char *)(param_1 + 0x18) == '\0') {
    if (param_2 < param_3) {
      lVar1 = -1 - (long)param_2;
      puVar5 = param_5;
      do {
        iVar3 = FUN_00756850(*param_2);
        uVar2 = (char)iVar3;
        if (iVar3 == -1) {
          uVar2 = param_4;
        }
        puVar6 = puVar5 + 1;
        param_2 = param_2 + 1;
        *puVar5 = uVar2;
        puVar5 = puVar6;
      } while (puVar6 != param_5 + ((ulong)((long)param_3 + lVar1) >> 2) + 1);
    }
  }
  else if (param_2 < param_3) {
    puVar5 = param_5 + ((ulong)((long)param_3 + (-1 - (long)param_2)) >> 2) + 1;
    do {
      if (*param_2 < 0x80) {
        uVar2 = *(undefined1 *)(param_1 + 0x19 + (long)(int)*param_2);
      }
      else {
        iVar3 = FUN_00756850();
        uVar2 = (char)iVar3;
        if (iVar3 == -1) {
          uVar2 = param_4;
        }
      }
      *param_5 = uVar2;
      param_5 = param_5 + 1;
      param_2 = param_2 + 1;
    } while (puVar5 != param_5);
  }
  FUN_006e1eb0(uVar4);
  return param_3;
}

